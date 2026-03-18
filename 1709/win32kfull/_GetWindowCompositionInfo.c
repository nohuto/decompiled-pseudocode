/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C0065464
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00630D0 (NtUserGetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     IncVisWindows @ 0x1C0092CD4 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0092F98 (DecVisWindows.c)
 *     IsWindowShellCloaked @ 0x1C00C8B24 (IsWindowShellCloaked.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C010A6C4 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C010D5D4 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0114CB0 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0115E64 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C0115F70 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0117064 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C011AC64 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C011F9E4 (SetWindowCompositionForceIconicSWR.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C01E71C0 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C020C2CC (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C020C380 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C020C434 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C020C4E4 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C020C598 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C020C62C (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C020C6E0 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C020C790 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C020C844 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C020C8F8 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  __int64 *Prop; // rax
  __int64 v7; // rax

  v4 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) || (*(_BYTE *)(a1 + 66) & 8) != 0 && GetTopLevelWindow(a1) )
  {
    v5 = 1;
    if ( *(_QWORD *)(a1 + 184) && (Prop = (__int64 *)FindProp(a1, atomDWMProp, 1)) != 0LL && (v7 = *Prop) != 0 )
    {
      *(_OWORD *)a2 = *(_OWORD *)v7;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v7 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v7 + 32);
    }
    else
    {
      *(_WORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_OWORD *)(a2 + 8) = 0uLL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    return v5;
  }
  return v4;
}
