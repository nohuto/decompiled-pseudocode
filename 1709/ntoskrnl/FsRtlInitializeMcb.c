/*
 * XREFs of FsRtlInitializeMcb @ 0x1406B0860
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeLargeMcb @ 0x140129CD0 (FsRtlInitializeLargeMcb.c)
 */

void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
