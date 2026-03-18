/*
 * XREFs of ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18009653C
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800357A0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x180097F14 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18009F7DC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::CalcMode(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  CGeometry *v7; // rcx
  unsigned int v8; // edi
  float v9; // xmm2_4
  CTransform3D *v10; // r14
  float *v11; // rax
  __int64 v12; // rdx
  float *v13; // rax
  signed int ShapeData; // eax
  CTransform3D *EffectInternal; // rdi
  float *Matrix; // rax
  __int64 v17; // rdx
  float *v19; // rax
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+38h] [rbp-20h]
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF

  result = 5LL;
  if ( a2 == 5 || !CCommonRegistryData::m_fEnableCpuClipping )
    return result;
  if ( a2 == 4 )
    return 4LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) & 0x8000000) == 0 )
    goto LABEL_5;
  EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
  if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
          EffectInternal,
          128LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
            EffectInternal,
            47LL) )
      goto LABEL_5;
    EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
  }
  if ( EffectInternal )
  {
    Matrix = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(Matrix, v17) )
      return 4LL;
    v19 = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( !CMILMatrix::IsInvertibleDeterminant((float)(v19[5] * *v19) - (float)(v19[4] * v19[1])) )
      return 4LL;
  }
LABEL_5:
  if ( a2 != 2 )
  {
    v7 = *(CGeometry **)(a1 + 232);
    if ( !v7 )
      goto LABEL_7;
    v20 = 0LL;
    v21 = 0;
    ShapeData = CGeometry::GetShapeData(v7, (const struct D2D_SIZE_F *)(a1 + 132), (struct CShapePtr *)&v20);
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0x126u);
    }
    else if ( CShapePtr::IsRectangles((CShapePtr *)&v20, &v22) && v22 <= 1 )
    {
      goto LABEL_27;
    }
    a3 = 1;
LABEL_27:
    CShapePtr::Release((CShapePtr *)&v20);
    goto LABEL_7;
  }
  a3 = 1;
LABEL_7:
  v8 = 3;
  if ( !*(_QWORD *)(a1 + 232) || a3 )
    v8 = 4;
  if ( a2 == 3 )
    return v8;
  v9 = *(float *)(a1 + 112);
  if ( (*(float *)(a1 + 116) != 0.0 || *(float *)(a1 + 120) != 0.0 || v9 != 0.0) && v9 != 0.0 )
    return v8;
  v10 = *(CTransform3D **)(a1 + 224);
  if ( v10 )
  {
    v11 = (float *)CTransform3D::GetMatrix(*(CTransform3D **)(a1 + 224), (const struct D2D_SIZE_F *)(a1 + 132));
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(v11, v12) )
      return v8;
    v13 = (float *)CTransform3D::GetMatrix(v10, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( !CMILMatrix::IsInvertibleDeterminant((float)(v13[5] * *v13) - (float)(v13[4] * v13[1])) )
      return v8;
  }
  if ( a2 == 2 )
    return 2LL;
  return (unsigned int)(a3 != 0) + 1;
}
