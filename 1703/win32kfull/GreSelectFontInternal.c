/*
 * XREFs of GreSelectFontInternal @ 0x1C013F298
 * Callers:
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C000F958 (MNSetupAnimationDC.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     NtGdiSelectFont @ 0x1C002B360 (NtGdiSelectFont.c)
 *     GreSelectFont @ 0x1C002B370 (GreSelectFont.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     _ServerFixupMenuDC @ 0x1C00EF1B4 (_ServerFixupMenuDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C010DF6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C013DA38 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01C3CB0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FB040 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0219710 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00751AC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  DC *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rax
  struct LFONT *v10; // rsi
  DC *v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  v4 = 0LL;
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock(&v12, a1);
  v7 = v12;
  if ( v12 )
  {
    if ( !a3 && (*(_DWORD *)(HmgPentryFromPobj(v12) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_12;
    v8 = (__int64 *)*((_QWORD *)v7 + 20);
    if ( v8 )
      v4 = *v8;
    if ( a2 == v4 )
      goto LABEL_12;
    LOBYTE(v6) = 10;
    v9 = HmgShareLockCheck(a2, v6);
    v10 = (struct LFONT *)v9;
    if ( v9 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v9) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v7 + 20));
        *((_QWORD *)v7 + 20) = v10;
        *(_QWORD *)(*((_QWORD *)v7 + 10) + 176LL) = a2;
        *((_QWORD *)v7 + 272) = 0LL;
        *(_DWORD *)(*((_QWORD *)v7 + 10) + 8LL) |= 0x10u;
        *(_DWORD *)(*((_QWORD *)v7 + 10) + 8LL) &= ~0x20u;
LABEL_12:
        XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
        return v4;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
    }
    v4 = 0LL;
    goto LABEL_12;
  }
  return v4;
}
