/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x1801C6FA0
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801D46A0 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800171F8 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x18001C764 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x1800C60C4 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::float2 **a4,
        const struct Windows::Foundation::Numerics::float2 *a5,
        const struct Windows::Foundation::Numerics::float2 *a6)
{
  __int128 *v8; // rax
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  int v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+34h] [rbp-D4h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh]
  _QWORD v15[3]; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+5Ch] [rbp-ACh]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  int v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+74h] [rbp-94h]
  const struct Windows::Foundation::Numerics::float2 *v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+80h] [rbp-88h]
  int v23; // [rsp+84h] [rbp-84h]
  _OWORD v24[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v25[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v26[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v27[80]; // [rsp+148h] [rbp+40h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v28; // [rsp+1C8h] [rbp+C0h]

  v14 = 0;
  v12 = 1065353216;
  v13 = *(_QWORD *)a5;
  v11 = *(_QWORD *)a2;
  Windows::Foundation::Numerics::make_float4x4_scale((__int64)v25, (float *)&v11, (float *)&v13);
  v12 = 0;
  v11 = *(_QWORD *)a6;
  Windows::Foundation::Numerics::make_float4x4_rotation_z((__int64)v24, a3, (float *)&v11);
  v28 = *a4;
  v20 = 0;
  v22 = 0;
  v21 = v28;
  HIDWORD(v15[0]) = 1065353216;
  v15[1] = 0LL;
  v15[2] = 0LL;
  v16 = 1065353216;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 1065353216;
  v23 = 1065353216;
  v8 = Windows::Foundation::Numerics::operator*((__int64)v26, v25, v24);
  v9 = Windows::Foundation::Numerics::operator*((__int64)v27, v8, (_QWORD *)((char *)v15 + 4));
  *(_OWORD *)this = *v9;
  *((_OWORD *)this + 1) = v9[1];
  *((_OWORD *)this + 2) = v9[2];
  v10 = v9[3];
  *((_WORD *)this + 32) = 0x4000;
  *((_OWORD *)this + 3) = v10;
}
