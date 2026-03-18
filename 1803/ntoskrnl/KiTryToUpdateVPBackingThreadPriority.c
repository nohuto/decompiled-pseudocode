/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x1400C38C0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1400A73A8 (KiTryToAcquireThreadLock.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(__int64 a1, __int64 a2)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && KiTryToAcquireThreadLock(a1, &v4) )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(a1, a2, 0LL);
    KiReleaseThreadLockSafe(a1);
  }
}
