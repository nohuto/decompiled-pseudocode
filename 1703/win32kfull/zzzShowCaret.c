/*
 * XREFs of zzzShowCaret @ 0x1C020BE74
 * Callers:
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00385D8 (zzzInternalShowCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00B006C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
