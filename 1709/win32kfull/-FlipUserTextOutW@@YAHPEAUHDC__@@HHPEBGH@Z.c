/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C007CCE4
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0080B08 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C009C70C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02981EC (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, int a2, int a3, unsigned __int16 *a4)
{
  unsigned int v8; // ebx

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v8 = GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
  }
  return v8;
}
