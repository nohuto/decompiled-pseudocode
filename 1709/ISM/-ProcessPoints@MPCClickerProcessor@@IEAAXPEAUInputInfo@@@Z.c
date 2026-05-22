/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800546A8
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800544B0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(MPCClickerProcessor *this, struct InputInfo *a2)
{
  bool v2; // zf
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v13; // rsi
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  float v23; // xmm4_4
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  float v30; // xmm1_4
  float v31; // xmm0_4
  __m128 v32; // xmm3
  float v33; // xmm0_4
  __m128 v34; // xmm2
  float v35; // eax
  float v36; // xmm1_4
  __m128 v37; // xmm0
  __m128 v38; // xmm3
  __m128 v39; // xmm2
  float v40; // eax
  float v41; // xmm1_4
  __m128 v42; // xmm0
  __m128 v43; // xmm3
  __m128 v44; // xmm2
  float v45; // eax
  float v46; // xmm1_4
  float v47; // xmm4_4
  float v48; // xmm1_4
  char v49; // cl
  struct MPCHolographicInputManager *v50; // rax
  struct MPCHolographicInputManager *v51; // rax
  _OWORD *v52; // rcx
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __m128 v66; // xmm7
  __m128 v67; // xmm5
  float v68; // xmm2_4
  __int64 v69; // [rsp+28h] [rbp-E0h]
  float v70; // [rsp+30h] [rbp-D8h]
  _BYTE v71[1520]; // [rsp+38h] [rbp-D0h] BYREF
  float v72; // [rsp+628h] [rbp+520h]
  float v73; // [rsp+62Ch] [rbp+524h]
  float v74; // [rsp+630h] [rbp+528h]
  float v75; // [rsp+638h] [rbp+530h]
  float v76; // [rsp+63Ch] [rbp+534h]
  float v77; // [rsp+640h] [rbp+538h]
  float v78; // [rsp+648h] [rbp+540h]
  float v79; // [rsp+64Ch] [rbp+544h]
  float v80; // [rsp+650h] [rbp+548h]
  float v81; // [rsp+658h] [rbp+550h]
  float v82; // [rsp+65Ch] [rbp+554h]
  float v83; // [rsp+660h] [rbp+558h]

  v2 = *((_BYTE *)this + 3448) == 0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = (float)(*((float *)a2 + 331) + *((float *)this + 857)) * 0.5;
  v8 = (float)(*((float *)a2 + 332) + *((float *)this + 858)) * 0.5;
  *((float *)this + 857) = v7;
  *((float *)this + 858) = v8;
  if ( !v2 )
  {
    v6 = v7 - *((float *)this + 859);
    v5 = v8 - *((float *)this + 860);
  }
  v9 = *((float *)this + 871);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v9 > v10 )
    v6 = 0.0;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 > v11 )
    v5 = 0.0;
  Instance = MPCHolographicInputManager::GetInstance();
  v13 = 23LL;
  v14 = v71;
  v15 = 23LL;
  do
  {
    v16 = *((_OWORD *)Instance + 1);
    *v14 = *(_OWORD *)Instance;
    v17 = *((_OWORD *)Instance + 2);
    v14[1] = v16;
    v18 = *((_OWORD *)Instance + 3);
    v14[2] = v17;
    v19 = *((_OWORD *)Instance + 4);
    v14[3] = v18;
    v20 = *((_OWORD *)Instance + 5);
    v14[4] = v19;
    v21 = *((_OWORD *)Instance + 6);
    v14[5] = v20;
    v22 = *((_OWORD *)Instance + 7);
    Instance = (struct MPCHolographicInputManager *)((char *)Instance + 128);
    v14[6] = v21;
    v14 += 8;
    *(v14 - 1) = v22;
    --v15;
  }
  while ( v15 );
  v23 = 0.0;
  v24 = *((_OWORD *)Instance + 1);
  *v14 = *(_OWORD *)Instance;
  v25 = *((_OWORD *)Instance + 2);
  v14[1] = v24;
  v26 = *((_OWORD *)Instance + 3);
  v14[2] = v25;
  v27 = *((_OWORD *)Instance + 4);
  v14[3] = v26;
  v28 = *((_OWORD *)Instance + 5);
  v14[4] = v27;
  v29 = *((_OWORD *)Instance + 6);
  v14[5] = v28;
  v14[6] = v29;
  if ( *((_BYTE *)a2 + 1378) )
  {
    if ( (*((_BYTE *)a2 + 1344) & 0x40) != 0 )
    {
      v30 = *((float *)a2 + 339);
      v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & _xmm);
      if ( v31 > *((float *)this + 872) )
      {
        v23 = (float)(v30 + *((float *)this + 861)) * 0.5;
        *((float *)this + 861) = v23;
      }
    }
  }
  v32 = (__m128)LODWORD(v72);
  v33 = v6 * *((float *)this + 869);
  v34 = (__m128)LODWORD(v73);
  v32.m128_f32[0] = (float)(v72 * v33) + *((float *)this + 863);
  v34.m128_f32[0] = (float)(v73 * v33) + *((float *)this + 864);
  v35 = (float)(v74 * v33) + *((float *)this + 865);
  v36 = v77;
  v37 = v32;
  v38 = (__m128)LODWORD(v75);
  *(_QWORD *)((char *)this + 3452) = _mm_unpacklo_ps(v37, v34).m128_u64[0];
  v39 = (__m128)LODWORD(v76);
  *((float *)this + 865) = v35;
  v37.m128_f32[0] = v5 * *((float *)this + 869);
  v38.m128_f32[0] = (float)(v38.m128_f32[0] * v37.m128_f32[0]) + *((float *)this + 863);
  v39.m128_f32[0] = (float)(v39.m128_f32[0] * v37.m128_f32[0]) + *((float *)this + 864);
  v40 = (float)(v36 * v37.m128_f32[0]) + *((float *)this + 865);
  v41 = v80;
  v42 = v38;
  v43 = (__m128)LODWORD(v78);
  v42.m128_u64[0] = _mm_unpacklo_ps(v42, v39).m128_u64[0];
  v44 = (__m128)LODWORD(v79);
  *(_QWORD *)((char *)this + 3452) = v42.m128_u64[0];
  *((float *)this + 865) = v40;
  v42.m128_i32[0] = COERCE_UNSIGNED_INT(v23 * *((float *)this + 870)) ^ _xmm;
  v43.m128_f32[0] = (float)(v43.m128_f32[0] * v42.m128_f32[0]) + *((float *)this + 863);
  v44.m128_f32[0] = (float)(v44.m128_f32[0] * v42.m128_f32[0]) + *((float *)this + 864);
  v45 = (float)(v41 * v42.m128_f32[0]) + *((float *)this + 865);
  *(_QWORD *)((char *)this + 3452) = _mm_unpacklo_ps(v43, v44).m128_u64[0];
  *((float *)this + 865) = v45;
  v46 = *((float *)this + 869);
  v42.m128_f32[0] = v46;
  v47 = v23 * *((float *)this + 870);
  *((_DWORD *)this + 859) = *((_DWORD *)this + 857);
  *((_DWORD *)this + 860) = *((_DWORD *)this + 858);
  *((_BYTE *)this + 3448) = 1;
  v48 = (float)(v46 * v5) + *((float *)this + 867);
  *((float *)this + 866) = (float)(v42.m128_f32[0] * v6) + *((float *)this + 866);
  v42.m128_f32[0] = *((float *)this + 868) - v47;
  *((float *)this + 867) = v48;
  *((_DWORD *)this + 868) = v42.m128_i32[0];
  v49 = *((_BYTE *)a2 + 1320);
  *((_DWORD *)this + 855) = v49 == 1;
  if ( v49 == 1 && !*((_DWORD *)this + 856) )
  {
    v50 = MPCHolographicInputManager::GetInstance();
    v69 = *((_QWORD *)v50 + 22);
    v70 = *((float *)v50 + 46);
    v51 = MPCHolographicInputManager::GetInstance();
    v52 = v71;
    do
    {
      v53 = *((_OWORD *)v51 + 1);
      *v52 = *(_OWORD *)v51;
      v54 = *((_OWORD *)v51 + 2);
      v52[1] = v53;
      v55 = *((_OWORD *)v51 + 3);
      v52[2] = v54;
      v56 = *((_OWORD *)v51 + 4);
      v52[3] = v55;
      v57 = *((_OWORD *)v51 + 5);
      v52[4] = v56;
      v58 = *((_OWORD *)v51 + 6);
      v52[5] = v57;
      v59 = *((_OWORD *)v51 + 7);
      v51 = (struct MPCHolographicInputManager *)((char *)v51 + 128);
      v52[6] = v58;
      v52 += 8;
      *(v52 - 1) = v59;
      --v13;
    }
    while ( v13 );
    v60 = *((_OWORD *)v51 + 1);
    *v52 = *(_OWORD *)v51;
    v61 = *((_OWORD *)v51 + 2);
    v52[1] = v60;
    v62 = *((_OWORD *)v51 + 3);
    v52[2] = v61;
    v63 = *((_OWORD *)v51 + 4);
    v52[3] = v62;
    v64 = *((_OWORD *)v51 + 5);
    v52[4] = v63;
    v65 = *((_OWORD *)v51 + 6);
    *((_BYTE *)this + 3448) = 0;
    v52[5] = v64;
    v52[6] = v65;
    v66 = (__m128)LODWORD(v75);
    v67 = (__m128)LODWORD(v73);
    v66.m128_f32[0] = (float)((float)((float)(v75 * *((float *)&v69 + 1)) + (float)(v72 * *(float *)&v69))
                            + (float)(v78 * v70))
                    + v81;
    v67.m128_f32[0] = (float)((float)((float)(v73 * *(float *)&v69) + (float)(v76 * *((float *)&v69 + 1)))
                            + (float)(v79 * v70))
                    + v82;
    v68 = (float)((float)((float)(v74 * *(float *)&v69) + (float)(v77 * *((float *)&v69 + 1))) + (float)(v80 * v70))
        + v83;
    *(_QWORD *)((char *)this + 3452) = _mm_unpacklo_ps(v66, v67).m128_u64[0];
    *((_QWORD *)this + 433) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((float *)this + 865) = v68;
    *((_DWORD *)this + 868) = 0;
  }
  *((_DWORD *)this + 856) = *((_DWORD *)this + 855);
}
