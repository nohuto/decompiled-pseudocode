/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003CF7C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18003AC80 (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F088 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x18004D130 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180054744 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800E3205 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=36
void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // si
  int v5; // xmm0_4
  int v6; // ecx
  char v7; // al
  char v8; // r15
  bool v9; // r13
  float v10; // xmm0_4
  float v11; // xmm6_4
  int Instance; // eax
  bool v13; // dl
  __int64 v14; // rax
  volatile signed __int32 *v15; // rcx
  char v16; // r12
  bool v17; // bl
  char v18; // bl
  int v19; // xmm1_4
  float v20; // xmm6_4
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm6_4
  int v24; // eax
  float v25; // xmm1_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  char v32; // si
  __int64 v33; // rbx
  __int64 v34; // rax
  float v35; // xmm6_4
  float LowPart; // xmm0_4
  float v37; // xmm6_4
  int v38; // eax
  int v39; // eax
  float v40; // xmm0_4
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  __int64 *v44; // rax
  float v45; // xmm2_4
  __m128 v46; // xmm2
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  __m128 v49; // xmm2
  __m128 v50; // xmm1
  __m128 v51; // xmm2
  int v52; // eax
  __m128 v53; // xmm2
  __m128 v54; // xmm1
  __m128 v55; // xmm1
  __m128 v56; // xmm2
  __m128 v57; // xmm1
  volatile signed __int32 *v58; // [rsp+48h] [rbp-C0h]
  float v59; // [rsp+50h] [rbp-B8h]
  float v60; // [rsp+54h] [rbp-B4h]
  float v61; // [rsp+58h] [rbp-B0h]
  float v62; // [rsp+5Ch] [rbp-ACh]
  _DWORD v63[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+70h] [rbp-98h] BYREF
  __int64 v66; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  _BYTE v68[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v69[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v70[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v71[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v72[32]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v73[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v74[32]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v75[32]; // [rsp+188h] [rbp+80h] BYREF

  v67 = -2LL;
  v4 = 0;
  *((_DWORD *)this + 674) = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 297);
  *((_DWORD *)this + 684) = *((_DWORD *)a2 + 296);
  *((_DWORD *)this + 685) = v5;
  v6 = *((_DWORD *)a2 + 292) & *((_DWORD *)a2 + 291);
  *((_DWORD *)this + 675) = v6;
  v7 = *((_BYTE *)this + 3241);
  v8 = 1;
  if ( v7 )
  {
    v7 = v6 & 1;
    *((_BYTE *)this + 3241) = v6 & 1;
  }
  v9 = (*((_BYTE *)a2 + 1168) & 4) != 0 && !v7;
  v10 = *((float *)a2 + 166);
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 335),
    v9,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 151),
    *((float *)a2 + 152),
    v10);
  if ( *((_BYTE *)a2 + 1211) )
  {
    std::string::string(v68);
    v11 = *((float *)this + 676);
    Instance = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(Instance);
    v10 = (float)(v10 * (float)(*((float *)a2 + 300) - v11)) + v11;
    *((float *)this + 676) = v10;
    std::string::~string(v68);
  }
  else
  {
    *((_DWORD *)this + 676) = 0;
  }
  v13 = (*((_BYTE *)this + 2700) & 8) != 0 && !*((_BYTE *)this + 3241);
  *((_BYTE *)this + 3233) = v13;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 330), v13, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 330) + 10LL) )
  {
    v15 = v58;
LABEL_20:
    v16 = 1;
    goto LABEL_21;
  }
  v14 = *((_QWORD *)this + 335);
  v10 = 0.0;
  v15 = *(volatile signed __int32 **)(v14 + 24);
  if ( v15 )
  {
    _InterlockedAdd(v15 + 2, 1u);
    v15 = *(volatile signed __int32 **)(v14 + 24);
  }
  v58 = v15;
  v4 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 10LL) )
    goto LABEL_20;
  v16 = 0;
