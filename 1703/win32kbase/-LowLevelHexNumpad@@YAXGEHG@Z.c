/*
 * XREFs of ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012F19C
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     ApiSetEditionIsHotKey @ 0x1C013B180 (ApiSetEditionIsHotKey.c)
 */

void __fastcall LowLevelHexNumpad(unsigned __int16 a1, unsigned __int8 a2, int a3, __int16 a4)
{
  int v4; // r8d

  if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 )
  {
    if ( (gfInNumpadHexInput & 1) != 0 )
      gfInNumpadHexInput &= ~1u;
    return;
  }
  if ( !a3 && ((gfInNumpadHexInput & 1) != 0 || a1 == 78 || a1 == 83) )
  {
    if ( (a4 & 0x100) == 0
      && ((((unsigned __int16)(2 * (BYTE5(gafAsyncKeyState) & 4)) | BYTE4(gafAsyncKeyState) & 1 | 4) - 4) & 0xFFF6) == 0 )
    {
      if ( (gfInNumpadHexInput & 1) == 0 )
      {
        if ( (BYTE6(xmmword_1C018AA30) & 0x40) != 0 || (v4 = 1, (BYTE7(xmmword_1C018AA30) & 1) != 0) )
          v4 = 9;
        if ( !(unsigned int)ApiSetEditionIsHotKey(
                              v4 | (4 * (BYTE4(gafAsyncKeyState) & 1)) | (BYTE4(gafAsyncKeyState) >> 1) & 2u,
                              a2) )
          gfInNumpadHexInput |= 1u;
        return;
      }
      if ( (unsigned __int16)(a1 - 71) <= 0xBu && *((_BYTE *)&aVkNumpad + a1 - 71) != 0xFF
        || (unsigned __int8)(a2 - 48) <= 9u
        || (unsigned __int8)(a2 - 65) <= 5u )
      {
        return;
      }
    }
    gfInNumpadHexInput &= ~1u;
  }
}
