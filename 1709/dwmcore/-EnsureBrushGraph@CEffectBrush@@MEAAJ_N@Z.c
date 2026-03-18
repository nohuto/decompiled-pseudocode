/*
 * XREFs of ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180082DD0
 * Callers:
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800226AC (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004F228 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180072528 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::EnsureBrushGraph(CEffectBrush *this, char a2)
{
  CMILRefCountBase **v2; // rdi
  unsigned int v4; // ebx
  signed int v6; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CMILRefCountBase **)((char *)this + 64);
  if ( *((_QWORD *)this + 8)
    || a2
    && !(*(unsigned __int8 (__fastcall **)(CEffectBrush *, _QWORD, char *))(*(_QWORD *)this + 240LL))(this, 0LL, &v7) )
  {
    return 0;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v2);
  v6 = CBrushRenderingGraphBuilder::Build((struct CSpriteVisualContent **)this, v2);
  v4 = v6;
  if ( v6 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x62u);
  return v4;
}
