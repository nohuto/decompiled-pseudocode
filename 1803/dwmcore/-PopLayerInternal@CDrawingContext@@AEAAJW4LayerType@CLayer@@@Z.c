/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18006BB20
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006E2EC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x1800092B0 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1800099C0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180024D40 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024E70 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r8
  CD2DLayer *v3; // rbx
  int v4; // edx
  __int64 (__fastcall *v5)(CTreeEffectLayer *, struct CDrawingContext *); // rax
  int v6; // eax
  CTreeEffectLayer *(__fastcall *v7)(CTreeEffectLayer *, char); // rax

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 568) - 1);
  v3 = *(CD2DLayer **)(*(_QWORD *)(a1 + 544) + 8 * v2);
  *(_DWORD *)(a1 + 568) = v2;
  v4 = *(_DWORD *)(a1 + 632);
  if ( v4 && *(CD2DLayer **)(*(_QWORD *)(a1 + 608) + 8LL * (unsigned int)(v4 - 1)) == v3 )
  {
    *(_DWORD *)(a1 + 632) = v4 - 1;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(CTreeEffectLayer *, struct CDrawingContext *))(*(_QWORD *)v3 + 24LL);
    if ( v5 == CD2DLayer::RestoreState )
    {
      v6 = CD2DLayer::RestoreState(v3, (struct CDrawingContext *)a1);
    }
    else if ( v5 == CTreeEffectLayer::RestoreState )
    {
      v6 = CTreeEffectLayer::RestoreState(v3, (struct CDrawingContext *)a1);
    }
    else
    {
      v6 = v5(v3, (struct CDrawingContext *)a1);
    }
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1813u);
  }
  if ( v3 )
  {
    v7 = **(CTreeEffectLayer *(__fastcall ***)(CTreeEffectLayer *, char))v3;
    if ( v7 == CD2DLayer::`scalar deleting destructor' )
    {
      CD2DLayer::`scalar deleting destructor'(v3, 1);
    }
    else if ( v7 == CTreeEffectLayer::`vector deleting destructor' )
    {
      CTreeEffectLayer::`vector deleting destructor'(v3, 1);
    }
    else
    {
      v7(v3, 1);
    }
  }
  return v1;
}
