/*
 * XREFs of xxxInvalidateRect @ 0x1C0202AA0
 * Callers:
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020E55C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C0212DEC (xxxMNSetGapState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  int v3; // r9d

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
