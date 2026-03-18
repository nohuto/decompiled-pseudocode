/*
 * XREFs of ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180044DD8
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800454DC (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  float v12; // xmm11_4
  int v13; // eax
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float v22; // xmm8_4
  float v23; // xmm3_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm10_4
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm0_4
  float v32; // xmm9_4
  float v33; // xmm1_4
  float v35; // [rsp+38h] [rbp-69h] BYREF
  float v36; // [rsp+3Ch] [rbp-65h]
  float v37; // [rsp+40h] [rbp-61h]
  float v38; // [rsp+44h] [rbp-5Dh]
  float v39; // [rsp+48h] [rbp-59h]
  float v40; // [rsp+4Ch] [rbp-55h]
  float v41[6]; // [rsp+50h] [rbp-51h] BYREF
  float v42; // [rsp+68h] [rbp-39h] BYREF
  int v43; // [rsp+6Ch] [rbp-35h]
  int v44; // [rsp+70h] [rbp-31h]
  float v45; // [rsp+74h] [rbp-2Dh]
  float v46; // [rsp+78h] [rbp-29h]
  float v47; // [rsp+7Ch] [rbp-25h]

  v3 = *((_DWORD *)this + 54);
  v5 = *((_DWORD *)this + 55);
  v6 = 0;
  if ( (unsigned int)(*((_DWORD *)this + 80) - 1) <= 1 )
    v3 = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
  if ( (unsigned int)(*((_DWORD *)this + 81) - 1) <= 1 )
    v5 = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
  v43 = 0;
  v44 = 0;
  v42 = (float)v3;
  v8 = *((_DWORD *)this + 30);
  v45 = (float)v5;
  v9 = (float)v8;
  v10 = *((_DWORD *)this + 31);
  v46 = v9;
  v11 = (float)v10;
  v12 = (float)*((int *)this + 34);
  v13 = *((_DWORD *)this + 36);
  v47 = v11;
  v14 = v12 / (float)v13;
  v15 = (float)*((int *)this + 35) / (float)*((int *)this + 37);
  v41[0] = v14 * *(float *)a3;
  v16 = v15 * *((float *)a3 + 4);
  v41[1] = v14 * *((float *)a3 + 1);
  v17 = v15 * *((float *)a3 + 5);
  v41[2] = v16;
  v18 = *((float *)a3 + 13);
  v41[3] = v17;
  v41[4] = *((float *)a3 + 12);
  v41[5] = v18;
  MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v35, (const struct MILMatrix3x2 *)&v42, (const struct MILMatrix3x2 *)v41);
  v19 = v35;
  v20 = v36;
  v21 = v38;
  v22 = v37;
  v23 = (float)(v35 * v38) - (float)(v36 * v37);
  if ( v23 == 0.0 || (v24 = 1.0 / v23, !_finite((float)(1.0 / v23))) )
  {
    v6 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x806u);
  }
  else
  {
    v43 = 0;
    v44 = 0;
    v42 = v14;
    v25 = v24 * v21;
    v26 = v21 * v39;
    *((float *)this + 11) = v25;
    v27 = v24 * v22;
    v28 = v22 * v40;
    *((_DWORD *)this + 13) = LODWORD(v27) ^ _xmm;
    v29 = v24 * v20;
    v30 = v20 * v39;
    v31 = v24 * v19;
    v32 = v19 * v40;
    *((_DWORD *)this + 12) = LODWORD(v29) ^ _xmm;
    *((float *)this + 14) = v31;
    v45 = v15;
    *((float *)this + 15) = (float)(v28 - v26) * v24;
    *((float *)this + 16) = (float)(v30 - v32) * v24;
    v33 = (float)*((int *)this + 31);
    v46 = (float)*((int *)this + 30);
    v47 = v33;
    MILMatrix3x2::SetProduct((CHwBitmapColorSource *)((char *)this + 68), (const struct MILMatrix3x2 *)&v42, a2);
  }
  return v6;
}
