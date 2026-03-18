/*
 * XREFs of ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180056420 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180056E58 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18007C330 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x1800B24A8 (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x180196C28 (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBitmapAndContext(
        CD3DDeviceLevel1 *this,
        CBitmap *a2,
        volatile signed __int32 *a3,
        struct MilRectF *a4,
        struct MILMatrix3x2 *a5,
        __int64 a6,
        struct BitmapToXSpaceTransform *a7,
        int a8,
        int a9,
        __int64 a10,
        struct CHwBitmapColorSource::CacheContextParameters *a11,
        struct CHwSolidColorTextureSource **a12)
{
  CHwBitmapColorSource *v12; // rsi
  unsigned int v13; // edi
  CD3DDeviceLevel1 *v15; // r13
  int v16; // ebx
  char v17; // al
  int v18; // eax
  int BitmapColorSource; // eax
  int v20; // eax
  int ValidContentStateForTargetedDisplay; // eax
  int PixelFormat; // eax
  int v24; // eax
  int StockBlackSolidColorTextureSourceNoRef; // eax
  struct CHwSolidColorTextureSource *v26; // rax
  CHwBitmapColorSource *v27; // [rsp+60h] [rbp-A0h] BYREF
  enum DXGI_FORMAT v28; // [rsp+68h] [rbp-98h] BYREF
  CD3DDeviceLevel1 *v29; // [rsp+70h] [rbp-90h]
  CMILPoolResource *v30; // [rsp+78h] [rbp-88h] BYREF
  struct CHwBitmapColorSource *v31; // [rsp+80h] [rbp-80h] BYREF
  struct MilRectF *v32; // [rsp+88h] [rbp-78h]
  struct CHwSolidColorTextureSource *v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h]
  struct BitmapToXSpaceTransform *v35; // [rsp+A0h] [rbp-60h]
  struct MILMatrix3x2 *v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  enum DXGI_FORMAT v38[17]; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+104h] [rbp+4h]

  v12 = 0LL;
  v13 = 0;
  v31 = 0LL;
  v15 = this;
  v36 = a5;
  *a12 = 0LL;
  v16 = DisplayId::None;
  v34 = a6;
  v35 = a7;
  v37 = a10;
  v32 = a4;
  v29 = this;
  v30 = (CMILPoolResource *)a3;
  v27 = 0LL;
  if ( a3 )
  {
    _InterlockedIncrement(a3 + 2);
    v12 = v27;
  }
  else
  {
    v13 = CHwBitmapCache::RetrieveFromBitmapSource(a2, this, &v30);
  }
  if ( (*(unsigned int (__fastcall **)(CBitmap *))(*(_QWORD *)a2 + 72LL))(a2) != 3 )
    goto LABEL_4;
  ValidContentStateForTargetedDisplay = CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(
                                          ((unsigned __int64)a2 - 16) & -(__int64)(a2 != 0LL),
                                          *((unsigned int *)a11 + 7));
  if ( ValidContentStateForTargetedDisplay == 2 )
  {
    v16 = *((_DWORD *)a11 + 7);
LABEL_19:
    v15 = v29;
    goto LABEL_4;
  }
  if ( ValidContentStateForTargetedDisplay )
    goto LABEL_19;
  PixelFormat = CBitmap::GetPixelFormat((CBitmap *)((((unsigned __int64)a2 - 16) & -(__int64)(a2 != 0LL)) + 16), &v28);
  v13 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x1A7u);
    goto LABEL_9;
  }
  v24 = HasAlphaChannel(v28);
  v15 = v29;
  StockBlackSolidColorTextureSourceNoRef = CD3DDeviceLevel1::GetStockBlackSolidColorTextureSourceNoRef(
                                             v29,
                                             v24 != 0,
                                             &v33);
  v13 = StockBlackSolidColorTextureSourceNoRef;
  if ( StockBlackSolidColorTextureSourceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, StockBlackSolidColorTextureSourceNoRef, 0x1B6u);
    goto LABEL_9;
  }
  v26 = v33;
  *a12 = v33;
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
    v12 = v27;
  }
LABEL_4:
  if ( !*a12 )
  {
    v17 = *((_BYTE *)a11 + 44);
    v39 = 0;
    v18 = CHwBitmapColorSource::ComputeRealizationParameters(
            (enum DXGI_FORMAT *)v15,
            a2,
            (__int64)v32,
            v34,
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 4),
            *((_DWORD *)a11 + 10),
            (enum DXGI_FORMAT)*((_DWORD *)a11 + 2),
            *((unsigned __int8 *)a11 + 12),
            a8,
            ((unsigned __int64)a11 + 48) & -(__int64)(v17 != 0),
            a9,
            v38);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1D1u);
    }
    else
    {
      v39 = v16;
      BitmapColorSource = CHwBitmapCache::GetBitmapColorSource(
                            v15,
                            a2,
                            (struct CHwBitmapColorSource::CacheParameters *)v38,
                            a11,
                            v30,
                            &v27,
                            &v31);
      v13 = BitmapColorSource;
      if ( BitmapColorSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapColorSource, 0x1E1u);
        v12 = v27;
      }
      else
      {
        v12 = v27;
        v20 = CHwBitmapColorSource::SetBitmapAndContext(
                v27,
                (__int64)a2,
                v32,
                *((_DWORD *)a11 + 8),
                ((unsigned __int64)a11 + 48) & -(__int64)(*((_BYTE *)a11 + 44) != 0),
                v37,
                v36,
                v35,
                (__int64)v38,
                v31);
        v13 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1EFu);
        }
        else
        {
          *a12 = v12;
          v12 = 0LL;
        }
      }
    }
  }
LABEL_9:
  if ( v30 )
    CMILPoolResource::Release(v30);
  if ( v31 )
    CMILRefCountBase::Release(v31);
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return v13;
}
