/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x140097F34
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiComputeImagePteIndex @ 0x140097E7C (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x140147260 (MiImageProtoChargedCommit.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 *     MiDeleteSessionDriverProtos @ 0x140585040 (MiDeleteSessionDriverProtos.c)
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
