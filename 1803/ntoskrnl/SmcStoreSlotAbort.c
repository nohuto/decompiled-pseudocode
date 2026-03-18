/*
 * XREFs of SmcStoreSlotAbort @ 0x1407A013C
 * Callers:
 *     SmcStoreCreate @ 0x14079F994 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x1407A0278 (SmcStoreSlotReserve.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _PRIVILEGE_SET *v7; // rbp

  v4 = (volatile signed __int64 *)(a1 + 160);
  if ( !(_DWORD)a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v7 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  CmSiFreeMemory(v7);
}
