/*
 * XREFs of ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000AA10
 * Callers:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180009CE8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A788 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000B0F0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180037A90 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@W7EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5790 (-GetTransform@CCompositionSurfaceBitmap@@W7EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@WCA@EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D57A0 (-GetTransform@CCompositionSurfaceBitmap@@WCA@EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z @ 0x1800C2EB4 (--$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800C6348 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetTransform(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // r14
  char v4; // bl
  CDxHandleBitmapRealization *v8; // rcx
  __int64 (__fastcall *v9)(CDxHandleBitmapRealization *, CMILMatrix *); // rax
  CCompositionSurfaceInfo *v12; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v14; // rax

  v3 = (__int64 *)(a1 + 416);
  v4 = 0;
  if ( *(_QWORD *)(a1 + 416) )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 464) )
  {
    --*(_DWORD *)(*(_QWORD *)(a1 - 40) + 284LL);
    *(_BYTE *)(a1 + 464) = 0;
  }
  if ( *(_BYTE *)(a1 + 465) )
  {
    --*(_DWORD *)(*(_QWORD *)(a1 - 40) + 280LL);
    *(_BYTE *)(a1 + 465) = 0;
  }
  v12 = *(CCompositionSurfaceInfo **)(a1 + 408);
  if ( v12 )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12);
    ReplaceInterface<CBitmapRealization,CBitmapRealization>(v3, RenderingRealizationNoRef);
  }
  else
  {
    ReleaseInterface<CBitmapRealization>(v3);
  }
  if ( *v3 )
  {
    if ( *(_DWORD *)(*v3 + 240) == 3 )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 - 40) + 284LL);
      *(_BYTE *)(a1 + 464) = 1;
    }
    v14 = *v3;
    if ( (*(_BYTE *)(*v3 + 236) & 2) != 0 || (*(_BYTE *)(v14 + 236) & 1) != 0 && *(_QWORD *)(v14 + 128) )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 - 40) + 280LL);
      *(_BYTE *)(a1 + 465) = 1;
    }
  }
  if ( *v3 )
  {
LABEL_2:
    v8 = (CDxHandleBitmapRealization *)(*(_QWORD *)(a1 + 416) + 104LL);
    v9 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, CMILMatrix *))(*(_QWORD *)v8 + 32LL);
    if ( v9 == CDxHandleBitmapRealization::GetTransform )
      return CDxHandleBitmapRealization::GetTransform(v8, (CMILMatrix *)a2);
    else
      return ((__int64 (__fastcall *)(CDxHandleBitmapRealization *, __int64, _QWORD *))v9)(v8, a2, a3);
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
