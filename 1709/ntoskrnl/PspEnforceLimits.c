/*
 * XREFs of PspEnforceLimits @ 0x14050F6C0
 * Callers:
 *     PspJobTimeLimitsWork @ 0x14050E960 (PspJobTimeLimitsWork.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x1405109D0 (PspGetNextJob.c)
 */

LONG_PTR __fastcall PspEnforceLimits(char a1)
{
  LONG_PTR result; // rax
  LONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v10[8]; // [rsp+50h] [rbp-78h] BYREF

  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 && PspNoWakeChargeReferencedProcess )
  {
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, Buffer, 4u, 0LL, 0LL, 0, 0);
    ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  result = PspGetNextJob(0LL);
  v3 = result;
  if ( result )
  {
    do
    {
      if ( !*(_QWORD *)(v3 + 1072) && (!a1 || (*(_DWORD *)(v3 + 1304) & 0x100000) != 0) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFEFFFFF);
        memset(v10, 0, sizeof(v10));
        PspEnumJobsAndProcessesInJobHierarchy((PVOID)v3, (__int64)v10, 6);
      }
      CurrentThread = KeGetCurrentThread();
      v5 = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
      v6 = *(__int64 **)(v3 + 24);
      if ( v6 != &PspJobList )
      {
        while ( !ObReferenceObjectSafeWithTag((__int64)(v6 - 3)) )
        {
          v6 = (__int64 *)*v6;
          if ( v6 == &PspJobList )
            goto LABEL_9;
        }
        v5 = v6 - 3;
      }
LABEL_9:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
      KeAbPostRelease((ULONG_PTR)&PspJobListLock);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v7);
      }
      result = ObfDereferenceObjectWithTag((PVOID)v3, 0x6E457350u);
      v3 = (LONG_PTR)v5;
    }
    while ( v5 );
  }
  return result;
}
