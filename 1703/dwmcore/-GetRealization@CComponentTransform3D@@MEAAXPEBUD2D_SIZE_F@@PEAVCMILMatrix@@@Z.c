/*
 * XREFs of ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18002B4C0
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18009AB60 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180132F88 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x180186658 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm4_4
  float v6; // xmm2_4
  char v7; // si
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  float v16; // [rsp+28h] [rbp-19h] BYREF
  int v17; // [rsp+2Ch] [rbp-15h]
  int v18; // [rsp+30h] [rbp-11h]
  int v19; // [rsp+34h] [rbp-Dh]
  _BYTE v20[64]; // [rsp+38h] [rbp-9h] BYREF
  int v21; // [rsp+78h] [rbp+37h]

  v5 = 0.0;
  v6 = 0.0;
  if ( a2 )
  {
    v5 = *((float *)this + 38) * a2->width;
    v6 = *((float *)this + 39) * a2->height;
  }
  v7 = 0;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 216);
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 232);
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 248);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 264);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 70);
  v8 = *((float *)this + 40);
  if ( v8 != 0.0 || *((float *)this + 41) != 0.0 || *((float *)this + 42) != 0.0 || v5 != 0.0 || v6 != 0.0 )
  {
    CMILMatrix::Translate(
      a3,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 + v5) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 + *((float *)this + 41)) ^ _xmm),
      COERCE_FLOAT(*((_DWORD *)this + 42) ^ _xmm));
    v7 = 1;
  }
  if ( *((float *)this + 46) != 1.0 || *((float *)this + 47) != 1.0 || *((float *)this + 48) != 1.0 )
    CMILMatrix::Scale(a3, *((float *)this + 46), *((float *)this + 47), *((float *)this + 48));
  v9 = *((float *)this + 53);
  if ( v9 != 0.0 )
  {
    v11 = *((float *)this + 43);
    v12 = *((_DWORD *)this + 44);
    v21 = 0;
    v16 = v11;
    v18 = *((_DWORD *)this + 45);
    v17 = v12;
    CMILMatrix::SetRotation((CMILMatrix *)v20, (const struct Windows::Foundation::Numerics::float3 *)&v16, v9);
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v20);
  }
  v10 = *((float *)this + 49);
  if ( v10 != 0.0 || *((float *)this + 50) != 0.0 || *((float *)this + 51) != 0.0 || *((float *)this + 52) != 1.0 )
  {
    v13 = *((_DWORD *)this + 50);
    v21 = 0;
    v17 = v13;
    v14 = *((_DWORD *)this + 52);
    v16 = v10;
    v15 = *((_DWORD *)this + 51);
    v19 = v14;
    v18 = v15;
    CMILMatrix::SetRotation((CMILMatrix *)v20, (const struct Windows::Foundation::Numerics::quaternion *)&v16);
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v20);
  }
  if ( v7 )
    CMILMatrix::Translate(a3, *((float *)this + 40), *((float *)this + 41), *((float *)this + 42));
}
