/*
 * XREFs of MiLockAddressSpaceToo @ 0x14003FD5C
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x140430C44 (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

_KLOCK_ENTRY *__fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v4; // rdi
  _KLOCK_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int32 *)(a1 + 872);
  result = (_KLOCK_ENTRY *)KeAbPreAcquire(a1 + 872, 0LL);
  if ( _interlockedbittestandset64(v4, 0LL) )
  {
    if ( result )
      KeAbPostReleaseEx((ULONG_PTR)v4, result);
    MiUnlockVad(CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return (_KLOCK_ENTRY *)KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  else
  {
    if ( result )
      result->AcquiredByte |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
