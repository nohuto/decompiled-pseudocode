/*
 * XREFs of GreSelectFont @ 0x1C007E920
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     NtGdiSelectFont @ 0x1C007E900 (NtGdiSelectFont.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ValidateExternalLogFont @ 0x1C00812F0 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00BFE44 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00DCA98 (MNSetupAnimationDC.c)
 *     _ServerFixupMenuDC @ 0x1C00FC2A0 (_ServerFixupMenuDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011431C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C013BC90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C013C380 (CreateCompatiblePublicDC.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     CreateScaledFont @ 0x1C01A1438 (CreateScaledFont.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F7D60 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020EDC8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C021A960 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFont(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  DC *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  struct LFONT *v10; // rsi
  DC *v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  unsigned int v13; // [rsp+2Ch] [rbp-4h]
  int v14; // [rsp+60h] [rbp+30h] BYREF

  v2 = a2;
  v3 = 0LL;
  v12 = 0;
  LOBYTE(a2) = 1;
  v13 = 0;
  v11 = (DC *)HmgLockEx(a1, a2, 0LL);
  v4 = v11;
  if ( v11 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v11) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
      return v3;
    }
    v4 = v11;
    if ( (*((_DWORD *)v11 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v11);
  }
  else
  {
    if ( !(unsigned __int8)PsIsWin32KFilterAuditEnabled() && !(unsigned __int8)PsIsWin32KFilterEnabled() )
      return v3;
    PsGetWin32KFilterSet();
  }
  if ( !v4 )
    return v3;
  v6 = (__int64 *)*((_QWORD *)v4 + 20);
  if ( v6 )
    v3 = *v6;
  if ( v2 != v3 )
  {
    LOBYTE(v5) = 10;
    v9 = HmgShareLockCheck(v2, v5);
    v10 = (struct LFONT *)v9;
    if ( v9 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v9) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v4 + 20));
        *((_QWORD *)v4 + 20) = v10;
        *(_QWORD *)(*((_QWORD *)v4 + 10) + 176LL) = v2;
        *((_QWORD *)v4 + 272) = 0LL;
        *(_DWORD *)(*((_QWORD *)v4 + 10) + 8LL) |= 0x10u;
        *(_DWORD *)(*((_QWORD *)v4 + 10) + 8LL) &= ~0x20u;
        goto LABEL_9;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
    }
    v3 = 0LL;
  }
LABEL_9:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v11);
  v14 = 0;
  v7 = *(_QWORD *)v11;
  HmgDecrementExclusiveReferenceCountEx(v11, v13, &v14);
  if ( v14 )
    bDeleteDCInternalEx(v7, 0LL);
  return v3;
}
