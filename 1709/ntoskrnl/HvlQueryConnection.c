/*
 * XREFs of HvlQueryConnection @ 0x1401349C0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400D83C0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x1405ABC98 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x14074EC14 (EtwpSysModuleRunDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
