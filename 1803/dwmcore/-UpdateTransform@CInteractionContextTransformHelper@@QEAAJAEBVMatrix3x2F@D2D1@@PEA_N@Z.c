/*
 * XREFs of ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x18020EB44
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801D79A0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     GetIndividualScales @ 0x18020DDF8 (GetIndividualScales.c)
 *     GetInverse @ 0x18020DEE0 (GetInverse.c)
 *     IsEqualMatrix @ 0x18020E060 (IsEqualMatrix.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::UpdateTransform(
        CInteractionContextTransformHelper *this,
        const struct D2D1::Matrix3x2F *a2,
        bool *a3)
{
  int Inverse; // r8d
  unsigned __int64 v6; // xmm1_8
  __int128 v7; // xmm0
  unsigned __int64 v8; // xmm1_8
  __int64 v9; // xmm1_8
  float v10; // xmm6_4
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __int128 v13; // xmm7
  unsigned __int64 v14; // xmm0_8
  unsigned __int64 v15; // xmm8_8
  float v16; // xmm4_4
  __int64 v17; // xmm5_8
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  unsigned __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  unsigned __int64 v25; // xmm1_8
  float v27; // [rsp+28h] [rbp-79h] BYREF
  float v28; // [rsp+2Ch] [rbp-75h] BYREF
  __int128 v29; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-61h]
  __int128 v31; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-49h]
  __int128 v33; // [rsp+68h] [rbp-39h] BYREF
  __int64 v34; // [rsp+78h] [rbp-29h]
  __int128 v35; // [rsp+80h] [rbp-21h] BYREF
  __int64 v36; // [rsp+90h] [rbp-11h]
  __int128 v37; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp+7h]

  if ( !IsEqualMatrix((float *)a2, (float *)this) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v37 = *(_OWORD *)a2;
    v38 = v6;
    Inverse = GetInverse((float *)&v37, (__int64)&v33);
    if ( Inverse >= 0 )
    {
      v7 = *(_OWORD *)a2;
      v28 = 1.0;
      v8 = *((_QWORD *)a2 + 2);
      v37 = v7;
      v27 = 1.0;
      v38 = v8;
      Inverse = GetIndividualScales((__int64)&v37, &v28, &v27);
      if ( Inverse >= 0 )
      {
        v9 = *((_QWORD *)a2 + 2);
        v37 = *(_OWORD *)a2;
        v10 = 1.0 / v28;
        v11 = (__m128)(unsigned int)v9;
        *((float *)&v37 + 2) = *((float *)&v37 + 2) * (float)(1.0 / v28);
        *(float *)&v37 = *(float *)&v37 * (float)(1.0 / v28);
        v12 = (__m128)HIDWORD(v9);
        *((float *)&v37 + 1) = *((float *)&v37 + 1) * (float)(1.0 / v27);
        v11.m128_f32[0] = *(float *)&v9 * (float)(1.0 / v28);
        *((float *)&v37 + 3) = *((float *)&v37 + 3) * (float)(1.0 / v27);
        v13 = v37;
        v12.m128_f32[0] = *((float *)&v9 + 1) * (float)(1.0 / v27);
        v14 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        v15 = v14;
        v38 = v14;
        Inverse = GetInverse((float *)&v37, (__int64)&v35);
        if ( Inverse >= 0 )
        {
          DWORD2(v37) = 0;
          *(_QWORD *)&v37 = LODWORD(v10);
          *((float *)&v37 + 3) = v16;
          v30 = v14;
          v31 = v13;
          *(float *)&v38 = 0.0 - (float)(v10 * 0.0);
          *((float *)&v38 + 1) = 0.0 - (float)(v16 * 0.0);
          v32 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          Inverse = GetInverse((float *)&v31, (__int64)&v29);
          if ( Inverse >= 0 )
          {
            *(_OWORD *)this = *(_OWORD *)a2;
            v18 = v33;
            *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
            v19 = v34;
            *(_OWORD *)((char *)this + 24) = v18;
            v20 = v35;
            *((_QWORD *)this + 5) = v19;
            v21 = v36;
            *(_OWORD *)((char *)this + 72) = v20;
            v22 = v37;
            *((_QWORD *)this + 11) = v21;
            v23 = v38;
            *((_OWORD *)this + 6) = v22;
            v24 = v29;
            *((_QWORD *)this + 14) = v23;
            v25 = v30;
            *((_OWORD *)this + 9) = v24;
            *((_OWORD *)this + 3) = v13;
            *(_OWORD *)((char *)this + 120) = v13;
            *((_QWORD *)this + 20) = v25;
            *((_QWORD *)this + 8) = v15;
            *((_QWORD *)this + 17) = v17;
          }
        }
      }
    }
  }
  return (unsigned int)Inverse;
}
