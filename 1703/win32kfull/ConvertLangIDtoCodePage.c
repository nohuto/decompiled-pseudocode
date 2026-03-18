/*
 * XREFs of ConvertLangIDtoCodePage @ 0x1C0225B60
 * Callers:
 *     bComputeIFISIZE @ 0x1C0226660 (bComputeIFISIZE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertLangIDtoCodePage(__int16 a1)
{
  if ( a1 != 1028 )
  {
    if ( a1 == 2052 )
      return 936LL;
    if ( a1 != 3076 )
    {
      if ( a1 != 4100 )
      {
        if ( a1 != 5124 )
          return 0LL;
        return 950LL;
      }
      return 936LL;
    }
  }
  return 950LL;
}
