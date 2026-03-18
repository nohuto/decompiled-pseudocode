/*
 * XREFs of _FChildVisible @ 0x1C0021D80
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
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
