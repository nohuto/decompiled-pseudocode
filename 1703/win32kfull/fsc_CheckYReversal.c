/*
 * XREFs of fsc_CheckYReversal @ 0x1C02C04F4
 * Callers:
 *     fsc_CheckYReversalInSpline @ 0x1C02C05A0 (fsc_CheckYReversalInSpline.c)
 *     fsc_MeasureGlyph @ 0x1C02C0E00 (fsc_MeasureGlyph.c)
 * Callees:
 *     fsc_AddYReversal @ 0x1C02CD400 (fsc_AddYReversal.c)
 */

__int64 __fastcall fsc_CheckYReversal(__int64 a1, __int64 a2, int a3, _WORD *a4, _WORD *a5, _WORD *a6)
{
  __int64 result; // rax

  if ( *a4 )
  {
    if ( *a4 == 1 )
    {
      if ( a3 <= (int)a2 )
      {
        result = fsc_AddYReversal(a1, a2, 1LL);
        if ( (_DWORD)result )
          return result;
        *a4 = -1;
      }
    }
    else if ( a3 >= (int)a2 )
    {
      result = fsc_AddYReversal(a1, a2, 0xFFFFFFFFLL);
      if ( (_DWORD)result )
        return result;
      *a4 = 1;
    }
  }
  else if ( a3 <= (int)a2 )
  {
    if ( a3 >= (int)a2 )
    {
      ++*a6;
    }
    else
    {
      *a4 = -1;
      *a5 = -1;
    }
  }
  else
  {
    *a4 = 1;
    *a5 = 1;
  }
  return 0LL;
}
