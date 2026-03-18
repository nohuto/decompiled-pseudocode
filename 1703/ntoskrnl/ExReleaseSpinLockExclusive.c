/*
 * XREFs of ExReleaseSpinLockExclusive @ 0x14001DF40
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockExclusive(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
  else
    *SpinLock = 0;
  __writecr8(OldIrql);
}
