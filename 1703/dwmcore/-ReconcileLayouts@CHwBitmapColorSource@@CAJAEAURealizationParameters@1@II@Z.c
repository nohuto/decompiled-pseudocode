/*
 * XREFs of ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x18019F188
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x18019ED44 (-AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::ReconcileLayouts(
        struct CHwBitmapColorSource::RealizationParameters *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax

  v3 = *((_DWORD *)a1 + 12);
  v4 = 0;
  if ( v3 )
  {
    if ( *((_DWORD *)a1 + 15) )
      return v4;
  }
  else if ( *((_DWORD *)a1 + 15) )
  {
    v5 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
           (struct CHwBitmapColorSource::RealizationParameters *)((char *)a1 + 44),
           a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x65Au);
    return v4;
  }
  if ( v3 )
  {
    v6 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
           (struct CHwBitmapColorSource::RealizationParameters *)((char *)a1 + 56),
           a3);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x663u);
  }
  return v4;
}
