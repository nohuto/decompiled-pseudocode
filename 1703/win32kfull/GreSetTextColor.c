/*
 * XREFs of GreSetTextColor @ 0x1C0044A54
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     DrawPushButton @ 0x1C002898C (DrawPushButton.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     DrawIt @ 0x1C00442B8 (DrawIt.c)
 *     BltIcon @ 0x1C00447E0 (BltIcon.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawMenuMark @ 0x1C00F68BC (DrawMenuMark.c)
 *     DrawBox @ 0x1C00F69D0 (DrawBox.c)
 *     DrawGrip @ 0x1C010B3C8 (DrawGrip.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C011C450 (RecolorDeskPattern.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FB040 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     BltColor @ 0x1C0219728 (BltColor.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetTextColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v4 = v8;
  if ( v8 )
  {
    v5 = *(_QWORD *)(v8 + 80);
    v3 = *(_DWORD *)(v5 + 44);
    *(_DWORD *)(v5 + 44) = a2;
    v6 = a2 & 0x13FFFFFF;
    if ( v6 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 40LL) = v6;
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 8LL) |= 7u;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
  }
  return v3;
}
