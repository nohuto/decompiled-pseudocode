/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004B2C0
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004A9F0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180036C48 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v5; // rdi
  _OWORD *v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  float v24; // eax
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  float v29; // eax
  __m128 v30; // xmm2
  __m128 v31; // xmm2
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  bool v34; // zf
  struct MPCHolographicInputManager *v35; // rax
  struct MPCHolographicInputManager *v36; // rax
  _OWORD *v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm1
  float v46; // xmm3_4
  __m128 v47; // xmm5
  __m128 v48; // xmm6
  float v49; // xmm4_4
  __m128 v50; // xmm2
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  float v56; // [rsp+30h] [rbp-D8h]
  float v57[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v58[1520]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v59; // [rsp+668h] [rbp+560h]
  __int128 v60; // [rsp+678h] [rbp+570h]
  __int128 v61; // [rsp+688h] [rbp+580h]
  float v62[372]; // [rsp+698h] [rbp+590h]
  _OWORD v63[4]; // [rsp+C68h] [rbp+B60h] BYREF

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = 23LL;
  v6 = v58;
  v7 = 23LL;
  do
  {
    v8 = *((_OWORD *)Instance + 1);
    *v6 = *(_OWORD *)Instance;
    v9 = *((_OWORD *)Instance + 2);
    v6[1] = v8;
    v10 = *((_OWORD *)Instance + 3);
    v6[2] = v9;
    v11 = *((_OWORD *)Instance + 4);
    v6[3] = v10;
    v12 = *((_OWORD *)Instance + 5);
    v6[4] = v11;
    v13 = *((_OWORD *)Instance + 6);
    v6[5] = v12;
    v14 = *((_OWORD *)Instance + 7);
    Instance = (struct MPCHolographicInputManager *)((char *)Instance + 128);
    v6[6] = v13;
    v6 += 8;
    *(v6 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = *((_OWORD *)Instance + 1);
  *v6 = *(_OWORD *)Instance;
  v16 = *((_OWORD *)Instance + 2);
  v6[1] = v15;
  v17 = *((_OWORD *)Instance + 3);
  v6[2] = v16;
  v18 = *((_OWORD *)Instance + 4);
  v6[3] = v17;
  v19 = *((_OWORD *)Instance + 5);
  v6[4] = v18;
  v20 = *((_OWORD *)Instance + 6);
  v6[5] = v19;
  v6[6] = v20;
  v63[0] = v59;
  v63[1] = v60;
  v63[2] = v61;
  v63[3] = *(_OWORD *)v62;
  MPCMath::OrientToGravity((__int64)v57, (__int64)v63, 0.89999998);
  v21 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 174));
  v21.m128_f32[0] = v21.m128_f32[0] * *((float *)this + 169);
  v22 = v21;
  v23 = v21;
  v22.m128_f32[0] = (float)(v21.m128_f32[0] * v57[0]) + *((float *)this + 182);
  v23.m128_f32[0] = (float)(v21.m128_f32[0] * v57[1]) + *((float *)this + 183);
  v24 = (float)(v21.m128_f32[0] * v57[2]) + *((float *)this + 184);
  *((_QWORD *)this + 91) = _mm_unpacklo_ps(v22, v23).m128_u64[0];
  *((float *)this + 184) = v24;
  v25 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 175));
  v25.m128_f32[0] = v25.m128_f32[0] * *((float *)this + 169);
  v26 = _mm_xor_ps(v25, (__m128)_xmm);
  v27 = v26;
  v28 = v26;
  v27.m128_f32[0] = (float)(v26.m128_f32[0] * v57[4]) + *((float *)this + 182);
  v28.m128_f32[0] = (float)(v26.m128_f32[0] * v57[5]) + *((float *)this + 183);
  v29 = (float)(v26.m128_f32[0] * v57[6]) + *((float *)this + 184);
  *((_QWORD *)this + 91) = _mm_unpacklo_ps(v27, v28).m128_u64[0];
  *((float *)this + 184) = v29;
  v30 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 176));
  v30.m128_f32[0] = v30.m128_f32[0] * *((float *)this + 170);
  v31 = _mm_xor_ps(v30, (__m128)_xmm);
  v32 = v31;
  v33 = v31;
  v32.m128_f32[0] = (float)(v31.m128_f32[0] * v57[8]) + *((float *)this + 182);
  v33.m128_f32[0] = (float)(v31.m128_f32[0] * v57[9]) + *((float *)this + 183);
  v56 = (float)(v31.m128_f32[0] * v57[10]) + *((float *)this + 184);
  *((_QWORD *)this + 91) = _mm_unpacklo_ps(v32, v33).m128_u64[0];
  *((float *)this + 184) = v56;
  v31.m128_i32[0] = *((_DWORD *)this + 169);
  v34 = (*((_BYTE *)this + 712) & 0x70) == 0;
  v33.m128_f32[0] = (float)*((int *)this + 175);
  *((float *)this + 185) = (float)((float)*((int *)this + 174) * v31.m128_f32[0]) + *((float *)this + 185);
  v32.m128_f32[0] = *((float *)this + 186) - (float)(v33.m128_f32[0] * v31.m128_f32[0]);
  v33.m128_f32[0] = (float)*((int *)this + 176);
  *((_DWORD *)this + 186) = v32.m128_i32[0];
  *((float *)this + 187) = (float)(v33.m128_f32[0] * *((float *)this + 170)) + *((float *)this + 187);
  if ( !v34 && !*((_QWORD *)this + 70) )
  {
    v35 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 716) = *((_QWORD *)v35 + 22);
    *((_DWORD *)this + 181) = *((_DWORD *)v35 + 46);
    v36 = MPCHolographicInputManager::GetInstance();
    v37 = v58;
    do
    {
      v38 = *((_OWORD *)v36 + 1);
      *v37 = *(_OWORD *)v36;
      v39 = *((_OWORD *)v36 + 2);
      v37[1] = v38;
      v40 = *((_OWORD *)v36 + 3);
      v37[2] = v39;
      v41 = *((_OWORD *)v36 + 4);
      v37[3] = v40;
      v42 = *((_OWORD *)v36 + 5);
      v37[4] = v41;
      v43 = *((_OWORD *)v36 + 6);
      v37[5] = v42;
      v44 = *((_OWORD *)v36 + 7);
      v36 = (struct MPCHolographicInputManager *)((char *)v36 + 128);
      v37[6] = v43;
      v37 += 8;
      *(v37 - 1) = v44;
      --v5;
    }
    while ( v5 );
    v45 = *((_OWORD *)v36 + 1);
    v46 = *((float *)this + 180);
    v47 = (__m128)*((unsigned int *)this + 179);
    v48 = (__m128)LODWORD(v46);
    v49 = *((float *)this + 181);
    v50 = v47;
    *v37 = *(_OWORD *)v36;
    v51 = *((_OWORD *)v36 + 2);
    v37[1] = v45;
    v52 = *((_OWORD *)v36 + 3);
    v37[2] = v51;
    v53 = *((_OWORD *)v36 + 4);
    v37[3] = v52;
    v54 = *((_OWORD *)v36 + 5);
    v37[4] = v53;
    v55 = *((_OWORD *)v36 + 6);
    v37[5] = v54;
    v37[6] = v55;
    v48.m128_f32[0] = (float)((float)((float)(v46 * *(float *)&v60) + (float)(v47.m128_f32[0] * *(float *)&v59))
                            + (float)(v49 * *(float *)&v61))
                    + v62[0];
    v50.m128_f32[0] = (float)((float)((float)(v47.m128_f32[0] * *((float *)&v59 + 1))
                                    + (float)(v46 * *((float *)&v60 + 1)))
                            + (float)(v49 * *((float *)&v61 + 1)))
                    + v62[1];
    v47.m128_f32[0] = (float)((float)((float)(v47.m128_f32[0] * *((float *)&v59 + 2))
                                    + (float)(v46 * *((float *)&v60 + 2)))
                            + (float)(v49 * *((float *)&v61 + 2)))
                    + v62[2];
    *((_QWORD *)this + 91) = _mm_unpacklo_ps(v48, v50).m128_u64[0];
    *((_DWORD *)this + 184) = v47.m128_i32[0];
    *(_QWORD *)((char *)this + 740) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 187) = 0;
  }
}
