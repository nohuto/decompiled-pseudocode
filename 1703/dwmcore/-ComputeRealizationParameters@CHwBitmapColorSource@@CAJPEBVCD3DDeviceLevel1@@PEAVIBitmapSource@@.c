/*
 * XREFs of ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180056030 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800563D0 (-GetColorSpace@CBitmap@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180056420 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180056490 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180079334 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x18007BFF0 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RoundToPow2@@YAII@Z @ 0x180186D7C (-RoundToPow2@@YAII@Z.c)
 *     ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x18019ED44 (-AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z.c)
 *     ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x18019F188 (-ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeRealizationParameters(
        enum DXGI_FORMAT *this,
        CBitmap *a2,
        __int64 a3,
        __int64 a4,
        enum DXGI_FORMAT a5,
        int a6,
        enum DXGI_FORMAT a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        enum DXGI_FORMAT *a12)
{
  enum DXGI_FORMAT *v12; // rbx
  __int64 (__fastcall *v15)(CBitmap *, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  unsigned int v17; // edi
  __int64 (__fastcall *v18)(CBitmap *); // rax
  int AlphaMode; // eax
  bool v20; // r12
  __int64 (__fastcall *v21)(CBitmap *); // rax
  int ColorSpace; // eax
  int v23; // r14d
  __int64 v24; // r15
  int SupportedTextureFormat; // eax
  __int64 (__fastcall *v26)(CBitmap *); // rax
  int v27; // eax
  unsigned int *v28; // r8
  unsigned int *v29; // rdx
  __int64 (__fastcall *v30)(CBitmap *, unsigned int *, unsigned int *); // rax
  int Size; // eax
  unsigned int v32; // r12d
  unsigned int v33; // r15d
  int v34; // esi
  int v35; // eax
  unsigned int *v36; // r11
  struct CHwBitmapColorSource::DimensionLayout *v37; // r10
  char v39; // al
  unsigned int v40; // eax
  unsigned int *v41; // r11
  int v42; // r8d
  unsigned int v43; // eax
  unsigned int *v44; // r10
  int v45; // r8d
  int v46; // r14d
  unsigned int v47; // eax
  unsigned int *v48; // r11
  int v49; // r9d
  unsigned int v50; // eax
  unsigned int *v51; // r10
  int v52; // r11d
  unsigned int v53; // [rsp+20h] [rbp-68h]

  v12 = a12;
  *((_DWORD *)a12 + 18) = a7;
  *((_DWORD *)v12 + 21) = a6;
  *((_DWORD *)v12 + 6) = 0;
  *((_BYTE *)v12 + 88) = 0;
  v15 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL);
  if ( v15 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(a2, &a7);
  else
    PixelFormat = v15(a2, &a7);
  v17 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    v53 = 1177;
    goto LABEL_64;
  }
  v18 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 32LL);
  if ( v18 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(a2);
  else
    AlphaMode = v18(a2);
  v20 = AlphaMode == 1;
  v21 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 40LL);
  if ( v21 == CBitmap::GetColorSpace )
    ColorSpace = CBitmap::GetColorSpace(a2);
  else
    ColorSpace = v21(a2);
  if ( !ColorSpace || (v23 = 2, ColorSpace != 1) )
    v23 = 1;
  v24 = a10;
  SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(this, a7, a5, a10 != 0, 0, v12);
  v17 = SupportedTextureFormat;
  if ( SupportedTextureFormat < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SupportedTextureFormat, 0x4A1u);
  if ( (unsigned int)HasAlphaChannel(*v12) )
  {
    v39 = v20;
    if ( v24 )
      v39 = 1;
    *((_BYTE *)v12 + 5) = v39;
  }
  else
  {
    *((_BYTE *)v12 + 5) = 0;
  }
  v26 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 32LL);
  if ( v26 == CBitmap::GetAlphaMode )
    v27 = CBitmap::GetAlphaMode(a2);
  else
    v27 = v26(a2);
  *((_DWORD *)v12 + 2) = v23;
  *((_BYTE *)v12 + 4) = v27 == 3;
  if ( (v17 & 0x80000000) != 0 )
  {
    if ( !a11 )
      return v17;
    v17 = -2147467263;
    v53 = 1217;
    goto LABEL_64;
  }
  v28 = (unsigned int *)(v12 + 20);
  v29 = (unsigned int *)(v12 + 19);
  v30 = *(__int64 (__fastcall **)(CBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 48LL);
  if ( v30 == CBitmap::GetSize )
    Size = CBitmap::GetSize(a2, v29, v28);
  else
    Size = v30(a2, v29, v28);
  v17 = Size;
  if ( Size < 0 )
  {
    v53 = 1226;
LABEL_64:
    v49 = v17;
    goto LABEL_65;
  }
  v32 = *((_DWORD *)this + 188);
  v33 = *((_DWORD *)this + 189);
  v34 = a11;
  v35 = CHwBitmapColorSource::ComputeRealizationSize(v32, v33, a3, a4, a6, a8, a9, a11, v12);
  v17 = v35;
  if ( v35 < 0 )
  {
    v53 = 1239;
    goto LABEL_57;
  }
  v36 = (unsigned int *)(v12 + 11);
  v37 = (struct CHwBitmapColorSource::DimensionLayout *)(v12 + 14);
  *((_DWORD *)v12 + 11) = *((_DWORD *)v12 + 9) - *((_DWORD *)v12 + 7);
  *((_DWORD *)v12 + 12) = 0;
  *((_QWORD *)v12 + 7) = (unsigned int)(*((_DWORD *)v12 + 10) - *((_DWORD *)v12 + 8));
  if ( !a6 )
  {
    *((_DWORD *)v12 + 13) = 3;
    *((_DWORD *)v12 + 16) = 3;
  }
  if ( (unsigned int)(*((_DWORD *)v12 + 18) - 4) > 1 )
  {
    if ( !*((_BYTE *)this + 771) )
      return v17;
    if ( ((*v36 - 1) & *v36) != 0 )
    {
      if ( *((_DWORD *)v12 + 9) - *((_DWORD *)v12 + 7) == *((_DWORD *)v12 + 3) )
      {
        v46 = *((_DWORD *)v12 + 13);
        v35 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
                (struct CHwBitmapColorSource::DimensionLayout *)(v12 + 11),
                v32);
        v17 = v35;
        if ( v35 < 0 )
        {
          v53 = 1312;
          goto LABEL_57;
        }
        if ( !v34 && *((_DWORD *)v12 + 12) )
        {
          v47 = RoundToPow2(*((_DWORD *)v12 + 3));
          *((_DWORD *)v12 + 12) = 0;
          *((_DWORD *)v12 + 3) = v47;
          *v48 = v47;
          *((_DWORD *)v12 + 9) = v47;
          *((_DWORD *)v12 + 13) = v46;
        }
      }
      else
      {
        *((_DWORD *)v12 + 13) = 3;
      }
    }
    if ( ((*(_DWORD *)v37 - 1) & *(_DWORD *)v37) == 0 )
    {
LABEL_49:
      v35 = CHwBitmapColorSource::ReconcileLayouts((struct CHwBitmapColorSource::RealizationParameters *)v12, v32, v33);
      v17 = v35;
      if ( v35 >= 0 )
        return v17;
      v53 = 1374;
      goto LABEL_57;
    }
    if ( *((_DWORD *)v12 + 10) - *((_DWORD *)v12 + 8) != *((_DWORD *)v12 + 4) )
    {
      *((_DWORD *)v12 + 16) = 3;
      goto LABEL_49;
    }
    v35 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(v37, v33);
    v17 = v35;
    if ( v35 >= 0 )
    {
      if ( !v34 && *((_DWORD *)v12 + 15) )
      {
        v50 = RoundToPow2(*((_DWORD *)v12 + 4));
        *((_DWORD *)v12 + 15) = 0;
        *((_DWORD *)v12 + 4) = v50;
        *v51 = v50;
        *((_DWORD *)v12 + 10) = v50;
        *((_DWORD *)v12 + 16) = v52;
      }
      goto LABEL_49;
    }
    v53 = 1354;
LABEL_57:
    v49 = v35;
LABEL_65:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, v53);
    return v17;
  }
  if ( ((*v36 - 1) & *v36) != 0 )
  {
    v40 = RoundToPow2(*v36);
    *v41 = v40;
    *((_DWORD *)v12 + 12) = v42;
  }
  if ( ((*(_DWORD *)v37 - 1) & *(_DWORD *)v37) != 0 )
  {
    v43 = RoundToPow2(*(_DWORD *)v37);
    *v44 = v43;
    *((_DWORD *)v12 + 15) = v45;
  }
  return v17;
}
