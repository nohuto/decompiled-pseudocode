/*
 * XREFs of ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801A77E0
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801B50E0 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801AF6C8 (-Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockBlackSolidColorTextureSourceNoRef(
        CD3DDeviceLevel1 *this,
        unsigned __int8 a2,
        struct CHwSolidColorTextureSource **a3)
{
  unsigned int v3; // edi
  struct CHwSolidColorTextureSource **v6; // rbx
  signed int v7; // eax
  struct CHwSolidColorTextureSource *v8; // rax
  __int128 v10; // [rsp+30h] [rbp-28h]

  v3 = 0;
  *a3 = 0LL;
  v6 = (struct CHwSolidColorTextureSource **)((char *)this + 8 * a2);
  if ( !v6[109] )
  {
    v7 = CHwSolidColorTextureSource::Create(this, v6 + 109);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x4F5u);
      return v3;
    }
    *(_QWORD *)&v10 = 0LL;
    DWORD2(v10) = 0;
    if ( a2 )
      HIDWORD(v10) = 0;
    else
      *((float *)&v10 + 3) = FLOAT_1_0;
    v8 = v6[109];
    *((_BYTE *)v8 + 120) = 0;
    *(_OWORD *)((char *)v8 + 124) = v10;
    if ( !a2 )
      *((_DWORD *)v6[109] + 23) = 1;
  }
  *a3 = v6[109];
  return v3;
}
