/*
 * XREFs of ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x180050738
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004EB20 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 */

void __fastcall MPCSixDofProcessor::ResetRayLength(MPCSixDofProcessor *this)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm8_4
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v6; // rcx
  char *v7; // rdx
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
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  char v24; // [rsp+28h] [rbp-E0h] BYREF
  float v25; // [rsp+618h] [rbp+510h]
  float v26; // [rsp+61Ch] [rbp+514h]
  float v27; // [rsp+620h] [rbp+518h]
  float v28; // [rsp+628h] [rbp+520h]
  float v29; // [rsp+62Ch] [rbp+524h]
  float v30; // [rsp+630h] [rbp+528h]
  float v31; // [rsp+638h] [rbp+530h]
  float v32; // [rsp+63Ch] [rbp+534h]
  float v33; // [rsp+640h] [rbp+538h]
  float v34; // [rsp+648h] [rbp+540h]
  float v35; // [rsp+64Ch] [rbp+544h]
  float v36; // [rsp+650h] [rbp+548h]

  v2 = *((float *)this + 29);
  v3 = *((float *)this + 30);
  v4 = *((float *)this + 31);
  Instance = MPCHolographicInputManager::GetInstance();
  v6 = 23LL;
  v7 = &v24;
  do
  {
    v8 = *((_OWORD *)Instance + 1);
    *(_OWORD *)v7 = *(_OWORD *)Instance;
    v9 = *((_OWORD *)Instance + 2);
    *((_OWORD *)v7 + 1) = v8;
    v10 = *((_OWORD *)Instance + 3);
    *((_OWORD *)v7 + 2) = v9;
    v11 = *((_OWORD *)Instance + 4);
    *((_OWORD *)v7 + 3) = v10;
    v12 = *((_OWORD *)Instance + 5);
    *((_OWORD *)v7 + 4) = v11;
    v13 = *((_OWORD *)Instance + 6);
    *((_OWORD *)v7 + 5) = v12;
    v14 = *((_OWORD *)Instance + 7);
    Instance = (struct MPCHolographicInputManager *)((char *)Instance + 128);
    *((_OWORD *)v7 + 6) = v13;
    v7 += 128;
    *((_OWORD *)v7 - 1) = v14;
    --v6;
  }
  while ( v6 );
  v15 = *((_OWORD *)Instance + 1);
  *(_OWORD *)v7 = *(_OWORD *)Instance;
  v16 = *((_OWORD *)Instance + 2);
  *((_OWORD *)v7 + 1) = v15;
  v17 = *((_OWORD *)Instance + 3);
  *((_OWORD *)v7 + 2) = v16;
  v18 = *((_OWORD *)Instance + 4);
  *((_OWORD *)v7 + 3) = v17;
  v19 = *((_OWORD *)Instance + 5);
  *((_OWORD *)v7 + 4) = v18;
  v20 = *((_OWORD *)Instance + 6);
  *((_OWORD *)v7 + 5) = v19;
  *((_OWORD *)v7 + 6) = v20;
  v21 = (float)((float)((float)((float)(v28 * v3) + (float)(v25 * v2)) + (float)(v31 * v4)) + v34)
      - *((float *)this + 1012);
  v22 = (float)((float)((float)((float)(v26 * v2) + (float)(v29 * v3)) + (float)(v32 * v4)) + v35)
      - *((float *)this + 1013);
  v23 = (float)((float)((float)((float)(v27 * v2) + (float)(v30 * v3)) + (float)(v33 * v4)) + v36)
      - *((float *)this + 1014);
  *((float *)this + 995) = sqrtf_0((float)((float)(v21 * v21) + (float)(v22 * v22)) + (float)(v23 * v23));
}
