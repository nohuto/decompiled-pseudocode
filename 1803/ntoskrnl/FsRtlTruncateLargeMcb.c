/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x1400AFAB0
 * Callers:
 *     FsRtlTruncateMcb @ 0x140224BD0 (FsRtlTruncateMcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x1400AFAF0 (FsRtlTruncateBaseMcb.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
