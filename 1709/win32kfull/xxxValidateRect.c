/*
 * XREFs of xxxValidateRect @ 0x1C0112EB4
 * Callers:
 *     xxxMoveWindow @ 0x1C0101C1C (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C0112DB0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, _DWORD *a2)
{
  __int64 v2; // r9

  if ( a1 )
  {
    v2 = 8LL;
  }
  else
  {
    a2 = 0LL;
    v2 = 645LL;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
