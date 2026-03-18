/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C5084
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C008DA7C (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C008FF10 (ChangeRedirectionParentInDCEs.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(void **a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), (struct tagWND *)a1, a2, 1);
    ChangeRedirectionParentInDCEs((struct tagWND *)a1, 1u);
  }
  return v4;
}
