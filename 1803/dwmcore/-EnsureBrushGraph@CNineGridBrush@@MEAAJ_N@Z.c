/*
 * XREFs of ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x180029B20
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004D1A8 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180035838 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::EnsureBrushGraph(CNineGridBrush *this, char a2)
{
  struct CBrushRenderingGraph **v2; // rdi
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  char v7; // al
  unsigned int v8; // ebx
  int v10; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CBrushRenderingGraph **)((char *)this + 64);
  if ( !*((_QWORD *)this + 8)
    && (v5 = *((_QWORD *)this + 9)) != 0
    && ((v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL), v6 != CColorBrush::IsOfType)
      ? (v7 = v6(v5, 51LL))
      : (v7 = CColorBrush::IsOfType(v5, 51LL)),
        v7
     && (!a2
      || (*(unsigned __int8 (__fastcall **)(CNineGridBrush *, _QWORD, char *))(*(_QWORD *)this + 272LL))(
           this,
           0LL,
           &v11))
     && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2),
         v10 = CBrushRenderingGraphBuilder::Build(*((struct CSpriteVisualContent **)this + 9), v2),
         v8 = v10,
         v10 < 0)) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x17Bu);
  }
  else
  {
    return 0;
  }
  return v8;
}
