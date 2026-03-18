/*
 * XREFs of ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18017E764
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801BD2E4 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18008CA28 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BDF98 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::ComputeLocalToSourceTransform(
        CSurfaceDrawListBrush *this,
        struct Matrix3x3 *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  float v7; // xmm3_4
  float v8; // xmm4_4
  float *v9; // rax
  float *v10; // rax
  int v12; // [rsp+20h] [rbp-29h] BYREF
  float v13[8]; // [rsp+28h] [rbp-21h] BYREF
  float v14; // [rsp+48h] [rbp-1h]
  float v15[9]; // [rsp+50h] [rbp+7h] BYREF
  float v16[11]; // [rsp+74h] [rbp+2Bh] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = v4;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 4) = v5;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 8) = 1065353216;
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    CDrawListBitmap::GetSize((CSurfaceDrawListBrush *)((char *)this + 56), &v12);
    v7 = (float)v12;
    if ( IsEmpty((const struct D2D_RECT_F *)this + 5) )
    {
      v13[1] = 0.0;
      v13[2] = 0.0;
      v13[3] = 0.0;
      v13[5] = 0.0;
      v13[0] = v7;
      v13[4] = v8;
      v13[6] = 0.0 - (float)(v7 * 0.0);
      v14 = FLOAT_1_0;
      v13[7] = 0.0 - (float)(v8 * 0.0);
      v9 = Matrix3x3::operator*((float *)a2, v15, (float *)this + 25);
      v10 = Matrix3x3::operator*(v9, v16, v13);
      *(_OWORD *)a2 = *(_OWORD *)v10;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v10 + 1);
      *((float *)a2 + 8) = v10[8];
    }
  }
  else
  {
    v14 = FLOAT_1_0;
    *(_OWORD *)v6 = _xmm;
    *(_OWORD *)(v6 + 16) = _xmm;
    *(float *)(v6 + 32) = FLOAT_1_0;
  }
  return 0LL;
}
