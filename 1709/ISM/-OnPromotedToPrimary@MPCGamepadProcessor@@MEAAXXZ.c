/*
 * XREFs of ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x180038DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCGamepadProcessor::OnPromotedToPrimary(MPCGamepadProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  float v14; // xmm3_4
  __m128 v15; // xmm5
  __m128 v16; // xmm6
  float v17; // xmm4_4
  __m128 v18; // xmm2
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  float v25; // [rsp+628h] [rbp+520h]
  float v26; // [rsp+62Ch] [rbp+524h]
  float v27; // [rsp+630h] [rbp+528h]
  float v28; // [rsp+638h] [rbp+530h]
  float v29; // [rsp+63Ch] [rbp+534h]
  float v30; // [rsp+640h] [rbp+538h]
  float v31; // [rsp+648h] [rbp+540h]
  float v32; // [rsp+64Ch] [rbp+544h]
  float v33; // [rsp+650h] [rbp+548h]
  float v34; // [rsp+658h] [rbp+550h]
  float v35; // [rsp+65Ch] [rbp+554h]
  float v36; // [rsp+660h] [rbp+558h]

  Instance = MPCHolographicInputManager::GetInstance();
  *(_QWORD *)((char *)this + 3932) = *((_QWORD *)Instance + 22);
  *((_DWORD *)this + 985) = *((_DWORD *)Instance + 46);
  v3 = MPCHolographicInputManager::GetInstance();
  v4 = 23LL;
  v5 = &v24;
  do
  {
    v6 = *((_OWORD *)v3 + 1);
    *(_OWORD *)v5 = *(_OWORD *)v3;
    v7 = *((_OWORD *)v3 + 2);
    *((_OWORD *)v5 + 1) = v6;
    v8 = *((_OWORD *)v3 + 3);
    *((_OWORD *)v5 + 2) = v7;
    v9 = *((_OWORD *)v3 + 4);
    *((_OWORD *)v5 + 3) = v8;
    v10 = *((_OWORD *)v3 + 5);
    *((_OWORD *)v5 + 4) = v9;
    v11 = *((_OWORD *)v3 + 6);
    *((_OWORD *)v5 + 5) = v10;
    v12 = *((_OWORD *)v3 + 7);
    v3 = (struct MPCHolographicInputManager *)((char *)v3 + 128);
    *((_OWORD *)v5 + 6) = v11;
    v5 += 128;
    *((_OWORD *)v5 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *((_OWORD *)v3 + 1);
  v14 = *((float *)this + 984);
  v15 = (__m128)*((unsigned int *)this + 983);
  v16 = (__m128)LODWORD(v14);
  v17 = *((float *)this + 985);
  v18 = v15;
  *(_OWORD *)v5 = *(_OWORD *)v3;
  v19 = *((_OWORD *)v3 + 2);
  *((_OWORD *)v5 + 1) = v13;
  v20 = *((_OWORD *)v3 + 3);
  *((_OWORD *)v5 + 2) = v19;
  v21 = *((_OWORD *)v3 + 4);
  *((_OWORD *)v5 + 3) = v20;
  v22 = *((_OWORD *)v3 + 5);
  *((_OWORD *)v5 + 4) = v21;
  v23 = *((_OWORD *)v3 + 6);
  *((_OWORD *)v5 + 5) = v22;
  *((_OWORD *)v5 + 6) = v23;
  v16.m128_f32[0] = (float)((float)((float)(v14 * v28) + (float)(v15.m128_f32[0] * v25)) + (float)(v17 * v31)) + v34;
  v18.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * v26) + (float)(v14 * v29)) + (float)(v17 * v32)) + v35;
  v15.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * v27) + (float)(v14 * v30)) + (float)(v17 * v33)) + v36;
  *((_QWORD *)this + 493) = _mm_unpacklo_ps(v16, v18).m128_u64[0];
  *((_DWORD *)this + 988) = v15.m128_i32[0];
  *((_QWORD *)this + 496) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 994) = 0;
}
