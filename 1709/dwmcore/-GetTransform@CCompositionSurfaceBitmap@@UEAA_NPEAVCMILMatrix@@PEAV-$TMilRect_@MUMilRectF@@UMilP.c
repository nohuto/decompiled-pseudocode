/*
 * XREFs of ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028690 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180029600 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x1800B8CB4 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@W7EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C6040 (-GetTransform@CCompositionSurfaceBitmap@@W7EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18015DAC0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D8A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800769EC (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetTransform(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  char v4; // bl
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *); // rax
  CCompositionSurfaceInfo *v12; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  int v14; // ecx

  v3 = a1 + 40;
  v4 = 0;
  if ( *(_QWORD *)(a1 + 40) )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 88) )
  {
    --*(_DWORD *)(*(_QWORD *)(a1 - 40) + 260LL);
    *(_BYTE *)(a1 + 88) = 0;
  }
  if ( *(_BYTE *)(a1 + 89) )
  {
    --*(_DWORD *)(*(_QWORD *)(a1 - 40) + 256LL);
    *(_BYTE *)(a1 + 89) = 0;
  }
  v12 = *(CCompositionSurfaceInfo **)(a1 + 32);
  if ( v12 )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12);
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
      ++*(_DWORD *)(*(_QWORD *)(a1 - 40) + 260LL);
      *(_BYTE *)(a1 + 88) = 1;
    }
    v14 = *(_DWORD *)(*(_QWORD *)v3 + 268LL);
    if ( (v14 & 2) != 0 || (v14 & 1) != 0 && *(_QWORD *)(*(_QWORD *)v3 + 160LL) )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 - 40) + 256LL);
      *(_BYTE *)(a1 + 89) = 1;
    }
  }
  if ( *(_QWORD *)v3 )
  {
LABEL_2:
    v8 = *(_QWORD *)(a1 + 40) + 144LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v8 + 40LL);
    if ( (char *)v9 == (char *)CDxHandleBitmapRealization::GetTransform )
      return CDxHandleBitmapRealization::GetTransform(v8, a2, a3);
    else
      return v9(v8, a2, a3);
  }
  else
  {
    *(_WORD *)(a2 + 64) = 32085;
    *(_OWORD *)a2 = _xmm;
    *(_OWORD *)(a2 + 16) = _xmm;
    *(_OWORD *)(a2 + 32) = _xmm;
    *(_OWORD *)(a2 + 48) = _xmm;
    if ( a3 )
    {
      a3[1] = 0LL;
      *a3 = 0LL;
    }
  }
  return v4;
}
