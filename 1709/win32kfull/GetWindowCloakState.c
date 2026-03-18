/*
 * XREFs of GetWindowCloakState @ 0x1C0063F5C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005E39C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     NextTopWindow @ 0x1C0065110 (NextTopWindow.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C00668A0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00CB5D4 (IsWindowEffectivelyCloaked.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C0138CDC (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01C3520 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CF5F4 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C0212FA8 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 */

__int64 __fastcall GetWindowCloakState(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r8d
  _OWORD **Prop; // rax
  _OWORD *v8; // rax
  __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // ecx

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 16);
    }
    if ( v1 == v4 )
      goto LABEL_6;
  }
  if ( (*(_BYTE *)(a1 + 66) & 8) != 0 && GetTopLevelWindow(a1) )
  {
LABEL_6:
    v6 = 1;
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
    v10 = 0;
    if ( (v9 & 0x400) != 0 || (v9 & 0x2000) != 0 )
      v10 = v6;
    v11 = v10 | 2;
    if ( (v9 & 0x800) == 0 )
      return v10;
  }
  else
  {
    return 0;
  }
  return v11;
}
