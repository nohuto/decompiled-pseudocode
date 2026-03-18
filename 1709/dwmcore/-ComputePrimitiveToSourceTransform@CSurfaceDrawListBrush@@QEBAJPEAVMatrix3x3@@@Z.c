/*
 * XREFs of ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x180155AFC
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180187D00 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180048234 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B37C8 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::ComputePrimitiveToSourceTransform(
        CSurfaceDrawListBrush *this,
        struct Matrix3x3 *a2)
{
  __int64 v4; // rdx
  float Float; // xmm1_4
  float *v6; // rax
  float *v7; // rax
  __int128 Float_low; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v10[20]; // [rsp+30h] [rbp-19h]
  int v11; // [rsp+48h] [rbp-1h] BYREF
  int v12; // [rsp+4Ch] [rbp+3h]
  float v13[9]; // [rsp+50h] [rbp+7h] BYREF
  float v14[11]; // [rsp+74h] [rbp+2Bh] BYREF

  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 28);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 44);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 15);
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    if ( *((_DWORD *)this + 6) == 2 )
    {
      CDrawListBitmap::GetSize((CSurfaceDrawListBrush *)((char *)this + 144), &v11);
      *(_QWORD *)((char *)&Float_low + 4) = 0LL;
      HIDWORD(Float_low) = 0;
      *(_DWORD *)&v10[4] = 0;
      *(float *)&Float_low = (float)v11;
      *(float *)v10 = (float)v12;
      *(float *)&v10[8] = 0.0 - (float)((float)v11 * 0.0);
      *(float *)&v10[16] = FLOAT_1_0;
      *(float *)&v10[12] = 0.0 - (float)((float)v12 * 0.0);
      v6 = Matrix3x3::operator*((float *)a2, v13, (float *)this + 17);
      v7 = Matrix3x3::operator*(v6, v14, (float *)&Float_low);
      *(_OWORD *)a2 = *(_OWORD *)v7;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v7 + 1);
      *((float *)a2 + 8) = v7[8];
    }
  }
  else
  {
    Float = FInf._Float;
    Float_low = LODWORD(FInf._Float);
    *(_OWORD *)&v10[4] = _xmm;
    *(_OWORD *)v4 = LODWORD(FInf._Float);
    *(float *)v10 = Float;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)v10;
    *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)_xmm, 12));
  }
  return 0LL;
}
