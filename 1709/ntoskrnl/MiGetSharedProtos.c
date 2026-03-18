/*
 * XREFs of MiGetSharedProtos @ 0x14022DECC
 * Callers:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiComputeImagePteIndex @ 0x1400B6E70 (MiComputeImagePteIndex.c)
 *     MiGetImageProtoProtection @ 0x14011D114 (MiGetImageProtoProtection.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiAddMappedPtes @ 0x1404F7940 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x14022DEF8 (MiGetSharedProtosAtDpcLevel.c)
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
