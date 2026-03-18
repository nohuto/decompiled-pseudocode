/*
 * XREFs of HvlQueryConnection @ 0x14003C9D0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400E6B30 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x1404B0BC8 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
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
