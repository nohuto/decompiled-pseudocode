/*
 * XREFs of ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180024B30
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004F228 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070F60 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180072528 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800825B0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::EnsureBrushGraph(CMaskBrush *this, char a2)
{
  struct CBrushRenderingGraph **v2; // rdi
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  char v7; // al
  unsigned int v8; // ebx
  __int64 (__fastcall *v10)(CMaskBrush *, struct CDrawingContext *, bool *); // rax
  int v12; // eax
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CBrushRenderingGraph **)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    return 0;
  v5 = *((_QWORD *)this + 11);
  if ( !v5 )
    return 0;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL);
  if ( v6 == CColorBrush::IsOfType )
  {
    v7 = CColorBrush::IsOfType(v5, 46LL);
  }
  else if ( v6 == CLinearGradientBrush::IsOfType )
  {
    v7 = CLinearGradientBrush::IsOfType(v5, 46LL);
  }
  else
  {
    v7 = v6 == CEffectBrush::IsOfType ? CEffectBrush::IsOfType(v5, 46LL) : v6(v5, 46LL);
  }
  if ( !v7 )
    return 0;
  if ( a2 )
  {
    v10 = *(__int64 (__fastcall **)(CMaskBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)this + 240LL);
    if ( !(v10 == CMaskBrush::IsReadyToDraw
         ? CMaskBrush::IsReadyToDraw(this, 0LL, &v13)
         : (unsigned __int8)v10(this, 0LL, &v13)) )
      return 0;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2);
  v12 = CBrushRenderingGraphBuilder::Build(this, v2);
  v8 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x13Bu);
  else
    return 0;
  return v8;
}
