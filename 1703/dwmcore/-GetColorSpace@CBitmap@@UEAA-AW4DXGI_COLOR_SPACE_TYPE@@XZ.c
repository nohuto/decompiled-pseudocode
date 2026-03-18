/*
 * XREFs of ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800563D0
 * Callers:
 *     ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180041ECC (-Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$T.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180054480 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?GetColorSpace@CBitmapResource@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007CE10 (-GetColorSpace@CBitmapResource@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetColorSpace(CBitmap *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 104) & -(__int64)(this != (CBitmap *)16));
  EnterCriticalSection(v2);
  v3 = *((_DWORD *)this + 44);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
