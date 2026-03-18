/*
 * XREFs of MiGetSharedProtos @ 0x140268088
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiComputeImagePteIndex @ 0x1400484D0 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiGetImageProtoProtection @ 0x1400C14E0 (MiGetImageProtoProtection.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1402680B4 (MiGetSharedProtosAtDpcLevel.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = MiGetSharedProtosAtDpcLevel(a1, a2, a3);
  __writecr8(CurrentIrql);
  return result;
}
