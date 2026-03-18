/*
 * XREFs of zzzHideCaret @ 0x1C020DDBC
 * Callers:
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C008473C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1, __int64 a2)
{
  if ( !(unsigned int)UT_CaretSet(a1, a2) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
