/*
 * XREFs of WbAddHeapExecutedBlockToLRU @ 0x14053AC9C
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14050FC44 @ 0x14050FC44 (sub_14050FC44.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToLRU(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 *v11; // rcx
  char v12; // bp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 80);
  v6 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v10 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *(__int64 **)(a1 + 72);
  if ( *v11 != a1 + 64 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 64;
  *(_QWORD *)(a2 + 8) = v11;
  *v11 = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a2 + 16) |= 1u;
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return sub_14050FC44(a2);
}
