/*
 * XREFs of bMappedViewRangeCheck @ 0x1C0236A58
 * Callers:
 *     bGetFntResource @ 0x1C0236788 (bGetFntResource.c)
 *     bInitWinResData @ 0x1C0236898 (bInitWinResData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMappedViewRangeCheck(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9

  v4 = 1;
  v5 = 1LL;
  if ( a4 )
    v5 = a4;
  v6 = v5 + a3;
  if ( a3 < a1 || a3 >= v6 || v6 > a1 + a2 || v5 > a2 )
    return 0;
  return v4;
}
