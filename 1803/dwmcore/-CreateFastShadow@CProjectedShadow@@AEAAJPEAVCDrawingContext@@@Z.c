/*
 * XREFs of ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B44B0
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CEllipseGeometry@@SAPEAX_K@Z @ 0x18016DDA8 (--2CEllipseGeometry@@SAPEAX_K@Z.c)
 *     ??0CProjectedShadowCaster@@QEAA@PEAVCComposition@@@Z @ 0x18019F8FC (--0CProjectedShadowCaster@@QEAA@PEAVCComposition@@@Z.c)
 *     ?InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801A0634 (-InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::CreateFastShadow(struct CComposition **this, struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  CProjectedShadowCaster *v5; // rax
  CProjectedShadowCaster *v6; // rcx

  v4 = 0;
  v5 = (CProjectedShadowCaster *)CEllipseGeometry::operator new();
  if ( v5 )
    v5 = CProjectedShadowCaster::CProjectedShadowCaster(v5, this[2]);
  CProjectedShadow::s_pFastShadowCaster = v5;
  if ( v5 )
  {
    CProjectedShadowCaster::InitializeFastShadow(v6, a2);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x460u);
    if ( CProjectedShadow::s_pFastShadowCaster )
    {
      (*(void (__fastcall **)(CProjectedShadowCaster *))(*(_QWORD *)CProjectedShadow::s_pFastShadowCaster + 16LL))(CProjectedShadow::s_pFastShadowCaster);
      CProjectedShadow::s_pFastShadowCaster = 0LL;
    }
  }
  return v4;
}
