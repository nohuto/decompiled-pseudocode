/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18004735C
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007200 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180007470 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180047494 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800477B0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180186D50 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180186FC0 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800498E0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x180082E60 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  char *v2; // r14
  __int64 v4; // rax
  bool v5; // zf
  __int64 v7; // rsi
  CMILCOMBase *v8; // rdi
  CBitmapRealization *v9; // rcx
  void (*v10)(void); // rax
  __int64 (__fastcall *v11)(CMILCOMBase *); // rax
  __int64 v12; // rcx
  int v13; // edx
  CCompositionSurfaceInfo *v14; // rcx

  v2 = (char *)this + 96;
  v4 = *((_QWORD *)this + 12);
  if ( v4 && !a2 )
  {
LABEL_3:
    v5 = v4 == 0;
    return !v5;
  }
  if ( *((_BYTE *)this + 144) )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
    *((_BYTE *)this + 144) = 0;
  }
  if ( *((_BYTE *)this + 145) )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
    *((_BYTE *)this + 145) = 0;
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    v8 = *(CMILCOMBase **)(v7 + 120);
    if ( !v8 && !*(_BYTE *)(v7 + 400) )
    {
      v14 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 11);
      *(_BYTE *)(v7 + 400) = 1;
      CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v14);
      *(_BYTE *)(v7 + 400) = 0;
      v8 = *(CMILCOMBase **)(v7 + 120);
    }
    v9 = *(CBitmapRealization **)v2;
    if ( *(_QWORD *)v2 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v10 == (char *)CBitmapRealization::Release )
        CBitmapRealization::Release(v9);
      else
        v10();
    }
    *(_QWORD *)v2 = v8;
    if ( v8 )
    {
      v11 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v8 + 8LL);
      if ( v11 == CMILCOMBase::InternalAddRef )
        CMILCOMBase::InternalAddRef(v8);
      else
        v11(v8);
    }
  }
  else
  {
    ReleaseInterface<CBitmapRealization>(v2);
  }
  v5 = *(_QWORD *)v2 == 0LL;
  if ( *(_QWORD *)v2 )
  {
    v12 = *(_QWORD *)v2;
    if ( *(_DWORD *)(*(_QWORD *)v2 + 272LL) == 3 )
    {
      ++*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
      v12 = *(_QWORD *)v2;
      *((_BYTE *)this + 144) = 1;
    }
    v13 = *(_DWORD *)(v12 + 268);
    v4 = v12;
    if ( (v13 & 2) != 0 || (v13 & 1) != 0 && *(_QWORD *)(v12 + 160) )
    {
      ++*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
      v4 = *(_QWORD *)v2;
      *((_BYTE *)this + 145) = 1;
    }
    goto LABEL_3;
  }
  return !v5;
}
