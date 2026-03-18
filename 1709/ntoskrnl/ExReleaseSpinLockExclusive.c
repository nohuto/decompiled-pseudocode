/*
 * XREFs of ExReleaseSpinLockExclusive @ 0x140110B40
 * Callers:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiUpdateLastSubsectionSize @ 0x1401109B8 (MiUpdateLastSubsectionSize.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
