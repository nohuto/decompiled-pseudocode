/*
 * XREFs of ?IsProperRectForArrangement@@YAHQEBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D8804
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01DA9AC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01D7FD8 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall IsProperRectForArrangement(const struct tagRECT *a1, const struct tagRECT *a2, int a3)
{
  unsigned int v4; // ebx
  char OverlapCoordinatesForArrangement; // r9
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  bool v10; // zf

  v4 = 0;
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(a1, a2, 1);
  v6 = 63745;
  if ( (OverlapCoordinatesForArrangement & 3) != 3 )
    v6 = 0;
  if ( (OverlapCoordinatesForArrangement & 9) == 9 )
    v6 = 63745;
  v7 = v6 | 0xF902;
  if ( (OverlapCoordinatesForArrangement & 6) != 6 )
    v7 = v6;
  v8 = v7 | 0xF902;
  if ( (OverlapCoordinatesForArrangement & 0xC) != 0xC )
    v8 = v7;
  v9 = a3 - 1;
  if ( !v9 )
  {
    v10 = v8 == 63745;
    goto LABEL_13;
  }
  if ( v9 == 1 )
  {
    v10 = v8 == 63746;
LABEL_13:
    LOBYTE(v4) = v10;
  }
  return v4;
}
