/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1401150C0
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x14003B2D0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  if ( Mcb->PoolType == 1 && Mcb->MaximumPairCount == 15 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlFirstMappingLookasideList, Mcb->Mapping);
  else
    ExFreePoolWithTag(Mcb->Mapping, 0);
}
