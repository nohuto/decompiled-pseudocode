/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x14048B3B0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140002044 (KeUpdateTotalCyclesCurrentThread.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rbx
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  v6 = *(_QWORD *)(a1 + 592);
  v7 = (_QWORD **)(a1 + 1160);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = *(v8 - 204);
    v8 = (_QWORD *)*v8;
    v6 += v9;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
