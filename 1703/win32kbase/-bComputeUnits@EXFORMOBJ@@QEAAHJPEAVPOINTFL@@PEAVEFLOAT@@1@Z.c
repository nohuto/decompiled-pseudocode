/*
 * XREFs of ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00E8B80
 * Callers:
 *     <none>
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C00215F0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0021908 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C0021970 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 *     efSin @ 0x1C008C380 (efSin.c)
 */

__int64 __fastcall EXFORMOBJ::bComputeUnits(
        __m128 **this,
        int a2,
        struct POINTFL *a3,
        struct EFLOAT *a4,
        struct EFLOAT *a5)
{
  unsigned int v5; // ebx
  int v8; // r10d
  int v10; // r14d
  float *v11; // r8
  __int32 v12; // esi
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  char v16; // dl
  float v17; // xmm4_4
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  float *v20; // rax
  float v22[8]; // [rsp+20h] [rbp-40h] BYREF
  int v23; // [rsp+90h] [rbp+30h] BYREF
  float v24; // [rsp+98h] [rbp+38h] BYREF

  v5 = 0;
  v8 = a2;
  v10 = 0;
  if ( a2 < 0 )
  {
    v8 = -a2;
    v10 = 1;
  }
  v11 = (float *)*this;
  v12 = (*this)[2].m128_i32[0];
  if ( (v12 & 1) != 0 && v8 == 900 * (v8 / 900) )
  {
    if ( ((v8 / 900) & 1) != 0 )
    {
      v13 = v11[3];
      v14 = 0.0;
      v22[0] = 0.0;
      v15 = FLOAT_1_0;
      v22[1] = FLOAT_1_0;
    }
    else
    {
      v13 = *v11;
      v15 = 0.0;
      v14 = FLOAT_1_0;
      *(_QWORD *)v22 = LODWORD(FLOAT_1_0);
    }
    v24 = v13;
    if ( EFLOAT::bIsZero((EFLOAT *)&v24) )
      return v5;
    if ( (v16 & 2) != 0 )
      LODWORD(v13) ^= _xmm;
    if ( v17 <= v13 )
      goto LABEL_18;
    LODWORD(v22[0]) = LODWORD(v14) ^ _xmm;
    LODWORD(v13) ^= _xmm;
    LODWORD(v15) ^= _xmm;
  }
  else
  {
    v18 = (__m128i)(unsigned int)FP_90_0;
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)v8);
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 / 10.0;
    *(float *)v18.m128i_i32 = *(float *)&FP_90_0 + *(float *)v19.m128i_i32;
    LODWORD(v22[0]) = efSin(_mm_cvtsi128_si32(v18));
    LODWORD(v22[1]) = efSin(_mm_cvtsi128_si32(v19));
    if ( (v12 & 2) == 0 && !(unsigned int)EXFORMOBJ::bXform(this, (struct VECTORFL *)v22, (struct VECTORFL *)v22, 1LL) )
      return v5;
    EFLOAT::eqLength((EFLOAT *)&v24, &v23, v22);
    if ( EFLOAT::bIsZero((EFLOAT *)&v24) )
      return v5;
    v15 = v22[1] / v24;
    v13 = v24 * 16.0;
    v22[0] = v22[0] / v24;
  }
  v22[1] = v15;
LABEL_18:
  if ( v10 )
    LODWORD(v22[1]) = LODWORD(v15) ^ _xmm;
  v20 = (float *)a5;
  *(_QWORD *)a3 = *(_QWORD *)v22;
  *(float *)a4 = v13;
  if ( v20 )
    *v20 = 1.0 / v13;
  return 1;
}
