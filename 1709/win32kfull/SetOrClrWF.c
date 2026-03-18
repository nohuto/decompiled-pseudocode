/*
 * XREFs of SetOrClrWF @ 0x1C008B874
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C000D270 (-ClearWFBeingActivated@@YAXPEAUHWND__@@@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C004BB24 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0055B48 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ImeSetTopmost @ 0x1C00568B8 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxRemoveFullScreen @ 0x1C00602AC (xxxRemoveFullScreen.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00733A0 (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C007BBB4 (xxxDWP_UpdateUIState.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     xxxSendEraseBkgnd @ 0x1C007F4F4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007F96C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007FA1C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C0080CAC (ClrFTrueVis.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     PatchThreadWindows @ 0x1C00C46C0 (PatchThreadWindows.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00C9224 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetShellWindow @ 0x1C00D5AE8 (xxxSetShellWindow.c)
 *     SetDialogPointer @ 0x1C00D6020 (SetDialogPointer.c)
 *     SetWindowState @ 0x1C00D6140 (SetWindowState.c)
 *     ClearWindowState @ 0x1C00D61A0 (ClearWindowState.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00E33AC (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     _SelectPalette @ 0x1C00F8348 (_SelectPalette.c)
 *     SfnPOWERBROADCAST @ 0x1C0102BA0 (SfnPOWERBROADCAST.c)
 *     xxxGetUpdateRgn @ 0x1C0107368 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C010ACF0 (xxxGetUpdateRect.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxAddFullScreen @ 0x1C0113C60 (xxxAddFullScreen.c)
 *     SetHungFlag @ 0x1C01152FC (SetHungFlag.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C0116030 (NtUserEnableResizeLayoutSynchronization.c)
 *     NtUserSetCoreWindow @ 0x1C0116E60 (NtUserSetCoreWindow.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     _RegisterShellHookWindow @ 0x1C011E0E0 (_RegisterShellHookWindow.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C011F460 (NtUserSetChildWindowNoActivate.c)
 *     _DeregisterShellHookWindow @ 0x1C011FAE0 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     VerifyChildMenu @ 0x1C01443E0 (VerifyChildMenu.c)
 *     ClrWFNoDwmNotify @ 0x1C01B8880 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01B88D0 (SetMsgBox.c)
 *     SetWFNoDwmNotify @ 0x1C01B8908 (SetWFNoDwmNotify.c)
 *     xxxDisableImmersiveOwner @ 0x1C01D2E5C (xxxDisableImmersiveOwner.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01D88C0 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0204518 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C020CC84 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 */

__int16 __fastcall SetOrClrWF(int a1, _DWORD *a2, unsigned __int16 a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // r14d
  int v8; // eax
  int v9; // edi
  __int64 v10; // rcx
  int v11; // edx
  void *v12; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    v4 = a2[17];
    v5 = a2[16];
    v6 = a2[76];
  }
  LOWORD(v8) = HIBYTE(a3);
  if ( a1 )
    *((_BYTE *)a2 + HIBYTE(a3) + 56) |= a3;
  else
    *((_BYTE *)a2 + HIBYTE(a3) + 56) &= ~(_BYTE)a3;
  if ( a4 )
  {
    v8 = IsWindowDesktopComposed(a2);
    if ( v8 )
    {
      v9 = a2[17];
      v10 = (unsigned int)a2[16];
      v11 = a2[76];
      if ( v4 != v9 )
        goto LABEL_12;
      if ( v5 == (_DWORD)v10 && v6 == v11 )
        return v8;
      if ( v4 == v9 )
      {
        if ( v5 == (_DWORD)v10 )
        {
          LOWORD(v8) = v6 ^ v11;
          if ( ((v6 ^ v11) & 0x5C00300) == 0 )
            return v8;
        }
        else
        {
          LOWORD(v8) = v5 ^ v10;
          if ( ((v5 ^ (unsigned int)v10) & 0x4E27A9) == 0 )
            return v8;
        }
      }
      else
      {
LABEL_12:
        LOWORD(v8) = v4 ^ v9;
        if ( ((v4 ^ v9) & 0xB9CF0000) == 0 )
          return v8;
      }
      v12 = (void *)ReferenceDwmApiPort(v10);
      LOWORD(v8) = DwmAsyncChildStyleChange(v12);
    }
  }
  return v8;
}
