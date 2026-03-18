/*
 * XREFs of SmcStoreSlotCommit @ 0x1407A01D0
 * Callers:
 *     SmcStoreCreate @ 0x14079F994 (SmcStoreCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 160);
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (a4 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 3;
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8, v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
}
