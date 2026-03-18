/*
 * XREFs of _GetTopLevelWindow @ 0x1C0062670
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002800 (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     NtUserNavigateFocus @ 0x1C0005570 (NtUserNavigateFocus.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0005660 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSendNCActivateMessage @ 0x1C0019BA8 (xxxSendNCActivateMessage.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001E9F4 (GetWindowCloakStateComponentUIAware.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0037F20 (NtUserGetWindowCompositionAttribute.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C005F568 (ShouldUseLogPixelsForWindowMetrics.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     IsWindowHolographicForHitTest @ 0x1C0062580 (IsWindowHolographicForHitTest.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00626B0 (IsTopLevelOrLayeredChildWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00B4684 (IsWindowEffectivelyCloaked.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00FF164 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     CitGetWindowInfo @ 0x1C0101740 (CitGetWindowInfo.c)
 *     NtUserLayoutCompleted @ 0x1C0104550 (NtUserLayoutCompleted.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01065A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0112640 (NtUserBeginLayoutUpdate.c)
 *     ShouldProcessHungWindow @ 0x1C01199B0 (ShouldProcessHungWindow.c)
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019D530 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C019DC2C (-WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B1E90 (xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B4430 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01C01F0 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01C04D4 (IsChildWindowDpiMessageEnabledX.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C0630 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C4A14 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01C884C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 *     EditionGetTopLevelWindowWithComponentUI @ 0x1C01D2B30 (EditionGetTopLevelWindowWithComponentUI.c)
 *     NtUserGetTopLevelWindow @ 0x1C01DAA90 (NtUserGetTopLevelWindow.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01F1F30 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  if ( a1 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(a1 + 104);
      if ( result )
      {
        v2 = *(_QWORD *)(a1 + 24);
        v3 = 0LL;
        if ( v2 )
        {
          v4 = *(_QWORD *)(v2 + 8);
          if ( v4 )
            v3 = *(_QWORD *)(v4 + 16);
        }
        if ( result == v3 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 104);
      if ( !result )
        return result;
    }
  }
  return a1;
}
