/*
 * XREFs of xxxSetWindowPos @ 0x1C0066BA4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000BE60 (xxxSwitchToThisWindow.c)
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     NtUserSetWindowPos @ 0x1C00665E0 (NtUserSetWindowPos.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxSetShellWindow @ 0x1C00D5AE8 (xxxSetShellWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxMoveWindow @ 0x1C0101C1C (xxxMoveWindow.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C01080AC (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     xxxShowScrollBar @ 0x1C010A558 (xxxShowScrollBar.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0121060 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetMenu @ 0x1C0138F9C (xxxSetMenu.c)
 *     xxxDrawMenuBar @ 0x1C013B730 (xxxDrawMenuBar.c)
 *     xxxRedrawFrameAndHook @ 0x1C013FA10 (xxxRedrawFrameAndHook.c)
 *     xxxRedrawFrame @ 0x1C0140800 (xxxRedrawFrame.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01C00F8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01C2DFC (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01C2EA8 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01C44F0 (xxxEnableNonClientDpiScaling.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01D1410 (xxxSwitchWndProc.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2EAC (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxUpdateShadowZorder @ 0x1C020CC84 (xxxUpdateShadowZorder.c)
 *     xxxActivateEnabledPopup @ 0x1C020F3C8 (xxxActivateEnabledPopup.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  int v7; // esi
  bool v9; // di
  char v10; // al
  unsigned int v11; // ebp
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  v7 = a7;
  v9 = !a2
    && a1
    && (*((_BYTE *)a1 + 307) & 2) != 0
    && (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v19)
    && *(_DWORD *)(v19 + 20)
    && (v7 & 0xFFFFFFEF) == 3;
  v10 = v7;
  if ( !v9 )
    v10 = v7;
  v11 = xxxSetWindowPosAndBand(a1, a5, a6, v10, 0);
  if ( v11 )
  {
    if ( v9 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) == gpqForeground )
    {
      TopLevelHost = CoreWindowProp::GetTopLevelHost(a1);
      TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
      if ( TopLevelWindow )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v18;
        v18[1] = TopLevelWindow;
        _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
        xxxSetWindowPosAndBand((struct tagWND *)TopLevelWindow, 0, 0, 19, 0);
        ThreadUnlock1(v17, v16);
      }
    }
  }
  return v11;
}
