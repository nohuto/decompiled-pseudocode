/*
 * XREFs of CmSiAllocateMemory @ 0x140006CF0
 * Callers:
 *     HvpViewMapCreateView @ 0x1404973B0 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x14065197C (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
