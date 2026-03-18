/*
 * XREFs of WbMoveHeapExecutedBlockToBackOfLRU @ 0x14050F9F8
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall WbMoveHeapExecutedBlockToBackOfLRU(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 *v11; // rax
  __int64 **v12; // rcx
  __int64 **v13; // rcx
  char v14; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 80);
  v6 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v10 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( (a2[2] & 1) != 0 )
  {
    v11 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v12 = (__int64 **)a2[1], *v12 != a2) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (__int64)v12;
    v13 = *(__int64 ***)(a1 + 72);
    if ( *v13 != (__int64 *)(a1 + 64) )
      __fastfail(3u);
    *a2 = a1 + 64;
    a2[1] = (__int64)v13;
    *v13 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v5);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
