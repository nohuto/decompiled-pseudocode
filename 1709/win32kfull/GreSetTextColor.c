/*
 * XREFs of GreSetTextColor @ 0x1C009B5F0
 * Callers:
 *     DrawPushButton @ 0x1C007EAF4 (DrawPushButton.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0080B08 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0081ED8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     BltIcon @ 0x1C009B384 (BltIcon.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C009C3DC (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C009C70C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C0126200 (RecolorDeskPattern.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C013BC90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F7D60 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60 (SfnINLPKDRAWSWITCHWND.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetTextColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  DC *v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbx
  DC *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  unsigned int v11; // [rsp+2Ch] [rbp-Ch]
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0;
  v11 = 0;
  v3 = -1;
  XDCOBJ::vLock(&v9, a1);
  v4 = v9;
  if ( v9 )
  {
    v5 = *((_QWORD *)v9 + 10);
    v3 = *(_DWORD *)(v5 + 44);
    *(_DWORD *)(v5 + 44) = a2;
    v6 = a2 & 0x13FFFFFF;
    if ( v6 != v3 )
    {
      *(_DWORD *)(*((_QWORD *)v4 + 10) + 40LL) = v6;
      *(_DWORD *)(*((_QWORD *)v4 + 10) + 8LL) |= 7u;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v9);
    v12 = 0;
    v7 = *(_QWORD *)v9;
    HmgDecrementExclusiveReferenceCountEx(v9, v11, &v12);
    if ( v12 )
      bDeleteDCInternalEx(v7, 0LL);
  }
  return v3;
}
