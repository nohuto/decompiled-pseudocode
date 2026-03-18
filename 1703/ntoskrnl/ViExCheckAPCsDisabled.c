/*
 * XREFs of ViExCheckAPCsDisabled @ 0x14078020C
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14077FC90 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x14077FDA0 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x14077FE00 (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x14077FEB0 (VerifierExfAcquirePushLockExclusive.c)
 *     VerifierExfAcquirePushLockShared @ 0x14077FEF0 (VerifierExfAcquirePushLockShared.c)
 *     VerifierExfReleasePushLock @ 0x14077FF30 (VerifierExfReleasePushLock.c)
 *     VerifierExfReleasePushLockShared @ 0x14077FF70 (VerifierExfReleasePushLockShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x14077FFB0 (VerifierExfTryAcquirePushLockShared.c)
 *     VerifierExfTryToWakePushLock @ 0x14077FFF0 (VerifierExfTryToWakePushLock.c)
 *     ViExReleaseFastMutexCommon @ 0x140780278 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCsDisabled(unsigned int a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    VerifierBugCheckIfAppropriate(0xC4u, a1, CurrentIrql, KeGetCurrentThread()->CombinedApcDisable, a2);
  }
  return CurrentIrql;
}
