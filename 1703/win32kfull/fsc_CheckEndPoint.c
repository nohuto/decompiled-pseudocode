/*
 * XREFs of fsc_CheckEndPoint @ 0x1C02CE038
 * Callers:
 *     EvaluateSpline @ 0x1C02BFEA8 (EvaluateSpline.c)
 *     fsc_FillGlyph @ 0x1C02C0850 (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C02CDEC0 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C02CDF84 (CheckVertTopology.c)
 */

__int64 __fastcall fsc_CheckEndPoint(int a1, int a2, char a3)
{
  int v3; // r9d
  int v5; // ecx
  __int64 result; // rax

  v3 = dword_1C0338B18;
  v5 = dword_1C0338B1C;
  if ( (dword_1C0338B1C & 0x3F) == 0x20 )
  {
    if ( dword_1C0338B18 == a1 && dword_1C0338B1C == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C0338B20 = a1;
      dword_1C0338B24 = a2;
    }
    else
    {
      result = CheckHorizTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
      v5 = dword_1C0338B1C;
      v3 = dword_1C0338B18;
    }
  }
  if ( (a3 & 2) == 0 && (v3 & 0x3F) == 0x20 )
  {
    if ( v3 == a1 && v5 == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C0338B20 = a1;
      dword_1C0338B24 = a2;
    }
    else
    {
      result = CheckVertTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
      v5 = dword_1C0338B1C;
      v3 = dword_1C0338B18;
    }
  }
  State[0] = v3;
  dword_1C0338B14 = v5;
  dword_1C0338B18 = a1;
  dword_1C0338B1C = a2;
  return 0LL;
}
