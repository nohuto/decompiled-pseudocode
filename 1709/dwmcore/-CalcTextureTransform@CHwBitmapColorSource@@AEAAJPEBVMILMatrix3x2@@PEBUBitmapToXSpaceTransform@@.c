/*
 * XREFs of ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1800851A0
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801B6348 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18006B01C (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x18006B238 (-SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::CalcTextureTransform(
        CHwBitmapColorSource *this,
        const struct MILMatrix3x2 *a2,
        const struct BitmapToXSpaceTransform *a3)
{
  int v3; // r9d
  int v5; // ecx
  unsigned int v6; // edi
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm6_4
  int v13; // eax
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  int v19; // ecx
  float v20; // xmm1_4
  float v22[6]; // [rsp+48h] [rbp-19h] BYREF
  float v23[6]; // [rsp+60h] [rbp-1h] BYREF
  float v24; // [rsp+78h] [rbp+17h] BYREF
  float v25; // [rsp+7Ch] [rbp+1Bh]
  float v26; // [rsp+80h] [rbp+1Fh]
  float v27; // [rsp+84h] [rbp+23h]
  float v28; // [rsp+88h] [rbp+27h]
  float v29; // [rsp+8Ch] [rbp+2Bh]

  v3 = *((_DWORD *)this + 56);
  v5 = *((_DWORD *)this + 57);
  v6 = 0;
  if ( (unsigned int)(*((_DWORD *)this + 82) - 1) <= 1 )
    v3 = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
  if ( (unsigned int)(*((_DWORD *)this + 83) - 1) <= 1 )
    v5 = *((_DWORD *)this + 35) - *((_DWORD *)this + 33);
  v23[1] = 0.0;
  v23[2] = 0.0;
  v23[0] = (float)v3;
  v8 = *((_DWORD *)this + 32);
  v23[3] = (float)v5;
  v9 = (float)v8;
  v10 = *((_DWORD *)this + 33);
  v23[4] = v9;
  v11 = (float)v10;
  v12 = (float)*((int *)this + 36);
  v13 = *((_DWORD *)this + 38);
  v23[5] = v11;
  v14 = v12 / (float)v13;
  v15 = (float)*((int *)this + 37) / (float)*((int *)this + 39);
  v22[0] = v14 * *(float *)a3;
  v16 = v15 * *((float *)a3 + 4);
  v22[1] = v14 * *((float *)a3 + 1);
  v17 = v15 * *((float *)a3 + 5);
  v22[2] = v16;
  v18 = *((float *)a3 + 13);
  v22[3] = v17;
  v22[4] = *((float *)a3 + 12);
  v22[5] = v18;
  MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v24, (const struct MILMatrix3x2 *)v23, (const struct MILMatrix3x2 *)v22);
  if ( MILMatrix3x2::SetInverse((CHwBitmapColorSource *)((char *)this + 44), v24, v25, v26, v27, v28, v29) )
  {
    v19 = *((_DWORD *)this + 32);
    v25 = 0.0;
    v26 = 0.0;
    v24 = v14;
    v20 = (float)*((int *)this + 33);
    v27 = v15;
    v28 = (float)v19;
    v29 = v20;
    MILMatrix3x2::SetProduct((CHwBitmapColorSource *)((char *)this + 68), (const struct MILMatrix3x2 *)&v24, a2);
  }
  else
  {
    v6 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980007, 0x803u);
  }
  return v6;
}
