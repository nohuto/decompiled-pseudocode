/*
 * XREFs of ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801E0300 (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1801E7E50 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801E8548 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x1801E9418 (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801EEBCC (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801F08E8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBitmapAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        volatile signed __int32 *a3,
        __int64 a4,
        struct MILMatrix3x2 *a5,
        __int64 a6,
        struct BitmapToXSpaceTransform *a7,
        int a8,
        int a9,
        __int64 a10,
        struct CHwBitmapColorSource::CacheContextParameters *a11,
        struct CHwSolidColorTextureSource **a12)
{
  CMILRefCountBase *v12; // rsi
  unsigned int v13; // edi
  CD3DDeviceLevel1 *v15; // r13
  int v16; // ebx
  int ValidContentStateForTargetedDisplay; // eax
  char v18; // al
  int v19; // eax
  int BitmapColorSource; // eax
  int v21; // eax
  int v22; // eax
  int StockBlackSolidColorTextureSourceNoRef; // eax
  struct CHwSolidColorTextureSource *v24; // rax
  CMILRefCountBase *v26; // [rsp+60h] [rbp-A0h] BYREF
  CD3DDeviceLevel1 *v27; // [rsp+68h] [rbp-98h]
  CMILPoolResource *v28; // [rsp+70h] [rbp-90h] BYREF
  CMILRefCountBase *v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h]
  struct CHwSolidColorTextureSource *v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  struct BitmapToXSpaceTransform *v33; // [rsp+98h] [rbp-68h]
  struct MILMatrix3x2 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int v36[4]; // [rsp+B0h] [rbp-50h]
  enum DXGI_FORMAT v37[17]; // [rsp+C0h] [rbp-40h] BYREF
  int v38; // [rsp+104h] [rbp+4h]

  v12 = 0LL;
  v13 = 0;
  v29 = 0LL;
  v15 = a1;
  v34 = a5;
  *a12 = 0LL;
  v16 = DisplayId::None;
  v32 = a6;
  v33 = a7;
  v35 = a10;
  v30 = a4;
  v27 = a1;
  v28 = (CMILPoolResource *)a3;
  v26 = 0LL;
  if ( a3 )
  {
    _InterlockedIncrement(a3 + 2);
    v12 = v26;
  }
  else
  {
    v13 = CHwBitmapCache::RetrieveFromBitmapSource(a2, a1, &v28);
  }
  if ( (*(unsigned int (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 56LL))(a2) == 3 )
  {
    ValidContentStateForTargetedDisplay = CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(
                                            ((unsigned __int64)a2 - 16) & -(__int64)(a2 != 0LL),
                                            *((_DWORD *)a11 + 7));
    if ( ValidContentStateForTargetedDisplay == 2 )
    {
      v16 = *((_DWORD *)a11 + 7);
LABEL_7:
      v15 = v27;
      goto LABEL_8;
    }
    if ( ValidContentStateForTargetedDisplay )
      goto LABEL_7;
    *(_QWORD *)v36 = *(_QWORD *)((((unsigned __int64)a2 - 16) & -(__int64)(a2 != 0LL)) + 0xB8);
    v22 = HasAlphaChannel(v36[0]);
    v15 = v27;
    StockBlackSolidColorTextureSourceNoRef = CD3DDeviceLevel1::GetStockBlackSolidColorTextureSourceNoRef(
                                               v27,
                                               v22 != 0,
                                               &v31);
    v13 = StockBlackSolidColorTextureSourceNoRef;
    if ( StockBlackSolidColorTextureSourceNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, StockBlackSolidColorTextureSourceNoRef, 0x1B4u);
      goto LABEL_21;
    }
    v24 = v31;
    *a12 = v31;
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
      v12 = v26;
    }
  }
LABEL_8:
  if ( !*a12 )
  {
    v18 = *((_BYTE *)a11 + 44);
    v38 = 0;
    v19 = CHwBitmapColorSource::ComputeRealizationParameters(
            (enum DXGI_FORMAT *)v15,
            (__int64)a2,
            v30,
            v32,
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 4),
            *((_DWORD *)a11 + 10),
            *((_DWORD *)a11 + 2),
            *((unsigned __int8 *)a11 + 12),
            a8,
            ((unsigned __int64)a11 + 48) & -(__int64)(v18 != 0),
            a9,
            v37);
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1CFu);
    }
    else
    {
      v38 = v16;
      BitmapColorSource = CHwBitmapCache::GetBitmapColorSource(
                            v15,
                            a2,
                            (struct CHwBitmapColorSource::CacheParameters *)v37,
                            a11,
                            v28,
                            &v26,
                            &v29);
      v13 = BitmapColorSource;
      if ( BitmapColorSource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapColorSource, 0x1DFu);
        v12 = v26;
      }
      else
      {
        v12 = v26;
        v21 = CHwBitmapColorSource::SetBitmapAndContext(
                v26,
                ((unsigned __int64)a11 + 48) & -(__int64)(*((_BYTE *)a11 + 44) != 0),
                v35,
                v34,
                v33,
                (__int64)v37,
                v29);
        v13 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1EDu);
        }
        else
        {
          *a12 = v12;
          v12 = 0LL;
        }
      }
    }
  }
LABEL_21:
  if ( v28 )
    CMILPoolResource::Release(v28);
  if ( v29 )
    CMILRefCountBase::Release(v29);
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return v13;
}
