/*
 * XREFs of GetWndSBDisableFlags @ 0x1C00D6940
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00D5FF8 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020E008 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020E480 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C020EF98 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, int a2)
{
  int *v2; // rax
  int v3; // eax

  v2 = *(int **)(a1 + 192);
  if ( v2 )
  {
    v3 = *v2;
    if ( a2 )
      v3 >>= 2;
    return v3 & 3;
  }
  else
  {
    UserSetLastError(1447LL);
    return 0LL;
  }
}
