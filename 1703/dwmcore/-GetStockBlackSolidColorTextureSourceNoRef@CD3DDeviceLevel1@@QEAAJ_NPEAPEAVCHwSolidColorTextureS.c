/*
 * XREFs of ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x180196C28
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18019CA10 (-Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockBlackSolidColorTextureSourceNoRef(
        CD3DDeviceLevel1 *this,
        char a2,
        struct CHwSolidColorTextureSource **a3)
{
  unsigned int v3; // edi
  __int64 v6; // r9
  char *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-28h]

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 != 0 ? 8 : 0;
  v7 = (char *)this + v6 + 856;
  if ( !*(_QWORD *)v7 )
  {
    v8 = CHwSolidColorTextureSource::Create(this, (struct CHwSolidColorTextureSource **)((char *)this + v6 + 856));
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x54Du);
      return v3;
    }
    *(_QWORD *)&v11 = 0LL;
    DWORD2(v11) = 0;
    if ( a2 )
      HIDWORD(v11) = 0;
    else
      *((float *)&v11 + 3) = FLOAT_1_0;
    v9 = *(_QWORD *)v7;
    *(_BYTE *)(v9 + 112) = 0;
    *(_OWORD *)(v9 + 116) = v11;
    if ( !a2 )
      *(_DWORD *)(*(_QWORD *)v7 + 92LL) = 1;
  }
  *a3 = *(struct CHwSolidColorTextureSource **)v7;
  return v3;
}
