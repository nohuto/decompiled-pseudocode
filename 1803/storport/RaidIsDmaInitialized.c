/*
 * XREFs of RaidIsDmaInitialized @ 0x1C0065614
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C00255D4 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C002A6A4 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C00307C0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
