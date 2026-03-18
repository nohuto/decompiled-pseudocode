/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x1400156C0
 * Callers:
 *     FsRtlTruncateMcb @ 0x1401E3380 (FsRtlTruncateMcb.c)
 * Callees:
 *     FsRtlTruncateBaseMcb @ 0x140015700 (FsRtlTruncateBaseMcb.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
