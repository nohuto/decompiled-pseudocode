/*
 * XREFs of MiLockAddressSpaceToo @ 0x140071B04
 * Callers:
 *     MiPrepareVadDelete @ 0x140515520 (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int32 *)(a1 + 872);
  result = KeAbPreAcquire(a1 + 872, 0LL, 1);
  if ( _interlockedbittestandset64(v4, 0LL) )
  {
    if ( result )
      KeAbPostReleaseEx((ULONG_PTR)v4);
    MiUnlockVad(CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  else
  {
    if ( result )
      *(_BYTE *)(result + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
