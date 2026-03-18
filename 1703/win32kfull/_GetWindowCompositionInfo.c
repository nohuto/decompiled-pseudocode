/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C0061E00
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0004F60 (SetWindowCompositionFreezeSWR.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     IsWindowShellCloaked @ 0x1C0017F98 (IsWindowShellCloaked.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     IncVisWindows @ 0x1C0021DA8 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0022068 (DecVisWindows.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0037F20 (NtUserGetWindowCompositionAttribute.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C003BAC8 (SetWindowExtendedBoundsMargin.c)
 *     GetWindowEffectiveCloakState @ 0x1C005F394 (GetWindowEffectiveCloakState.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0104380 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C010AC38 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C010BF00 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010DA24 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0113F78 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0114428 (SetWindowCompositionForceIconicSWR.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C01DAF70 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C020AF08 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C020AFBC (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C020B070 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C020B120 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C020B1D4 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C020B268 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C020B31C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C020B3CC (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C020B480 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C020B534 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *Prop; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 104);
  if ( !v2 )
    goto LABEL_18;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 16);
  }
  if ( v2 != v6 )
  {
LABEL_18:
    if ( (*(_BYTE *)(a1 + 66) & 8) == 0 || !GetTopLevelWindow(a1) )
      return 0LL;
  }
  if ( *(_QWORD *)(a1 + 184)
    && (Prop = (__int64 *)FindProp(a1, (unsigned __int16)atomDWMProp, 1LL)) != 0LL
    && (v9 = *Prop) != 0 )
  {
    *(_OWORD *)a2 = *(_OWORD *)v9;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v9 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(v9 + 32);
  }
  else
  {
    *(_DWORD *)a2 &= 0xFFFF0000;
    *(_DWORD *)(a2 + 4) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 8) = 0uLL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return 1LL;
}
