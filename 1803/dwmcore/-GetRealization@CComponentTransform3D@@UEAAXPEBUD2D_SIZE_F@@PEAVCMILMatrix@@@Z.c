/*
 * XREFs of ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18002B640
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3958 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801C7284 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x1801C7318 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm8_4
  float v6; // xmm7_4
  __int128 v7; // xmm1
  char v8; // si
  __int128 v9; // xmm3
  __int128 v10; // xmm0
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  float v20; // [rsp+28h] [rbp-39h] BYREF
  int v21; // [rsp+2Ch] [rbp-35h]
  int v22; // [rsp+30h] [rbp-31h]
  int v23; // [rsp+34h] [rbp-2Dh]
  _BYTE v24[64]; // [rsp+38h] [rbp-29h] BYREF
  int v25; // [rsp+78h] [rbp+17h]

  v5 = 0.0;
  v6 = 0.0;
  if ( a2 )
  {
    v5 = *((float *)this + 38) * a2->width;
    v6 = *((float *)this + 39) * a2->height;
  }
  v7 = *(_OWORD *)((char *)this + 264);
  v8 = 0;
  v9 = *(_OWORD *)((char *)this + 232);
  v10 = *(_OWORD *)((char *)this + 248);
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 216);
  *((_OWORD *)a3 + 1) = v9;
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v7;
  *((_DWORD *)a3 + 16) = 0;
  v11 = *((float *)this + 40);
  if ( v11 != 0.0 || *((float *)this + 41) != 0.0 || *((float *)this + 42) != 0.0 || v5 != 0.0 || v6 != 0.0 )
  {
    CMILMatrix::Translate(
      a3,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 + v5) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 + *((float *)this + 41)) ^ _xmm),
      COERCE_FLOAT(*((_DWORD *)this + 42) ^ _xmm));
    v8 = 1;
  }
  v12 = *((float *)this + 46);
  if ( v12 != 1.0 || *((float *)this + 47) != 1.0 || *((float *)this + 48) != 1.0 )
    CMILMatrix::Scale(a3, v12, *((float *)this + 47), *((float *)this + 48));
  v13 = *((float *)this + 53);
  if ( v13 != 0.0 )
  {
    v15 = *((float *)this + 43);
    v16 = *((_DWORD *)this + 44);
    v25 = 0;
    v20 = v15;
    v22 = *((_DWORD *)this + 45);
    v21 = v16;
    CMILMatrix::SetRotation((CMILMatrix *)v24, (const struct Windows::Foundation::Numerics::float3 *)&v20, v13);
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v24);
  }
  v14 = *((float *)this + 49);
  if ( v14 != 0.0 || *((float *)this + 50) != 0.0 || *((float *)this + 51) != 0.0 || *((float *)this + 52) != 1.0 )
  {
    v17 = *((_DWORD *)this + 50);
    v25 = 0;
    v21 = v17;
    v18 = *((_DWORD *)this + 52);
    v20 = v14;
    v19 = *((_DWORD *)this + 51);
    v23 = v18;
    v22 = v19;
    CMILMatrix::SetRotation((CMILMatrix *)v24, (const struct Windows::Foundation::Numerics::quaternion *)&v20);
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v24);
  }
  if ( v8 )
    CMILMatrix::Translate(a3, *((float *)this + 40), *((float *)this + 41), *((float *)this + 42));
}
