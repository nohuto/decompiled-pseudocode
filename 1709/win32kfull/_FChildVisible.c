/*
 * XREFs of _FChildVisible @ 0x1C009339C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FChildVisible(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 71);
  while ( (v1 & 0xC0) == 0x40 )
  {
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      break;
    v1 = *(_BYTE *)(a1 + 71);
    if ( (v1 & 0x10) == 0 )
      return 0LL;
  }
  return 1LL;
}
