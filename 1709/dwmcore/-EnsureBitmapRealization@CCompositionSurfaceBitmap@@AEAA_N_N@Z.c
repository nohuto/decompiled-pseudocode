/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180028380 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180028534 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800289A0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028B70 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18015DDD0 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x18002B2F0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x18004BB0C (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800769EC (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  char *v2; // rsi
  __int64 v5; // rdi
  CBitmapRealization *v6; // rcx
  CMILCOMBase *v7; // rdi
  void (*v8)(void); // rax
  __int64 (__fastcall *v9)(CMILCOMBase *); // rax
  int v10; // ecx
  CCompositionSurfaceInfo *v11; // rcx

  v2 = (char *)this + 96;
  if ( !*((_QWORD *)this + 12) || a2 )
  {
    if ( *((_BYTE *)this + 144) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 260LL);
      *((_BYTE *)this + 144) = 0;
    }
    if ( *((_BYTE *)this + 145) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 256LL);
      *((_BYTE *)this + 145) = 0;
    }
    v5 = *((_QWORD *)this + 11);
    if ( v5 )
    {
      if ( !*(_QWORD *)(v5 + 120) && !*(_BYTE *)(v5 + 384) )
      {
        v11 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 11);
        *(_BYTE *)(v5 + 384) = 1;
        CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v11);
        *(_BYTE *)(v5 + 384) = 0;
      }
      v6 = *(CBitmapRealization **)v2;
      v7 = *(CMILCOMBase **)(v5 + 120);
      if ( *(_QWORD *)v2 )
      {
        v8 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
        if ( (char *)v8 == (char *)CBitmapRealization::Release )
          CBitmapRealization::Release(v6);
        else
          v8();
      }
      *(_QWORD *)v2 = v7;
      if ( v7 )
      {
        v9 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v7 + 8LL);
        if ( v9 == CMILCOMBase::InternalAddRef )
          CMILCOMBase::InternalAddRef(v7);
        else
          v9(v7);
      }
    }
    else
    {
      ReleaseInterface<CBitmapRealization>(v2);
    }
    if ( *(_QWORD *)v2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v2 + 272LL) == 3 )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 260LL);
        *((_BYTE *)this + 144) = 1;
      }
      v10 = *(_DWORD *)(*(_QWORD *)v2 + 268LL);
      if ( (v10 & 2) != 0 || (v10 & 1) != 0 && *(_QWORD *)(*(_QWORD *)v2 + 160LL) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 256LL);
        *((_BYTE *)this + 145) = 1;
      }
    }
  }
  return *(_QWORD *)v2 != 0LL;
}
