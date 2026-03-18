/*
 * XREFs of SetOrClrWF @ 0x1C001C5B4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxSetShellWindow @ 0x1C00154D0 (xxxSetShellWindow.c)
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0015A0C (xxxAddFullScreen.c)
 *     NtUserSetCoreWindow @ 0x1C0017E50 (NtUserSetCoreWindow.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018D90 (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     ImeSetTopmost @ 0x1C001E790 (ImeSetTopmost.c)
 *     ClrFTrueVis @ 0x1C001EBD4 (ClrFTrueVis.c)
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxRemoveFullScreen @ 0x1C005D114 (xxxRemoveFullScreen.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     SelectWindowRgn @ 0x1C009D0B0 (SelectWindowRgn.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00B3344 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00B78BC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     SetHungFlag @ 0x1C00B7CF0 (SetHungFlag.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxCreateWindowSmIcon @ 0x1C00C1950 (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C2910 (xxxDWP_UpdateUIState.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C64F4 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 *     PatchThreadWindows @ 0x1C00D3E30 (PatchThreadWindows.c)
 *     xxxSetScrollBar @ 0x1C00D6A78 (xxxSetScrollBar.c)
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C00E8A70 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00E8AD0 (xxxShowOwnedWindows.c)
 *     xxxSendEraseBkgnd @ 0x1C00EB518 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F11D0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F3E14 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SetDialogPointer @ 0x1C00F64D0 (SetDialogPointer.c)
 *     SetWindowState @ 0x1C00F65F0 (SetWindowState.c)
 *     ClearWindowState @ 0x1C00F6650 (ClearWindowState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7810 (SfnPOWERBROADCAST.c)
 *     xxxGetUpdateRgn @ 0x1C00FC3D8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C0102B2C (xxxGetUpdateRect.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C01059B0 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107FCC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C010BE50 (NtUserEnableResizeLayoutSynchronization.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     _RegisterShellHookWindow @ 0x1C0114830 (_RegisterShellHookWindow.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C0115990 (NtUserSetChildWindowNoActivate.c)
 *     _DeregisterShellHookWindow @ 0x1C0116A60 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 *     VerifyChildMenu @ 0x1C013E26C (VerifyChildMenu.c)
 *     ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C01B1A70 (-ClearWFBeingActivated@@YAXPEAUHWND__@@@Z.c)
 *     ClrWFNoDwmNotify @ 0x1C01B5638 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01B5680 (SetMsgBox.c)
 *     xxxDisableImmersiveOwner @ 0x1C01D2B6C (xxxDisableImmersiveOwner.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01F0B24 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0202A04 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C020B794 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C020BA84 (xxxCompositedPaint.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C020E870 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C020EA64 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 */

__int16 __fastcall SetOrClrWF(int a1, _DWORD *a2, unsigned __int16 a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // r14d
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rax

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
      v11 = a2[17];
      v12 = (unsigned int)a2[16];
      v13 = (unsigned int)a2[76];
      if ( v4 != v11 )
        goto LABEL_12;
      if ( v5 == (_DWORD)v12 && v6 == (_DWORD)v13 )
        return v8;
      if ( v4 == v11 )
      {
        if ( v5 == (_DWORD)v12 )
        {
          LOWORD(v8) = v6 ^ v13;
          if ( ((v6 ^ (unsigned int)v13) & 0x5C00300) == 0 )
            return v8;
        }
        else
        {
          LOWORD(v8) = v5 ^ v12;
          if ( ((v5 ^ (unsigned int)v12) & 0x4E27A9) == 0 )
            return v8;
        }
      }
      else
      {
LABEL_12:
        LOWORD(v8) = v4 ^ v11;
        if ( ((v4 ^ v11) & 0xB9CF0000) == 0 )
          return v8;
      }
      v14 = (void *)ReferenceDwmApiPort(v12, v13, v9, v10);
      LOWORD(v8) = DwmAsyncChildStyleChange(v14);
    }
  }
  return v8;
}
