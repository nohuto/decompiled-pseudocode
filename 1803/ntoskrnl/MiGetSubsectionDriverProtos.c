/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x140048594
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiComputeImagePteIndex @ 0x1400484D0 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x14016A0E4 (MiImageProtoChargedCommit.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x14053DE68 (MiRevertRelocations.c)
 *     MiDeleteSessionDriverProtos @ 0x1405EE6C0 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionDriverProtos(_QWORD *a1)
{
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 )
    return a1[3];
  else
    return 0LL;
}
