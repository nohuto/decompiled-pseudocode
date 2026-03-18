/*
 * XREFs of ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801B4904
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801B50E0 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RoundToPow2@@YAII@Z @ 0x180190FA8 (-RoundToPow2@@YAII@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x1801A7964 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x1801B4528 (-AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801B4C70 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x1801B62E0 (-ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeRealizationParameters(
        enum DXGI_FORMAT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        enum DXGI_FORMAT a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        enum DXGI_FORMAT *a12)
{
  bool v14; // r13
  int v15; // esi
  signed int SupportedTextureFormat; // eax
  unsigned int v17; // edi
  int v18; // r11d
  char v19; // al
  signed int v20; // eax
  unsigned int v21; // r15d
  unsigned int v22; // ebp
  unsigned int *v23; // r11
  struct CHwBitmapColorSource::DimensionLayout *v24; // r10
  int v25; // eax
  _DWORD *v26; // r11
  int v27; // eax
  _DWORD *v28; // r10
  int v29; // r14d
  int v30; // eax
  _DWORD *v31; // r11
  int v32; // eax
  _DWORD *v33; // r10
  int v34; // r11d
  unsigned int v36; // [rsp+20h] [rbp-A8h]
  enum DXGI_FORMAT v39[2]; // [rsp+60h] [rbp-68h] BYREF
  int v40; // [rsp+68h] [rbp-60h]

  *((_DWORD *)a12 + 18) = a7;
  *((_DWORD *)a12 + 6) = 0;
  *((_DWORD *)a12 + 21) = a6;
  *((_BYTE *)a12 + 88) = 0;
  (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL))(a2, v39);
  v14 = v39[1] == DXGI_FORMAT_R32G32B32A32_TYPELESS;
  if ( !v40 || (v15 = 2, v40 != 1) )
    v15 = 1;
  SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(this, v39[0], a5, a10 != 0, 0, a12);
  v17 = SupportedTextureFormat;
  if ( SupportedTextureFormat < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SupportedTextureFormat, 0x49Eu);
  if ( (unsigned int)HasAlphaChannel(*a12) )
  {
    v19 = v14;
    if ( a10 )
      v19 = 1;
    *((_BYTE *)a12 + 5) = v19;
  }
  else
  {
    *((_BYTE *)a12 + 5) = 0;
  }
  *((_DWORD *)a12 + 2) = v15;
  *((_BYTE *)a12 + 4) = v18 == 3;
  if ( (v17 & 0x80000000) != 0 )
  {
    if ( a11 )
    {
      v17 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x4BEu);
    }
    return v17;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 32LL))(
          a2,
          a12 + 19,
          a12 + 20);
  v17 = v20;
  if ( v20 < 0 )
  {
    v36 = 1223;
    goto LABEL_44;
  }
  v21 = *((_DWORD *)this + 192);
  v22 = *((_DWORD *)this + 193);
  v20 = CHwBitmapColorSource::ComputeRealizationSize(v21, v22, a3, a4, a6, a8, a9, a11, a12);
  v17 = v20;
  if ( v20 < 0 )
  {
    v36 = 1236;
    goto LABEL_44;
  }
  v23 = (unsigned int *)(a12 + 11);
  v24 = (struct CHwBitmapColorSource::DimensionLayout *)(a12 + 14);
  *((_DWORD *)a12 + 11) = *((_DWORD *)a12 + 9) - *((_DWORD *)a12 + 7);
  *((_DWORD *)a12 + 12) = 0;
  *((_DWORD *)a12 + 14) = *((_DWORD *)a12 + 10) - *((_DWORD *)a12 + 8);
  *((_DWORD *)a12 + 15) = 0;
  if ( !a6 )
  {
    *((_DWORD *)a12 + 13) = 3;
    *((_DWORD *)a12 + 16) = 3;
  }
  if ( (unsigned int)(*((_DWORD *)a12 + 18) - 4) > 1 )
  {
    if ( !*((_BYTE *)this + 787) )
      return v17;
    if ( ((*v23 - 1) & *v23) != 0 )
    {
      if ( *((_DWORD *)a12 + 9) - *((_DWORD *)a12 + 7) == *((_DWORD *)a12 + 3) )
      {
        v29 = *((_DWORD *)a12 + 13);
        v20 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
                (struct CHwBitmapColorSource::DimensionLayout *)(a12 + 11),
                v21);
        v17 = v20;
        if ( v20 < 0 )
        {
          v36 = 1309;
          goto LABEL_44;
        }
        if ( !a11 && *((_DWORD *)a12 + 12) )
        {
          v30 = RoundToPow2(*((_DWORD *)a12 + 3));
          *((_DWORD *)a12 + 3) = v30;
          *v31 = v30;
          *((_DWORD *)a12 + 9) = v30;
          *((_DWORD *)a12 + 12) = 0;
          *((_DWORD *)a12 + 13) = v29;
        }
      }
      else
      {
        *((_DWORD *)a12 + 13) = 3;
      }
    }
    if ( ((*(_DWORD *)v24 - 1) & *(_DWORD *)v24) != 0 )
    {
      if ( *((_DWORD *)a12 + 10) - *((_DWORD *)a12 + 8) == *((_DWORD *)a12 + 4) )
      {
        v20 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(v24, v22);
        v17 = v20;
        if ( v20 < 0 )
        {
          v36 = 1351;
          goto LABEL_44;
        }
        if ( !a11 && *((_DWORD *)a12 + 15) )
        {
          v32 = RoundToPow2(*((_DWORD *)a12 + 4));
          *((_DWORD *)a12 + 4) = v32;
          *v33 = v32;
          *((_DWORD *)a12 + 10) = v32;
          *((_DWORD *)a12 + 15) = 0;
          *((_DWORD *)a12 + 16) = v34;
        }
      }
      else
      {
        *((_DWORD *)a12 + 16) = 3;
      }
    }
    v20 = CHwBitmapColorSource::ReconcileLayouts((struct CHwBitmapColorSource::RealizationParameters *)a12, v21, v22);
    v17 = v20;
    if ( v20 >= 0 )
      return v17;
    v36 = 1371;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, v36);
    return v17;
  }
  if ( ((*v23 - 1) & *v23) != 0 )
  {
    v25 = RoundToPow2(*v23);
    *v26 = v25;
    *((_DWORD *)a12 + 12) = 3;
  }
  if ( ((*(_DWORD *)v24 - 1) & *(_DWORD *)v24) != 0 )
  {
    v27 = RoundToPow2(*(_DWORD *)v24);
    *v28 = v27;
    *((_DWORD *)a12 + 15) = 3;
  }
  return v17;
}
