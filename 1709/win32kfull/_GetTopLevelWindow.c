/*
 * XREFs of _GetTopLevelWindow @ 0x1C0061C70
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006C9C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     NtUserNavigateFocus @ 0x1C0008DE0 (NtUserNavigateFocus.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0008F1C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSendNCActivateMessage @ 0x1C0054FF8 (xxxSendNCActivateMessage.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00630D0 (NtUserGetWindowCompositionAttribute.c)
 *     IsWindowHolographicForHitTest @ 0x1C0063E70 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0065344 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00CB5D4 (IsWindowEffectivelyCloaked.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     CitGetWindowInfo @ 0x1C01090E0 (CitGetWindowInfo.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C010A1F8 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     NtUserLayoutCompleted @ 0x1C010F930 (NtUserLayoutCompleted.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0111504 (TransformVectorWithInputTargetPrecedence.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C01143B4 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserBeginLayoutUpdate @ 0x1C011AE80 (NtUserBeginLayoutUpdate.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B5070 (xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B73A0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01B9B44 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C01BA18C (-WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01C3CB4 (IsChildWindowDpiMessageEnabledX.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C3E10 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C6D78 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01CCC7C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 *     EditionGetTopLevelWindowWithComponentUI @ 0x1C01D2E20 (EditionGetTopLevelWindowWithComponentUI.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01D9940 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 *     NtUserGetTopLevelWindow @ 0x1C01E6CE0 (NtUserGetTopLevelWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 104);
      if ( v1 )
      {
        v2 = *(_QWORD *)(a1 + 24);
        v3 = 0LL;
        if ( v2 )
        {
          v4 = *(_QWORD *)(v2 + 8);
          if ( v4 )
            v3 = *(_QWORD *)(v4 + 16);
        }
        if ( v1 == v3 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 104);
    }
    while ( v1 );
  }
  return a1;
}
