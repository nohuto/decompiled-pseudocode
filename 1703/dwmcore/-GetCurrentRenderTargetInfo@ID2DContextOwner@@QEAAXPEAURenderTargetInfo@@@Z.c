/*
 * XREFs of ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000B360 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180170EF4 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z.c)
 * Callees:
 *     ?GetCurrentDisplayId@CDrawingContext@@UEBA?AVDisplayId@@XZ @ 0x1800A1DF0 (-GetCurrentDisplayId@CDrawingContext@@UEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentAdapterLuid@CDrawingContext@@UEBA?AU_LUID@@XZ @ 0x1800A1E00 (-GetCurrentAdapterLuid@CDrawingContext@@UEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@UEBA?AW4StereoContext@@XZ @ 0x1800A1E40 (-GetCurrentStereoContext@CDrawingContext@@UEBA-AW4StereoContext@@XZ.c)
 *     ?GetCurrentHardwareProtection@CDrawingContext@@UEBA_NXZ @ 0x1800A1E50 (-GetCurrentHardwareProtection@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ID2DContextOwner::GetCurrentRenderTargetInfo(ID2DContextOwner *this, struct RenderTargetInfo *a2)
{
  __int64 (__fastcall *v4)(ID2DContextOwner *, __int64 *); // rax
  _QWORD *CurrentAdapterLuid; // rax
  _DWORD *(__fastcall *v6)(__int64, __int64 *); // rax
  _DWORD *CurrentDisplayId; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  int CurrentStereoContext; // eax
  __int64 (__fastcall *v10)(CDrawingContext *); // rax
  char CurrentHardwareProtection; // al
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall **)(ID2DContextOwner *, __int64 *))(*(_QWORD *)this + 48LL);
  if ( (char *)v4 == (char *)CDrawingContext::GetCurrentAdapterLuid )
    CurrentAdapterLuid = (_QWORD *)CDrawingContext::GetCurrentAdapterLuid(this, &v12);
  else
    CurrentAdapterLuid = (_QWORD *)v4(this, &v12);
  *(_QWORD *)a2 = *CurrentAdapterLuid;
  v6 = *(_DWORD *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)this + 56LL);
  if ( (char *)v6 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = CDrawingContext::GetCurrentDisplayId((__int64)this, &v12);
  else
    CurrentDisplayId = v6((__int64)this, &v12);
  *((_DWORD *)a2 + 2) = *CurrentDisplayId;
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 64LL);
  if ( v8 == CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext((__int64)this);
  else
    CurrentStereoContext = v8((__int64)this);
  *((_DWORD *)a2 + 3) = CurrentStereoContext;
  v10 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 72LL);
  if ( v10 == CDrawingContext::GetCurrentHardwareProtection )
    CurrentHardwareProtection = CDrawingContext::GetCurrentHardwareProtection(this);
  else
    CurrentHardwareProtection = v10(this);
  *((_BYTE *)a2 + 16) = CurrentHardwareProtection;
}
