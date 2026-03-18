/*
 * XREFs of GetWndSBDisableFlags @ 0x1C0082EC0
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0082E30 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020F81C (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FCAC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int v3; // eax

  v2 = *(int **)(a1 + 192);
  if ( v2 )
  {
    v3 = *v2;
    if ( (_DWORD)a2 )
      v3 >>= 2;
    return v3 & 3;
  }
  else
  {
    UserSetLastError(1447LL, a2);
    return 0LL;
  }
}
