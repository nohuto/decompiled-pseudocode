/*
 * XREFs of PspEnforceLimits @ 0x140536480
 * Callers:
 *     PspJobTimeLimitsWork @ 0x1405353B0 (PspJobTimeLimitsWork.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspGetNextJob @ 0x1405352AC (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

LONG_PTR __fastcall PspEnforceLimits(char a1)
{
  LONG_PTR result; // rax
  LONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // r14
  _DWORD Buffer[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9[8]; // [rsp+50h] [rbp-78h] BYREF

  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 && PspNoWakeChargeReferencedProcess )
  {
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, Buffer, 4u, 0LL, 0LL, 0, 0);
    ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  result = (LONG_PTR)PspGetNextJob(0LL);
  v3 = result;
  if ( result )
  {
    do
    {
      if ( !*(_QWORD *)(v3 + 1072) && (!a1 || (*(_DWORD *)(v3 + 1304) & 0x100000) != 0) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFEFFFFF);
        memset(v9, 0, sizeof(v9));
        PspEnumJobsAndProcessesInJobHierarchy((PVOID)v3, (__int64)v9, 6);
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
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      result = ObfDereferenceObjectWithTag((PVOID)v3, 0x6E457350u);
      v3 = (LONG_PTR)v5;
    }
    while ( v5 );
  }
  return result;
}
