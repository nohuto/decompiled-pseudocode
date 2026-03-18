/*
 * XREFs of ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801EEBCC
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RoundToPow2@@YAII@Z @ 0x1801C6930 (-RoundToPow2@@YAII@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x1801E03EC (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z @ 0x1801EE2DC (-AdjustLayoutForConditionalNonPowerOfTwo@CHwBitmapColorSource@@CAJAEAUDimensionLayout@1@I@Z.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801EEF38 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z @ 0x1801F0880 (-ReconcileLayouts@CHwBitmapColorSource@@CAJAEAURealizationParameters@1@II@Z.c)
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
  int v14; // r15d
  bool v15; // r13
  int v16; // esi
  int SupportedTextureFormat; // eax
  unsigned int v18; // edi
  char v19; // al
  int v20; // eax
  unsigned int v21; // r15d
  unsigned int v22; // ebp
  unsigned int v23; // ecx
  struct CHwBitmapColorSource::DimensionLayout *v24; // r10
  unsigned int v25; // r8d
  int v26; // eax
  _DWORD *v27; // r11
  int v28; // eax
  _DWORD *v29; // r10
  int v30; // r14d
  int v31; // eax
  _DWORD *v32; // r11
  int v33; // eax
  _DWORD *v34; // r10
  int v35; // r11d
  unsigned int v37; // [rsp+20h] [rbp-A8h]
  enum DXGI_FORMAT v40; // [rsp+60h] [rbp-68h] BYREF
  int v41; // [rsp+64h] [rbp-64h]
  int v42; // [rsp+68h] [rbp-60h]

  *((_DWORD *)a12 + 18) = a7;
  *((_DWORD *)a12 + 21) = a6;
  *((_DWORD *)a12 + 6) = 0;
  *((_BYTE *)a12 + 88) = 0;
  (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL))(a2, &v40);
  v14 = v41;
  v15 = v41 == 1;
  if ( !v42 || (v16 = 2, v42 != 1) )
    v16 = 1;
  SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(this, v40, a5, a10 != 0, 0, a12);
  v18 = SupportedTextureFormat;
  if ( SupportedTextureFormat < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SupportedTextureFormat, 0x49Eu);
    v14 = v41;
  }
  if ( (unsigned int)HasAlphaChannel(*a12) )
  {
    v19 = v15;
    if ( a10 )
      v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  *((_BYTE *)a12 + 5) = v19;
  *((_DWORD *)a12 + 2) = v16;
  *((_BYTE *)a12 + 4) = v14 == 3;
  if ( (v18 & 0x80000000) != 0 )
  {
    if ( a11 )
    {
      v18 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467263, 0x4BEu);
    }
    return v18;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 32LL))(
          a2,
          a12 + 19,
          a12 + 20);
  v18 = v20;
  if ( v20 < 0 )
  {
    v37 = 1223;
    goto LABEL_44;
  }
  v21 = *((_DWORD *)this + 192);
  v22 = *((_DWORD *)this + 193);
  v20 = CHwBitmapColorSource::ComputeRealizationSize(v21, v22, a3, a4, a6, a8, a9, a11, a12);
  v18 = v20;
  if ( v20 < 0 )
  {
    v37 = 1236;
    goto LABEL_44;
  }
  v23 = *((_DWORD *)a12 + 9) - *((_DWORD *)a12 + 7);
  v24 = (struct CHwBitmapColorSource::DimensionLayout *)(a12 + 14);
  *(_QWORD *)(a12 + 11) = v23;
  v25 = *((_DWORD *)a12 + 10) - *((_DWORD *)a12 + 8);
  *((_DWORD *)a12 + 14) = v25;
  *((_DWORD *)a12 + 15) = 0;
  if ( !a6 )
  {
    *((_DWORD *)a12 + 13) = 3;
    *((_DWORD *)a12 + 16) = 3;
  }
  if ( (unsigned int)(*((_DWORD *)a12 + 18) - 4) > 1 )
  {
    if ( !*((_BYTE *)this + 787) )
      return v18;
    if ( ((v23 - 1) & v23) != 0 )
    {
      if ( *((_DWORD *)a12 + 9) - *((_DWORD *)a12 + 7) == *((_DWORD *)a12 + 3) )
      {
        v30 = *((_DWORD *)a12 + 13);
        v20 = CHwBitmapColorSource::AdjustLayoutForConditionalNonPowerOfTwo(
                (struct CHwBitmapColorSource::DimensionLayout *)(a12 + 11),
                v21);
        v18 = v20;
        if ( v20 < 0 )
        {
          v37 = 1309;
          goto LABEL_44;
        }
        if ( !a11 && *((_DWORD *)a12 + 12) )
        {
          v31 = RoundToPow2(*((_DWORD *)a12 + 3));
          *((_DWORD *)a12 + 3) = v31;
          *v32 = v31;
          *((_DWORD *)a12 + 9) = v31;
          *((_DWORD *)a12 + 12) = 0;
          *((_DWORD *)a12 + 13) = v30;
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
        v18 = v20;
        if ( v20 < 0 )
        {
          v37 = 1351;
          goto LABEL_44;
        }
        if ( !a11 && *((_DWORD *)a12 + 15) )
        {
          v33 = RoundToPow2(*((_DWORD *)a12 + 4));
          *((_DWORD *)a12 + 4) = v33;
          *v34 = v33;
          *((_DWORD *)a12 + 10) = v33;
          *((_DWORD *)a12 + 15) = 0;
          *((_DWORD *)a12 + 16) = v35;
        }
      }
      else
      {
        *((_DWORD *)a12 + 16) = 3;
      }
    }
    v20 = CHwBitmapColorSource::ReconcileLayouts((struct CHwBitmapColorSource::RealizationParameters *)a12, v21, v22);
    v18 = v20;
    if ( v20 >= 0 )
      return v18;
    v37 = 1371;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v37);
    return v18;
  }
  if ( ((v23 - 1) & v23) != 0 )
  {
    v26 = RoundToPow2(v23);
    *v27 = v26;
    *((_DWORD *)a12 + 12) = 3;
  }
  if ( ((v25 - 1) & v25) != 0 )
  {
    v28 = RoundToPow2(v25);
    *v29 = v28;
    *((_DWORD *)a12 + 15) = 3;
  }
  return v18;
}