LABEL_21:
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~1u;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v58)(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
      }
    }
  }
  if ( v16 )
    MPCSixDofProcessor::ResetRayLength(this);
  v17 = (*((_DWORD *)a2 + 292) & 0x40) != 0;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 333), v17, *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 332), !v17, *((_QWORD *)a2 + 2));
  v18 = 0;
  if ( *((_BYTE *)this + 2308) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 332) + 9LL) )
      *((_BYTE *)this + 2308) = 0;
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 333) + 9LL) )
  {
    *((_BYTE *)this + 2308) = 1;
    v18 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 334), *((_BYTE *)this + 2308), *((_QWORD *)a2 + 2));
  if ( v18 )
  {
    v10 = *((float *)a2 + 296);
    v19 = *((_DWORD *)a2 + 297);
    *((float *)this + 680) = v10;
    *((_DWORD *)this + 681) = v19;
    *((float *)this + 686) = v10;
    *((_DWORD *)this + 687) = v19;
    *((_DWORD *)this + 576) = 2;
    *((_QWORD *)this + 344) = 0LL;
    *((_QWORD *)this + 345) = 0LL;
    *(_QWORD *)((char *)this + 2812) = 0LL;
  }
  if ( *((_BYTE *)this + 2308) )
  {
    std::string::string(v69);
    v20 = *((float *)this + 680);
    v21 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v21);
    v22 = (float)(v10 * (float)(*((float *)this + 684) - v20)) + v20;
    *((float *)this + 680) = v22;
    std::string::~string(v69);
    std::string::string(v70);
    v23 = *((float *)this + 681);
    v24 = (unsigned int)MPCConstantManager::GetInstance();
    MPCConstantManager::GetConstant<float>(v24);
    *((float *)this + 681) = (float)(v22 * (float)(*((float *)this + 685) - v23)) + v23;
    std::string::~string(v70);
    v25 = *((float *)this + 681) - *((float *)this + 683);
    *((float *)this + 688) = *((float *)this + 680) - *((float *)this + 682);
    *((float *)this + 689) = v25;
    v26 = *((float *)this + 681) - *((float *)this + 687);
    v27 = *((float *)this + 680) - *((float *)this + 686);
    v28 = sqrtf_0((float)(v27 * v27) + (float)(v26 * v26));
    if ( v9 )
    {
      v29 = 3;
      *((_DWORD *)this + 576) = 3;
    }
    else
    {
      v29 = *((_DWORD *)this + 576);
    }
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 == 1 && !*((_BYTE *)this + 2308) )
            *((_DWORD *)this + 576) = 2;
        }
        else
        {
          std::string::string(v72);
          v32 = v4 | 2;
          v33 = *((_QWORD *)this + 333);
          QueryPerformanceFrequency(&Frequency);
          v34 = *(_QWORD *)(v33 + 32) - *(_QWORD *)(v33 + 16);
          v35 = (float)(int)v34;
          if ( v34 < 0 )
            v35 = v35 + 1.8446744e19;
          LowPart = (float)(int)Frequency.LowPart;
          v37 = v35 / (float)(int)Frequency.LowPart;
          v38 = (unsigned int)MPCConstantManager::GetInstance();
          MPCConstantManager::GetConstant<float>(v38);
          if ( v37 <= LowPart
            || (std::string::string(v71),
                v32 |= 4u,
                v39 = (unsigned int)MPCConstantManager::GetInstance(),
                MPCConstantManager::GetConstant<float>(v39),
                v28 <= LowPart) )
          {
            v8 = 0;
          }
          if ( (v32 & 4) != 0 )
            std::string::~string(v71);
          std::string::~string(v72);
          if ( v8 )
          {
            std::string::string(v73);
            v40 = sqrtf_0(
                    (float)(*((float *)this + 686) * *((float *)this + 686))
                  + (float)(*((float *)this + 687) * *((float *)this + 687)));
            v41 = (unsigned int)MPCConstantManager::GetInstance();
            MPCConstantManager::GetConstant<float>(v41);
            std::string::~string(v73);
            std::string::string(v74);
            v42 = (unsigned int)MPCConstantManager::GetInstance();
            MPCConstantManager::GetConstant<float>(v42);
            *((_DWORD *)this + 576) = !IsPointInHorizontalQuadrant(
                                         v40 * 0.0174532925199433,
                                         __SPAIR64__(LODWORD(v26), LODWORD(v27)));
            std::string::~string(v74);
            v43 = *((_DWORD *)this + 576);
            if ( v43 )
            {
              v63[0] = 0;
              *(float *)&v63[1] = v28;
            }
            else
            {
              v64 = LODWORD(v28);
            }
            v44 = (__int64 *)v63;
            if ( !v43 )
              v44 = &v64;
            *((_QWORD *)this + 344) = *v44;
            if ( v43 )
              v27 = v26;
            if ( v27 < 0.0 )
            {
              v45 = *((float *)this + 689) * -1.0;
              *((float *)this + 688) = *((float *)this + 688) * -1.0;
              *((float *)this + 689) = v45;
            }
          }
        }
      }
      else
      {
        *((_DWORD *)this + 688) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 689) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 344) = 0LL;
  }
  if ( sqrtf_0(
         (float)(*((float *)this + 689) * *((float *)this + 689))
       + (float)(*((float *)this + 688) * *((float *)this + 688))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 334) + 9LL) )
    {
      std::string::string(v75);
      v46 = (__m128)*((unsigned __int64 *)this + 345);
      v47 = _mm_mul_ps(v46, v46);
      v47.m128_f32[0] = v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0];
      v48 = _mm_div_ps(v46, _mm_sqrt_ps(_mm_shuffle_ps(v47, v47, 0)));
      v61 = v48.m128_f32[0];
      v62 = _mm_shuffle_ps(v48, v48, 85).m128_f32[0];
      v49 = (__m128)*((unsigned __int64 *)this + 344);
      v50 = _mm_mul_ps(v49, v49);
      v50.m128_f32[0] = v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
      v51 = _mm_div_ps(v49, _mm_sqrt_ps(_mm_shuffle_ps(v50, v50, 0)));
      v59 = v51.m128_f32[0];
      v60 = _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
      v52 = (unsigned int)MPCConstantManager::GetInstance();
      MPCConstantManager::GetConstant<float>(v52);
      v51.m128_f32[0] = (float)(v60 * (float)(v60 - v62)) + *((float *)this + 691);
      *((float *)this + 690) = (float)((float)(v59 - v61) * v60) + *((float *)this + 690);
      *((_DWORD *)this + 691) = v51.m128_i32[0];
      std::string::~string(v75);
    }
    else
    {
      v53 = (__m128)*((unsigned __int64 *)this + 344);
      v54 = _mm_mul_ps(v53, v53);
      v54.m128_f32[0] = v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
      v55 = _mm_div_ps(v53, _mm_sqrt_ps(_mm_shuffle_ps(v54, v54, 0)));
      *((_QWORD *)this + 345) = _mm_unpacklo_ps(v55, _mm_shuffle_ps(v55, v55, 85)).m128_u64[0];
    }
  }
  v56 = (__m128)*((unsigned int *)this + 677);
  v56.m128_f32[0] = (float)(v56.m128_f32[0] * *((float *)this + 697)) + *((float *)this + 694);
  v57 = (__m128)*((unsigned int *)this + 677);
  v57.m128_f32[0] = (float)(v57.m128_f32[0] * *((float *)this + 698)) + *((float *)this + 695);
  *(float *)&v66 = (float)(*((float *)this + 677) * *((float *)this + 699)) + *((float *)this + 696);
  *((_QWORD *)this + 350) = _mm_unpacklo_ps(v56, v57).m128_u64[0];
  *((_DWORD *)this + 702) = v66;
  *((_DWORD *)this + 807) = *((_DWORD *)this + 675);
  *((_QWORD *)this + 341) = *((_QWORD *)this + 340);
}
