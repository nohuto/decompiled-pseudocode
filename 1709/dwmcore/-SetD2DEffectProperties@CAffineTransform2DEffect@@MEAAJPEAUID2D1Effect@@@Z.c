/*
 * XREFs of ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18017FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800957B0 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetD2DEffectProperties(
        CAffineTransform2DEffect *this,
        struct ID2D1Effect *a2)
{
  float v2; // xmm2_4
  float v4; // xmm3_4
  __int128 v6; // xmm0
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  __int128 v10; // xmm0
  float v11; // xmm3_4
  __m128 v12; // xmm6
  float v13; // xmm12_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm11_4
  float v17; // xmm8_4
  __m128 v18; // xmm5
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm2_4
  __int64 (__fastcall *v22)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int); // rax
  signed int v23; // eax
  unsigned int v24; // ebx
  signed int v25; // eax
  signed int v26; // eax
  signed int v27; // eax
  float v29[6]; // [rsp+38h] [rbp-79h]
  __int128 v30; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-51h]
  D2D1_MATRIX_3X2_F v32; // [rsp+68h] [rbp-49h] BYREF

  v2 = *((float *)this + 54);
  v4 = *((float *)this + 53);
  v6 = *(_OWORD *)((char *)this + 184);
  v31 = *((_QWORD *)this + 25);
  v7 = v2 * *((float *)this + 48);
  v30 = v6;
  v8 = (float)((float)(v7 + (float)(v4 * *((float *)this + 46))) + *((float *)this + 50)) - v4;
  v9 = (float)(v4 * *((float *)this + 47)) + (float)(v2 * *((float *)this + 49));
  v10 = *(_OWORD *)((char *)this + 220);
  *(float *)&v31 = v8;
  v11 = v9 + *((float *)this + 51);
  *(_QWORD *)&v32.m[2][0] = *(_QWORD *)((char *)this + 236);
  *(_OWORD *)&v32.m11 = v10;
  *((float *)&v31 + 1) = v11 - v2;
  D2D1::Matrix3x2F::Invert(&v32);
  v12 = (__m128)*((unsigned int *)this + 57);
  v13 = (float)(*(float *)&v30 * v32.m11) + (float)(*((float *)&v30 + 2) * v32.m12);
  v14 = (float)(*((float *)&v30 + 3) * v32.m12) + (float)(v32.m11 * *((float *)&v30 + 1));
  v15 = *((float *)this + 56);
  v16 = (float)(v32.m22 * *((float *)&v30 + 3)) + (float)(v32.m21 * *((float *)&v30 + 1));
  v17 = (float)(v32.m22 * *((float *)&v30 + 2)) + (float)(v32.m21 * *(float *)&v30);
  v18 = (__m128)*((unsigned int *)this + 58);
  v19 = (float)((float)(v32.dy * *((float *)&v30 + 3)) + (float)(v32.dx * *((float *)&v30 + 1))) + (float)(v11 - v2);
  v20 = (float)((float)(v32.dy * *((float *)&v30 + 2)) + (float)(v32.dx * *(float *)&v30)) + v8;
  v29[0] = (float)(*((float *)this + 57) * v14) + (float)(*((float *)this + 55) * v13);
  v29[1] = (float)(v18.m128_f32[0] * v14) + (float)(v15 * v13);
  v21 = *((float *)this + 55);
  v22 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL);
  v29[2] = (float)(v21 * v17) + (float)(v12.m128_f32[0] * v16);
  v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] * v19) + (float)(v21 * v20)) + *((float *)this + 59);
  v18.m128_f32[0] = (float)((float)(v18.m128_f32[0] * v19) + (float)(v15 * v20)) + *((float *)this + 60);
  v29[3] = (float)(v15 * v17) + (float)(*((float *)this + 58) * v16);
  v31 = _mm_unpacklo_ps(v12, v18).m128_u64[0];
  v30 = *(_OWORD *)v29;
  v23 = v22(a2, 0LL, 0LL, (char *)this + 176, 4);
  v24 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x92u);
  }
  else
  {
    v25 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
            a2,
            1LL,
            0LL,
            (char *)this + 180,
            4);
    v24 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0x93u);
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              &v30,
              24);
      v24 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x94u);
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 208,
                4);
        v24 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x95u);
      }
    }
  }
  return v24;
}
