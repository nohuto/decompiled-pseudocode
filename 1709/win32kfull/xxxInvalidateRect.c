/*
 * XREFs of xxxInvalidateRect @ 0x1C02045B4
 * Callers:
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020FD88 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181LL;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
