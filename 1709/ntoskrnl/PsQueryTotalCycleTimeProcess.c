/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140716370
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140202BF4 (KeUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, unsigned __int64 *a2)
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
