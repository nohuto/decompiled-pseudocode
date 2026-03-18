/*
 * XREFs of DrawDiagonal @ 0x1C02396A0
 * Callers:
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 * Callees:
 *     DrawDiagonalLine @ 0x1C0239760 (DrawDiagonalLine.c)
 */

_BOOL8 __fastcall DrawDiagonal(HDC a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // r14
  unsigned int v8; // edx
  unsigned int v9; // edx

  if ( (a5 & 8) == 0 )
    a4 = a3;
  v7 = GreSelectBrush(a1, a4);
  v8 = DrawDiagonalLine(a1, a5 & 0xFFFFF7FF);
  if ( (a5 & 2) != 0 )
    *a2 += (unsigned __int16)v8;
  else
    a2[2] -= (unsigned __int16)v8;
  v9 = HIWORD(v8);
  if ( (a5 & 4) != 0 )
    a2[1] += v9;
  else
    a2[3] -= v9;
  return GreSelectBrush(a1, v7) != 0;
}
