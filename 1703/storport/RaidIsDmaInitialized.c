/*
 * XREFs of RaidIsDmaInitialized @ 0x1C00605BC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0019510 (RaidAdapterCompleteInitialization.c)
 *     StorPortGetUncachedExtension @ 0x1C00199A0 (StorPortGetUncachedExtension.c)
 *     RaidInitializePerfOpts @ 0x1C001CAF4 (RaidInitializePerfOpts.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return *a1 != 0LL;
  return result;
}
