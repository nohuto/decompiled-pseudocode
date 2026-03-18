/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1404B4A78
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x14075595C (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, unsigned __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
