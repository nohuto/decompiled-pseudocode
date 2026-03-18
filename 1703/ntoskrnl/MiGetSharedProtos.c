/*
 * XREFs of MiGetSharedProtos @ 0x140221220
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiGetImageProtoProtection @ 0x14002D55C (MiGetImageProtoProtection.c)
 *     MiComputeImagePteIndex @ 0x140097E7C (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x14022124C (MiGetSharedProtosAtDpcLevel.c)
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
