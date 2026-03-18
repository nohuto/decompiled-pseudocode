/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C0064AC8
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C004A0DC (xxxGetTitleBarInfoEx.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C005E4B0 (EditionUpdateCursorOnMouseMove.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     DecomposeWindowIfNeeded @ 0x1C008A3AC (DecomposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     DefSetText @ 0x1C0096934 (DefSetText.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D4AF0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C020E920 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    DesktopWindow = GetDesktopWindow(a1);
    if ( v4 == DesktopWindow )
      return (unsigned int)IsWindowDesktopComposed(v3) != 0;
  }
  return v1;
}
