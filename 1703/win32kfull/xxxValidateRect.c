/*
 * XREFs of xxxValidateRect @ 0x1C01086F8
 * Callers:
 *     xxxMoveWindow @ 0x1C00F4050 (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C0108600 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, _DWORD *a2)
{
  int v2; // r9d

  if ( a1 )
  {
    v2 = 8;
  }
  else
  {
    a2 = 0LL;
    v2 = 645;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
