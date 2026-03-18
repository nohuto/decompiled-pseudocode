/*
 * XREFs of zzzHideCaret @ 0x1C020BE4C
 * Callers:
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00B006C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
