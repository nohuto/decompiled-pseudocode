/*
 * XREFs of GetWindowCloakState @ 0x1C0061BB0
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001E9F4 (GetWindowCloakStateComponentUIAware.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     NextTopWindow @ 0x1C005F5C0 (NextTopWindow.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00619D0 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00B4684 (IsWindowEffectivelyCloaked.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B7204 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ShouldProcessHungWindow @ 0x1C01199B0 (ShouldProcessHungWindow.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C0133F0C (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01BFC00 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CB238 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01D2798 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C0211A94 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCloakState(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _OWORD **Prop; // rax
  _OWORD *v8; // rax
  __int16 v9; // cx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( !v1 )
    goto LABEL_23;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(_QWORD *)(v6 + 16);
  }
  if ( v1 != v5 )
  {
LABEL_23:
    if ( (*(_BYTE *)(a1 + 66) & 8) == 0 || !GetTopLevelWindow(a1) )
      return 0LL;
  }
  if ( *(_QWORD *)(a1 + 184)
    && (Prop = (_OWORD **)FindProp(a1, (unsigned __int16)atomDWMProp, 1LL)) != 0LL
    && (v8 = *Prop) != 0LL )
  {
    v9 = *v8;
  }
  else
  {
    v9 = 0;
  }
  if ( (v9 & 0x400) != 0 || (v9 & 0x2000) != 0 )
    v2 = 1;
  result = v2 | 2;
  if ( (v9 & 0x800) == 0 )
    return v2;
  return result;
}
