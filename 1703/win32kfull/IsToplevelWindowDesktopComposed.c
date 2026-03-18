/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C0061478
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C001C558 (DecomposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     DefSetText @ 0x1C0041BC0 (DefSetText.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C0062970 (EditionUpdateCursorOnMouseMove.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00E7EA8 (xxxGetTitleBarInfoEx.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D043C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C020CA90 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 DesktopWindow; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( v1 )
  {
    DesktopWindow = GetDesktopWindow(a1, v1);
    if ( v5 == DesktopWindow )
      return (unsigned int)IsWindowDesktopComposed(v4) != 0;
  }
  return v2;
}
