/*
 * XREFs of ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008663C (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18001C0D4 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D30 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::EnsureBrushGraph(CMaskBrush *this, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  _BOOL8 (__fastcall *v6)(__int64, int); // rax
  char v7; // al
  unsigned int v8; // ebx
  int v10; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( !*((_QWORD *)this + 8)
    && (v5 = *((_QWORD *)this + 11)) != 0
    && ((v6 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL), (char *)v6 != (char *)CColorBrush::IsOfType)
      ? ((char *)v6 != (char *)CLinearGradientBrush::IsOfType
       ? (v6 != CSurfaceBrush::IsOfType
        ? (v7 = v6(v5, 85))
        : (v7 = CSurfaceBrush::IsOfType(v5, 85)))
       : (v7 = CLinearGradientBrush::IsOfType(v5, 85LL)))
      : (v7 = CColorBrush::IsOfType(v5, 85LL)),
        v7
     && (!a2
      || (*(unsigned __int8 (__fastcall **)(CMaskBrush *, _QWORD, char *))(*(_QWORD *)this + 224LL))(this, 0LL, &v11))
     && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2),
         v10 = CBrushRenderingGraphBuilder::Build(
                 (struct CSpriteVisualContent **)this,
                 (struct CBrushRenderingGraph **)v2),
         v8 = v10,
         v10 < 0)) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x139u);
  }
  else
  {
    return 0;
  }
  return v8;
}
