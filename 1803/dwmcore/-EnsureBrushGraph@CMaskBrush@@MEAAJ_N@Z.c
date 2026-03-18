/*
 * XREFs of ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180098F50
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004D1A8 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180011910 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180035838 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::EnsureBrushGraph(CMaskBrush *this, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  bool (__fastcall *v6)(__int64, unsigned int); // rax
  char v7; // al
  unsigned int v8; // ebx
  bool (__fastcall *v10)(CMaskBrush *, struct CDrawingContext *, bool *); // rax
  int v12; // eax
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    return 0;
  v5 = *((_QWORD *)this + 10);
  if ( !v5 )
    return 0;
  v6 = *(bool (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v5 + 48LL);
  if ( (char *)v6 == (char *)CColorBrush::IsOfType )
  {
    v7 = CColorBrush::IsOfType(v5, 51LL);
  }
  else if ( (char *)v6 == (char *)CLinearGradientBrush::IsOfType )
  {
    v7 = CLinearGradientBrush::IsOfType(v5, 51);
  }
  else
  {
    v7 = v6 == CEffectBrush::IsOfType ? CEffectBrush::IsOfType(v5, 0x33u) : v6(v5, 51u);
  }
  if ( !v7 )
    return 0;
  if ( a2 )
  {
    v10 = *(bool (__fastcall **)(CMaskBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)this + 272LL);
    if ( !(v10 == CMaskBrush::IsReadyToDraw ? CMaskBrush::IsReadyToDraw(this, 0LL, &v13) : v10(this, 0LL, &v13)) )
      return 0;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2);
  v12 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)v2);
  v8 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x102u);
  else
    return 0;
  return v8;
}
