/*
 * XREFs of StorCompareUlongKey @ 0x1C0006430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCompareUlongKey(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 < a2 )
    return 0xFFFFFFFFLL;
  else
    return a1 != a2;
}
