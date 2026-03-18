/*
 * XREFs of sbit_SearchForBitmap @ 0x1C02BEB84
 * Callers:
 *     fs_NewGlyph @ 0x1C02B5CE0 (fs_NewGlyph.c)
 * Callees:
 *     sfac_SearchForBitmap @ 0x1C02C518C (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C02C569C (sfac_SearchForStrike.c)
 */

__int64 __fastcall sbit_SearchForBitmap(__int64 a1, int a2, unsigned __int16 a3, int a4, _WORD *a5, _WORD *a6)
{
  _WORD *v9; // rdi
  __int64 result; // rax

  *a6 = 0;
  if ( *(_WORD *)(a1 + 38) > 3u )
    return 0LL;
  v9 = (_WORD *)(a1 + 28);
  if ( *(_WORD *)(a1 + 28)
    || (result = sfac_SearchForStrike(
                   a2,
                   *(unsigned __int16 *)(a1 + 30),
                   *(unsigned __int16 *)(a1 + 32),
                   a4,
                   a1 + 94,
                   (__int64)v9,
                   a1 + 34,
                   a1 + 36,
                   a1),
        !(_DWORD)result) )
  {
    *a5 = *(_WORD *)(a1 + 94);
    if ( (unsigned __int16)(*v9 - 2) <= 1u )
    {
      result = sfac_SearchForBitmap(
                 a2,
                 a3,
                 *(_DWORD *)a1,
                 (int)a1 + 84,
                 a1 + 40,
                 a1 + 42,
                 a1 + 4,
                 a1 + 44,
                 a1 + 8,
                 a1 + 12);
      if ( (_DWORD)result )
        return result;
      if ( *(_DWORD *)(a1 + 84) )
      {
        if ( *v9 == 2 )
          *a6 = 1;
        else
          *a6 = 2;
        *(_DWORD *)(a1 + 88) = 0;
      }
    }
    return 0LL;
  }
  return result;
}
