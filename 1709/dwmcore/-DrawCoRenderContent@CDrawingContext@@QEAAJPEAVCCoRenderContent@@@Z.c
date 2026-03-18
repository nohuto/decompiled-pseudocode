/*
 * XREFs of ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18013C8DC
 * Callers:
 *     ?Draw@CCoRenderContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D1B0 (-Draw@CCoRenderContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18011B624 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawCoRenderContent(CDrawingContext *this, struct CCoRenderContent *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  CD2DContext *v6; // rbx
  signed int v7; // eax

  v4 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xA76u);
  }
  else
  {
    v6 = (CD2DContext *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 152LL))(*((_QWORD *)this + 48));
    CD2DContext::FlushDrawList(v6);
    v7 = CD2DContext::DrawCustomCallbackRendererInternal(
           v6,
           (struct ID2D1PrivateCompositorRenderer *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xA77u);
  }
  return v5;
}
