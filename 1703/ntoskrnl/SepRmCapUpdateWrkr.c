/*
 * XREFs of SepRmCapUpdateWrkr @ 0x1405C5A40
 * Callers:
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SepBuildCapPolicyTable @ 0x14016292C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140246D54 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  volatile signed __int64 *v6; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v9 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, &v9);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    if ( v9 )
      *(_QWORD *)(v9 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
    v6 = (volatile signed __int64 *)SepRmCapTable;
    SepRmCapTable = (PRTL_DYNAMIC_HASH_TABLE)v9;
    SepRmEnforceCap = v9 != 0;
    if ( v9 && InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)SepRmCapTable);
      SepRmCapTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(SepRmDefaultCap + 64) + 32LL) = SeDefaultRecoveryCapeSd;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v6 )
      result = SepRmDereferenceCapTable(v6);
  }
  *(_DWORD *)(a2 + 40) = v4;
  return result;
}
