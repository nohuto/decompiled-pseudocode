/*
 * XREFs of GreSetBkColor @ 0x1C009B688
 * Callers:
 *     DrawPushButton @ 0x1C007EAF4 (DrawPushButton.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     BltIcon @ 0x1C009B384 (BltIcon.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C009C70C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     RecolorDeskPattern @ 0x1C0126200 (RecolorDeskPattern.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C013BC90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60 (SfnINLPKDRAWSWITCHWND.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  DC *v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  DC *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v3 = -1;
  XDCOBJ::vLock(&v8, a1);
  v4 = v8;
  if ( v8 )
  {
    v5 = *((_QWORD *)v8 + 10);
    v3 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 36) = a2;
    v6 = a2 & 0x13FFFFFF;
    if ( v6 != v3 )
    {
      *(_DWORD *)(*((_QWORD *)v4 + 10) + 32LL) = v6;
      *(_DWORD *)(*((_QWORD *)v4 + 10) + 8LL) |= 0xBu;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  return v3;
}
