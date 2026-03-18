/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1400B6F28
 * Callers:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiImageProtoChargedCommit @ 0x1400B5C88 (MiImageProtoChargedCommit.c)
 *     MiComputeImagePteIndex @ 0x1400B6E70 (MiComputeImagePteIndex.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x1404F7940 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x1405ED4B4 (MiDeleteSessionDriverProtos.c)
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
