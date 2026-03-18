/*
 * XREFs of SepRmCapUpdateWrkr @ 0x140631B80
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SepBuildCapPolicyTable @ 0x1401784E0 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x14029FF18 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int64 *v9; // rsi
  char v10; // bl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v16 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, &v16);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock, v13, v14, v15);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    if ( v16 )
      *(_QWORD *)(v16 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
    v9 = (volatile signed __int64 *)SepRmCapTable;
    SepRmCapTable = (PRTL_DYNAMIC_HASH_TABLE)v16;
    SepRmEnforceCap = v16 != 0;
    if ( v16 && InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)SepRmCapTable);
      SepRmCapTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(SepRmDefaultCap + 64) + 32LL) = SeDefaultRecoveryCapeSd;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
      result = SepRmDereferenceCapTable(v9);
  }
  *(_DWORD *)(a2 + 40) = v4;
  return result;
}
