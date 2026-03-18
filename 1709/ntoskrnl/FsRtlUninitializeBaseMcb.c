/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1400E6030
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x14012C070 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  if ( Mcb->PoolType == 1 && Mcb->MaximumPairCount == 15 )
    ExFreeToNPagedLookasideList(&FsRtlFirstMappingLookasideList, Mcb->Mapping);
  else
    ExFreePoolWithTag(Mcb->Mapping, 0);
}
