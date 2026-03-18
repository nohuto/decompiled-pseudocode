/*
 * XREFs of ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1801EE334
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801F08E8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x1801E863C (-SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::CalcTextureTransform(
        CHwBitmapColorSource *this,
        const struct MILMatrix3x2 *a2,
        const struct BitmapToXSpaceTransform *a3)
{
  int v3; // r9d
  int v5; // ecx
  unsigned int v6; // edi
  int v8; // edx
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm6_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // ecx
  float v21; // xmm1_4
  float v23[6]; // [rsp+48h] [rbp-19h] BYREF
  float v24[6]; // [rsp+60h] [rbp-1h] BYREF
  float v25; // [rsp+78h] [rbp+17h] BYREF
  float v26; // [rsp+7Ch] [rbp+1Bh]
  float v27; // [rsp+80h] [rbp+1Fh]
  float v28; // [rsp+84h] [rbp+23h]
  float v29; // [rsp+88h] [rbp+27h]
  float v30; // [rsp+8Ch] [rbp+2Bh]

  v3 = *((_DWORD *)this + 56);
  v5 = *((_DWORD *)this + 57);
  v6 = 0;
  v8 = *((_DWORD *)this + 32);
  if ( (unsigned int)(*((_DWORD *)this + 82) - 1) <= 1 )
    v3 = *((_DWORD *)this + 34) - v8;
  if ( (unsigned int)(*((_DWORD *)this + 83) - 1) <= 1 )
    v5 = *((_DWORD *)this + 35) - *((_DWORD *)this + 33);
  v24[1] = 0.0;
  v24[2] = 0.0;
  v24[0] = (float)v3;
  v9 = *((_DWORD *)this + 33);
  v24[3] = (float)v5;
  v10 = (float)v9;
  v11 = (float)*((int *)this + 36);
  v12 = *((_DWORD *)this + 38);
  v24[5] = v10;
  v13 = (float)v12;
  v14 = *((_DWORD *)this + 37);
  v24[4] = (float)v8;
  v15 = v11 / v13;
  v16 = (float)v14 / (float)*((int *)this + 39);
  v23[0] = v15 * *(float *)a3;
  v17 = v16 * *((float *)a3 + 4);
  v23[1] = v15 * *((float *)a3 + 1);
  v18 = v16 * *((float *)a3 + 5);
  v23[2] = v17;
  v19 = *((float *)a3 + 13);
  v23[3] = v18;
  v23[4] = *((float *)a3 + 12);
  v23[5] = v19;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v25,
    (const struct D2D1::Matrix3x2F *)v24,
    (const struct D2D1::Matrix3x2F *)v23);
  if ( MILMatrix3x2::SetInverse((CHwBitmapColorSource *)((char *)this + 44), v25, v26, v27, v28, v29, v30) )
  {
    v20 = *((_DWORD *)this + 32);
    v26 = 0.0;
    v27 = 0.0;
    v25 = v15;
    v21 = (float)*((int *)this + 33);
    v28 = v16;
    v29 = (float)v20;
    v30 = v21;
    D2D1::Matrix3x2F::SetProduct((CHwBitmapColorSource *)((char *)this + 68), (const struct D2D1::Matrix3x2F *)&v25, a2);
  }
  else
  {
    v6 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x803u);
  }
  return v6;
}
