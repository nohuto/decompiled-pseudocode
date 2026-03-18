/*
 * XREFs of ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FF9C
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0004F60 (SetWindowCompositionFreezeSWR.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C003BAC8 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0104380 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C010AC38 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C010BF00 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010DA24 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0113F78 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0114428 (SetWindowCompositionForceIconicSWR.c)
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
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall SetWindowCompositionInfo(struct tagWND *a1, const struct WINDOWCOMPOSITIONINFO *a2)
{
  unsigned int v2; // esi
  __int64 Prop; // rax
  unsigned int v6; // r8d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx

  v2 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
  {
    v2 = v6;
    *(_OWORD *)Prop = *(_OWORD *)a2;
    *(_OWORD *)(Prop + 16) = *((_OWORD *)a2 + 1);
    *(_QWORD *)(Prop + 32) = *((_QWORD *)a2 + 4);
  }
  else
  {
    v8 = Win32AllocPool(40LL, 1684239189LL);
    v9 = v8;
    if ( v8 )
    {
      v10 = (unsigned __int16)atomDWMProp;
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
      *(_QWORD *)(v8 + 32) = *((_QWORD *)a2 + 4);
      v2 = InternalSetProp(a1, v10, v8, 1LL);
      if ( !v2 )
        Win32FreePool(v9);
    }
  }
  return v2;
}
