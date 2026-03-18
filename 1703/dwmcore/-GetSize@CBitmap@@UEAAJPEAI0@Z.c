/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180056030
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1800437F8 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CEC0 (-GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x1800D5660 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1801AABB0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // edi

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 104) & -(__int64)(this != (CBitmap *)16));
  EnterCriticalSection(v6);
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 38);
    v7 = *((_DWORD *)this + 39);
    v8 = 0;
    *a3 = v7;
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v8;
}
