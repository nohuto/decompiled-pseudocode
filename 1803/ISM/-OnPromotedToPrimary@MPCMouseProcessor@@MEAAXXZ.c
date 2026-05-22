/*
 * XREFs of ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x180099070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800578D0 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

void __fastcall MPCMouseProcessor::OnPromotedToPrimary(MPCMouseProcessor *this)
{
  __int64 v2; // rax
  _OWORD *v3; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  float v15; // xmm3_4
  __m128 v16; // xmm5
  __m128 v17; // xmm6
  float v18; // xmm4_4
  __m128 v19; // xmm2
  char v20; // [rsp+38h] [rbp-D0h] BYREF
  float v21; // [rsp+578h] [rbp+470h]
  float v22; // [rsp+57Ch] [rbp+474h]
  float v23; // [rsp+580h] [rbp+478h]
  float v24; // [rsp+588h] [rbp+480h]
  float v25; // [rsp+58Ch] [rbp+484h]
  float v26; // [rsp+590h] [rbp+488h]
  float v27; // [rsp+598h] [rbp+490h]
  float v28; // [rsp+59Ch] [rbp+494h]
  float v29; // [rsp+5A0h] [rbp+498h]
  float v30; // [rsp+5A8h] [rbp+4A0h]
  float v31; // [rsp+5ACh] [rbp+4A4h]
  float v32; // [rsp+5B0h] [rbp+4A8h]

  MPCHolographicInputManager::GetInstance();
  *(_QWORD *)((char *)this + 3356) = *(_QWORD *)(v2 + 176);
  *((_DWORD *)this + 841) = *(_DWORD *)(v2 + 184);
  MPCHolographicInputManager::GetInstance();
  v4 = 15LL;
  v5 = &v20;
  do
  {
    v6 = v3[1];
    *(_OWORD *)v5 = *v3;
    v7 = v3[2];
    *((_OWORD *)v5 + 1) = v6;
    v8 = v3[3];
    *((_OWORD *)v5 + 2) = v7;
    v9 = v3[4];
    *((_OWORD *)v5 + 3) = v8;
    v10 = v3[5];
    *((_OWORD *)v5 + 4) = v9;
    v11 = v3[6];
    *((_OWORD *)v5 + 5) = v10;
    v12 = v3[7];
    v3 += 8;
    *((_OWORD *)v5 + 6) = v11;
    v5 += 128;
    *((_OWORD *)v5 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *v3;
  v14 = *((_QWORD *)v3 + 2);
  v15 = *((float *)this + 840);
  v16 = (__m128)*((unsigned int *)this + 839);
  v17 = (__m128)LODWORD(v15);
  v18 = *((float *)this + 841);
  v19 = v16;
  *(_OWORD *)v5 = v13;
  *((_QWORD *)v5 + 2) = v14;
  v17.m128_f32[0] = (float)((float)((float)(v15 * v24) + (float)(v16.m128_f32[0] * v21)) + (float)(v18 * v27)) + v30;
  v19.m128_f32[0] = (float)((float)((float)(v16.m128_f32[0] * v22) + (float)(v15 * v25)) + (float)(v18 * v28)) + v31;
  v16.m128_f32[0] = (float)((float)((float)(v16.m128_f32[0] * v23) + (float)(v15 * v26)) + (float)(v18 * v29)) + v32;
  *((_QWORD *)this + 421) = _mm_unpacklo_ps(v17, v19).m128_u64[0];
  *((_DWORD *)this + 844) = v16.m128_i32[0];
  *(_QWORD *)((char *)this + 3380) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 847) = 0;
  RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 376));
  *((_DWORD *)this + 855) = 1;
}
