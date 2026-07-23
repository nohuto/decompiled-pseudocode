/*
 * XREFs of MiLockAddressSpaceToo @ 0x1400BA9EC
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x14049465C (MiPrepareVadDelete.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int32 *)(a1 + 872);
  result = KeAbPreAcquire(a1 + 872, 0LL);
  if ( _interlockedbittestandset64(v4, 0LL) )
  {
    if ( result )
      KeAbPostReleaseEx((ULONG_PTR)v4);
    MiUnlockVad((__int64)CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    if ( result )
      *(_BYTE *)(result + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
