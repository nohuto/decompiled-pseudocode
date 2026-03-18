/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FB90 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800769EC (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  char *v3; // rsi
  CMILCOMBase *v6; // rcx
  void (*v7)(void); // rax
  CCompositionSurfaceInfo *v9; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  int v11; // ecx

  v2 = 0;
  v3 = (char *)this + 32;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 4) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 80) )
  {
    --*(_DWORD *)(*((_QWORD *)this - 6) + 260LL);
    *((_BYTE *)this + 80) = 0;
  }
  if ( *((_BYTE *)this + 81) )
  {
    --*(_DWORD *)(*((_QWORD *)this - 6) + 256LL);
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
  if ( *(_QWORD *)v3 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v3 + 272LL) == 3 )
    {
      ++*(_DWORD *)(*((_QWORD *)this - 6) + 260LL);
      *((_BYTE *)this + 80) = 1;
    }
    v11 = *(_DWORD *)(*(_QWORD *)v3 + 268LL);
    if ( (v11 & 2) != 0 || (v11 & 1) != 0 && *(_QWORD *)(*(_QWORD *)v3 + 160LL) )
    {
      ++*(_DWORD *)(*((_QWORD *)this - 6) + 256LL);
      *((_BYTE *)this + 81) = 1;
    }
  }
  if ( *(_QWORD *)v3 )
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
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xC0u);
  }
  return v2;
}
