/*
 * XREFs of ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C01EFCAC
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01F3018 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangementStyleFromOverlap(char a1)
{
  int v2; // edx
  int v3; // r8d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = 63745;
  if ( (a1 & 3) != 3 )
    v2 = 0;
  v3 = v2 | 0xF901;
  if ( (a1 & 9) != 9 )
    v3 = v2;
  v4 = v3 | 0xF902;
  if ( (a1 & 6) != 6 )
    v4 = v3;
  result = v4 | 0xF902;
  if ( (a1 & 0xC) != 0xC )
    return v4;
  return result;
}
