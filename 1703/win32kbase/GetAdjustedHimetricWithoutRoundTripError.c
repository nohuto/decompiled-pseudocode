/*
 * XREFs of GetAdjustedHimetricWithoutRoundTripError @ 0x1C012E990
 * Callers:
 *     GetAdjustedHimetric @ 0x1C012E840 (GetAdjustedHimetric.c)
 * Callees:
 *     ConvertCoordinates @ 0x1C012E700 (ConvertCoordinates.c)
 */

__int64 __fastcall GetAdjustedHimetricWithoutRoundTripError(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        LONG plResult,
        int a7,
        _DWORD *a8)
{
  int v9; // r10d
  LONG v11; // ebx
  int *v15; // r11
  int v16; // ebx
  int v17; // r10d
  _DWORD *v18; // r11
  int v19; // eax

  v9 = a7;
  v11 = plResult;
  *a8 = plResult;
  if ( !v9 )
    return 1LL;
  if ( ConvertCoordinates(0, a2 - a1, 0, a4 - a3, v9, &plResult) )
  {
    v16 = plResult + v11;
    *v15 = v16;
    if ( ConvertCoordinates(a3, a4, a1, a2, v16, &plResult) )
    {
      if ( plResult != v17 + a5 )
      {
        v19 = 1;
        if ( v17 <= 0 )
          v19 = -1;
        *v18 = v16 + v19;
      }
      return 1LL;
    }
  }
  return 0LL;
}
