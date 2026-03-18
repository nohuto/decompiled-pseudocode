/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800379F0
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800270B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ?ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18007AF68 (-ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z @ 0x1800C2EB4 (--$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800C6348 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  char *v3; // rsi
  CBitmapOfDeviceBitmaps *v6; // rcx
  void (*v7)(void); // rax
  CCompositionSurfaceInfo *v9; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v11; // rax

  v2 = 0;
  v3 = (char *)this + 408;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 51) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 456) )
  {
    --*(_DWORD *)(*((_QWORD *)this - 6) + 284LL);
    *((_BYTE *)this + 456) = 0;
  }
  if ( *((_BYTE *)this + 457) )
  {
    --*(_DWORD *)(*((_QWORD *)this - 6) + 280LL);
    *((_BYTE *)this + 457) = 0;
  }
  v9 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 50);
  if ( v9 )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v9);
    ReplaceInterface<CBitmapRealization,CBitmapRealization>(v3, RenderingRealizationNoRef);
  }
  else
  {
    ReleaseInterface<CBitmapRealization>(v3);
  }
  if ( *(_QWORD *)v3 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v3 + 240LL) == 3 )
    {
      ++*(_DWORD *)(*((_QWORD *)this - 6) + 284LL);
      *((_BYTE *)this + 456) = 1;
    }
    v11 = *(_QWORD *)v3;
    if ( (*(_BYTE *)(*(_QWORD *)v3 + 236LL) & 2) != 0 || (*(_BYTE *)(v11 + 236) & 1) != 0 && *(_QWORD *)(v11 + 128) )
    {
      ++*(_DWORD *)(*((_QWORD *)this - 6) + 280LL);
      *((_BYTE *)this + 457) = 1;
    }
  }
  if ( *(_QWORD *)v3 )
  {
LABEL_2:
    v6 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 51);
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v6);
    else
      v7();
    *a2 = (struct IBitmapRealization *)((*((_QWORD *)this + 51) + 104LL) & -(__int64)(*((_QWORD *)this + 51) != 0LL));
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xD7u);
  }
  return v2;
}
