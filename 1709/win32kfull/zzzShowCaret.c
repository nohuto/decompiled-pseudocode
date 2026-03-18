/*
 * XREFs of zzzShowCaret @ 0x1C020DDE4
 * Callers:
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C0064398 (zzzInternalShowCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008473C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1, __int64 a2)
{
  if ( !(unsigned int)UT_CaretSet(a1, a2) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
