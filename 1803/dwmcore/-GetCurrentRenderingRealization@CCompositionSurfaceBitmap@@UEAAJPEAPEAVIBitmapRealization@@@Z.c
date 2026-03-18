/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047860
 * Callers:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800973F0 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180183778 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x180082E60 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // edi
  __int64 *v3; // rsi
  CMILCOMBase *v6; // rcx
  void (*v7)(void); // rax
  CCompositionSurfaceInfo *v9; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v11; // rax
  int v12; // ecx

  v2 = 0;
  v3 = (__int64 *)((char *)this + 32);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 4) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 80) )
  {
    --*(_DWORD *)(*((_QWORD *)this - 6) + 284LL);
    *((_BYTE *)this + 80) = 0;
  }
  if ( *((_BYTE *)this + 81) )
  {
    --*(_DWORD *)(*((_QWORD *)this - 6) + 280LL);
    *((_BYTE *)this + 81) = 0;
  }
  v9 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 3);
  if ( v9 )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v9);
    ReplaceInterface<IDXGIResource,IDXGIResource>(v3, RenderingRealizationNoRef);
  }
  else
  {
    ReleaseInterface<CBitmapRealization>(v3);
  }
  v11 = *v3;
  if ( !*v3 )
    goto LABEL_22;
  if ( *(_DWORD *)(v11 + 272) == 3 )
  {
    ++*(_DWORD *)(*((_QWORD *)this - 6) + 284LL);
    v11 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 80) = 1;
  }
  v12 = *(_DWORD *)(v11 + 268);
  if ( (v12 & 2) != 0 || (v12 & 1) != 0 && *(_QWORD *)(v11 + 160) )
  {
    ++*(_DWORD *)(*((_QWORD *)this - 6) + 280LL);
    v11 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 81) = 1;
  }
  if ( v11 )
  {
LABEL_2:
    v6 = (CMILCOMBase *)*((_QWORD *)this + 4);
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef(v6);
    else
      v7();
    *a2 = (struct IBitmapRealization *)((*((_QWORD *)this + 4) + 144LL) & -(__int64)(*((_QWORD *)this + 4) != 0LL));
  }
  else
  {
LABEL_22:
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xC0u);
  }
  return v2;
}
