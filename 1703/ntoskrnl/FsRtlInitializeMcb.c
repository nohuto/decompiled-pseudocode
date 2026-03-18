/*
 * XREFs of FsRtlInitializeMcb @ 0x140685460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
