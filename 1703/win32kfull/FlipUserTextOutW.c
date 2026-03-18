/*
 * XREFs of FlipUserTextOutW @ 0x1C00F6CEC
 * Callers:
 *     DrawMenuMark @ 0x1C00F68BC (DrawMenuMark.c)
 *     DrawBox @ 0x1C00F69D0 (DrawBox.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     GreSetGraphicsMode @ 0x1C029C860 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, LONG a2, LONG a3, unsigned __int16 *a4)
{
  unsigned int v8; // ebx
  int TextAlign; // eax
  int v11; // ebp

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      TextAlign = GreGetTextAlign(a1);
      v11 = TextAlign;
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
      v8 = GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1, v11);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
  }
  return v8;
}
