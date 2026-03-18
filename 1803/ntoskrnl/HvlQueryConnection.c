/*
 * XREFs of HvlQueryConnection @ 0x140173020
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14012D2E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x1406297E8 (EtwpSysModuleRunDown.c)
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
