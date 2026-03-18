/*
 * XREFs of fsc_CheckEndPoint @ 0x1C02C7E0C
 * Callers:
 *     EvaluateSpline @ 0x1C02B9CB4 (EvaluateSpline.c)
 *     fsc_FillGlyph @ 0x1C02BA658 (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C02C7C94 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C02C7D58 (CheckVertTopology.c)
 */

__int64 __fastcall fsc_CheckEndPoint(int a1, int a2, char a3)
{
  __int64 result; // rax

  if ( (dword_1C033423C & 0x3F) == 0x20 )
  {
    if ( dword_1C0334238 == a1 && dword_1C033423C == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C0334240 = a1;
      dword_1C0334244 = a2;
    }
    else
    {
      result = CheckHorizTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
    }
  }
  if ( (a3 & 2) == 0 && (dword_1C0334238 & 0x3F) == 0x20 )
  {
    if ( dword_1C0334238 == a1 && dword_1C033423C == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C0334240 = a1;
      dword_1C0334244 = a2;
    }
    else
    {
      result = CheckVertTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
    }
  }
  State[0] = dword_1C0334238;
  dword_1C0334234 = dword_1C033423C;
  dword_1C033423C = a2;
  dword_1C0334238 = a1;
  return 0LL;
}
