/*
 * XREFs of RaidIsDmaInitialized @ 0x1C0063234
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0018904 (RaidAdapterCompleteInitialization.c)
 *     StorPortGetUncachedExtension @ 0x1C0018E80 (StorPortGetUncachedExtension.c)
 *     RaidInitializePerfOpts @ 0x1C001DA14 (RaidInitializePerfOpts.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
