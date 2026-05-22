/*
 * XREFs of ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F088
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003CF7C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     sqrtf_0 @ 0x1800E3205 (sqrtf_0.c)
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
  __int128 v15; // xmm0
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  char v20; // [rsp+28h] [rbp-E0h] BYREF
  float v21; // [rsp+568h] [rbp+460h]
  float v22; // [rsp+56Ch] [rbp+464h]
  float v23; // [rsp+570h] [rbp+468h]
  float v24; // [rsp+578h] [rbp+470h]
  float v25; // [rsp+57Ch] [rbp+474h]
  float v26; // [rsp+580h] [rbp+478h]
  float v27; // [rsp+588h] [rbp+480h]
  float v28; // [rsp+58Ch] [rbp+484h]
  float v29; // [rsp+590h] [rbp+488h]
  float v30; // [rsp+598h] [rbp+490h]
  float v31; // [rsp+59Ch] [rbp+494h]
  float v32; // [rsp+5A0h] [rbp+498h]

  v2 = *((float *)this + 27);
  v3 = *((float *)this + 29);
  v4 = *((float *)this + 28);
  Instance = MPCHolographicInputManager::GetInstance();
  v6 = 15LL;
  v7 = &v20;
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
  v15 = *(_OWORD *)Instance;
  v16 = *((_QWORD *)Instance + 2);
  *(_OWORD *)v7 = v15;
  *((_QWORD *)v7 + 2) = v16;
  v17 = (float)((float)(v4 * v24) + (float)(v2 * v21)) + (float)(v3 * v27);
  v18 = (float)((float)((float)((float)(v2 * v22) + (float)(v25 * v4)) + (float)(v3 * v28)) + v31)
      - *((float *)this + 695);
  v19 = (float)((float)((float)((float)(v2 * v23) + (float)(v26 * v4)) + (float)(v3 * v29)) + v32)
      - *((float *)this + 696);
  *((float *)this + 677) = sqrtf_0(
                             (float)((float)(v18 * v18)
                                   + (float)((float)((float)(v17 + v30) - *((float *)this + 694))
                                           * (float)((float)(v17 + v30) - *((float *)this + 694))))
                           + (float)(v19 * v19));
}
