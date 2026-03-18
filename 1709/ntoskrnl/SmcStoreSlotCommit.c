/*
 * XREFs of SmcStoreSlotCommit @ 0x14073D1CC
 * Callers:
 *     SmcStoreCreate @ 0x14073C98C (SmcStoreCreate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rbp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 160);
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (a4 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 3;
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
}
