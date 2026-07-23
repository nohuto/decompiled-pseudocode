/*
 * XREFs of WbAddHeapExecutedBlockToLRU @ 0x14057653C
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     sub_140502844 @ 0x140502844 (sub_140502844.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToLRU(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rsi
  __int64 *v8; // rcx
  char v9; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 80);
  v6 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int16 *)v5);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = *(__int64 **)(a1 + 72);
  if ( *v8 != a1 + 64 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 64;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a2 + 16) |= 1u;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return sub_140502844(a2);
}
