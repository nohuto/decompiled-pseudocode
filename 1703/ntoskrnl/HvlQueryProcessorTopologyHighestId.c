/*
 * XREFs of HvlQueryProcessorTopologyHighestId @ 0x1401E5330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyHighestId(_DWORD *a1, _DWORD *a2)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = dword_14036B990;
  if ( a2 )
    *a2 = dword_14036B994;
  return 0LL;
}
