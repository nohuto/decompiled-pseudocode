/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800485B0
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180048350 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall MPCClickerProcessor::ProcessPoints(MPCClickerProcessor *this, struct InputInfo *a2, __int64 a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  MPCConstantManager *Instance; // rax
  float v12; // xmm0_4
  __int64 v13; // rdx
  __int64 v14; // r8
  float v15; // xmm6_4
  MPCConstantManager *v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rdx
  __int64 v19; // r8
  float v20; // xmm8_4
  float v21; // xmm13_4
  float v22; // xmm6_4
  MPCConstantManager *v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rdx
  struct MPCHolographicInputManager *v26; // rax
  char *v27; // rcx
  __int64 v28; // rdx
  MPCConstantManager *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  MPCConstantManager *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  MPCConstantManager *v35; // rax
  __m128 v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // r8
  struct MPCHolographicInputManager *v39; // rax
  __m128 v40; // xmm6
  __m128 v41; // xmm2
  struct MPCHolographicInputManager *v42; // rax
  __m128 v43; // xmm7
  __m128 v44; // xmm5
  MPCConstantManager *v45; // rax
  __m128 v46; // xmm2
  float v47; // xmm1_4
  __m128 v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // r8
  MPCConstantManager *v51; // rax
  __m128 v52; // xmm3
  __m128 v53; // xmm2
  float v54; // xmm1_4
  __m128 v55; // xmm0
  __int64 v56; // rdx
  __int64 v57; // r8
  MPCConstantManager *v58; // rax
  __m128 v59; // xmm0
  __m128 v60; // xmm2
  __m128 v61; // xmm1
  __int64 v62; // rdx
  float v63; // xmm5_4
  float v64; // xmm6_4
  __m128 v65; // xmm7
  __m128 v66; // xmm4
  __int64 v67; // [rsp+28h] [rbp-E0h]
  float v68; // [rsp+30h] [rbp-D8h]
  float v69; // [rsp+30h] [rbp-D8h]
  float v70; // [rsp+30h] [rbp-D8h]
  float v71; // [rsp+30h] [rbp-D8h]
  float v72; // [rsp+30h] [rbp-D8h]
  char v73; // [rsp+48h] [rbp-C0h] BYREF
  float v74; // [rsp+588h] [rbp+480h]
  float v75; // [rsp+58Ch] [rbp+484h]
  float v76; // [rsp+590h] [rbp+488h]
  float v77; // [rsp+598h] [rbp+490h]
  float v78; // [rsp+59Ch] [rbp+494h]
  float v79; // [rsp+5A0h] [rbp+498h]
  float v80; // [rsp+5A8h] [rbp+4A0h]
  float v81; // [rsp+5ACh] [rbp+4A4h]
  float v82; // [rsp+5B0h] [rbp+4A8h]
  float v83; // [rsp+5B8h] [rbp+4B0h]
  float v84; // [rsp+5BCh] [rbp+4B4h]
  float v85; // [rsp+5C0h] [rbp+4B8h]
  unsigned __int64 v86[4]; // [rsp+7E8h] [rbp+6E0h] BYREF

  v5 = *((float *)a2 + 288);
  v6 = (float)(*((float *)a2 + 287) + *((float *)this + 577)) * 0.5;
  *((float *)this + 577) = v6;
  v7 = (float)(v5 + *((float *)this + 578)) * 0.5;
  *((float *)this + 578) = v7;
  v8 = 0.0;
  v9 = 0.0;
  if ( *((_BYTE *)this + 2328) )
  {
    v8 = v6 - *((float *)this + 579);
    v9 = v7 - *((float *)this + 580);
  }
  std::string::string(v86, "DeadZoneAngle", a3);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 577) - 0.0)) & _xmm);
  Instance = MPCConstantManager::GetInstance();
  v12 = MPCConstantManager::GetConstant<float>(
          Instance,
          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
          (__int64)v86);
  std::string::~string(v86, v13);
  if ( v12 > v10 )
    v8 = 0.0;
  std::string::string(v86, "DeadZoneAngle", v14);
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 578) - 0.0)) & _xmm);
  v16 = MPCConstantManager::GetInstance();
  v17 = MPCConstantManager::GetConstant<float>(
          v16,
          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
          (__int64)v86);
  std::string::~string(v86, v18);
  if ( v17 > v15 )
    v9 = 0.0;
  v20 = 0.0;
  if ( *((_BYTE *)a2 + 1210) )
  {
    if ( (*((_BYTE *)a2 + 1168) & 0x40) != 0 )
    {
      v21 = *((float *)a2 + 297);
      std::string::string(v86, "ThumbStickDeadZone", v19);
      v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - 0.0)) & _xmm);
      v23 = MPCConstantManager::GetInstance();
      v24 = MPCConstantManager::GetConstant<float>(
              v23,
              (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
              (__int64)v86);
      std::string::~string(v86, v25);
      if ( v22 > v24 )
      {
        v20 = (float)(v21 + *((float *)this + 581)) * 0.5;
        *((float *)this + 581) = v20;
      }
    }
  }
  v26 = MPCHolographicInputManager::GetInstance();
  v27 = &v73;
  v28 = 15LL;
  do
  {
    *(_OWORD *)v27 = *(_OWORD *)v26;
    *((_OWORD *)v27 + 1) = *((_OWORD *)v26 + 1);
    *((_OWORD *)v27 + 2) = *((_OWORD *)v26 + 2);
    *((_OWORD *)v27 + 3) = *((_OWORD *)v26 + 3);
    *((_OWORD *)v27 + 4) = *((_OWORD *)v26 + 4);
    *((_OWORD *)v27 + 5) = *((_OWORD *)v26 + 5);
    *((_OWORD *)v27 + 6) = *((_OWORD *)v26 + 6);
    v27 += 128;
    *((_OWORD *)v27 - 1) = *((_OWORD *)v26 + 7);
    v26 = (struct MPCHolographicInputManager *)((char *)v26 + 128);
    --v28;
  }
  while ( v28 );
  v36 = *(__m128 *)v26;
  *(_OWORD *)v27 = *(_OWORD *)v26;
  *((_QWORD *)v27 + 2) = *((_QWORD *)v26 + 2);
  *((_DWORD *)this + 575) = *((_BYTE *)a2 + 1144) == 1;
  std::string::string(v86, "PointScaleFactorXY", 128LL);
  v29 = MPCConstantManager::GetInstance();
  *((float *)this + 589) = (float)(MPCConstantManager::GetConstant<float>(
                                     v29,
                                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                                     (__int64)v86)
                                 * v8)
                         + *((float *)this + 589);
  std::string::~string(v86, v30);
  std::string::string(v86, "PointScaleFactorXY", v31);
  v32 = MPCConstantManager::GetInstance();
  *((float *)this + 590) = (float)(MPCConstantManager::GetConstant<float>(
                                     v32,
                                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                                     (__int64)v86)
                                 * v9)
                         + *((float *)this + 590);
  std::string::~string(v86, v33);
  std::string::string(v86, "PointScaleFactorStick", v34);
  v35 = MPCConstantManager::GetInstance();
  *((float *)this + 591) = *((float *)this + 591)
                         - (float)(MPCConstantManager::GetConstant<float>(
                                     v35,
                                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                                     (__int64)v86)
                                 * v20);
  std::string::~string(v86, v37);
  *((_DWORD *)this + 579) = *((_DWORD *)this + 577);
  *((_DWORD *)this + 580) = *((_DWORD *)this + 578);
  *((_BYTE *)this + 2328) = 1;
  if ( *((_DWORD *)this + 575) )
  {
    if ( *((_DWORD *)this + 576) )
    {
      std::string::string(v86, "PointScaleFactorXY", v38);
      v45 = MPCConstantManager::GetInstance();
      v36.m128_f32[0] = MPCConstantManager::GetConstant<float>(
                          v45,
                          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                          (__int64)v86)
                      * v8;
      v46 = v36;
      v47 = (float)(v36.m128_f32[0] * 0.0) + *((float *)this + 588);
      v46.m128_f32[0] = (float)(v36.m128_f32[0] * 0.0) + *((float *)this + 587);
      v36.m128_f32[0] = v36.m128_f32[0] + *((float *)this + 586);
      v48 = _mm_unpacklo_ps(v36, v46);
      *((_QWORD *)this + 293) = v48.m128_u64[0];
      *((float *)this + 588) = v47;
      std::string::~string(v86, v49);
      std::string::string(v86, "PointScaleFactorXY", v50);
      v51 = MPCConstantManager::GetInstance();
      v48.m128_f32[0] = MPCConstantManager::GetConstant<float>(
                          v51,
                          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                          (__int64)v86);
      v52 = v48;
      v52.m128_f32[0] = v48.m128_f32[0] * v9;
      v53 = v52;
      v53.m128_f32[0] = (float)(v48.m128_f32[0] * v9) * 0.0;
      v54 = v53.m128_f32[0] + *((float *)this + 588);
      v52.m128_f32[0] = (float)(v48.m128_f32[0] * v9) + *((float *)this + 587);
      v53.m128_f32[0] = v53.m128_f32[0] + *((float *)this + 586);
      v55 = _mm_unpacklo_ps(v53, v52);
      *((_QWORD *)this + 293) = v55.m128_u64[0];
      *((float *)this + 588) = v54;
      std::string::~string(v86, v56);
      std::string::string(v86, "PointScaleFactorStick", v57);
      v58 = MPCConstantManager::GetInstance();
      v55.m128_f32[0] = MPCConstantManager::GetConstant<float>(
                          v58,
                          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                          (__int64)v86)
                      * v20;
      v59 = _mm_xor_ps(v55, (__m128)_xmm);
      v60 = v59;
      v60.m128_f32[0] = v59.m128_f32[0] * 0.0;
      v61 = v60;
      v61.m128_f32[0] = (float)(v59.m128_f32[0] * 0.0) + *((float *)this + 587);
      v60.m128_f32[0] = (float)(v59.m128_f32[0] * 0.0) + *((float *)this + 586);
      v71 = v59.m128_f32[0] + *((float *)this + 588);
      *((_QWORD *)this + 293) = _mm_unpacklo_ps(v60, v61).m128_u64[0];
      *((float *)this + 588) = v71;
      std::string::~string(v86, v62);
      v63 = *((float *)this + 587);
      v52.m128_i32[0] = *((_DWORD *)this + 586);
      v64 = *((float *)this + 588);
      v65 = (__m128)LODWORD(v74);
      v65.m128_f32[0] = (float)((float)((float)(v74 * v52.m128_f32[0]) + (float)(v77 * v63)) + (float)(v80 * v64)) + v83;
      v66 = (__m128)LODWORD(v75);
      v66.m128_f32[0] = (float)((float)((float)(v75 * v52.m128_f32[0]) + (float)(v78 * v63)) + (float)(v81 * v64)) + v84;
      v72 = (float)((float)((float)(v76 * v52.m128_f32[0]) + (float)(v79 * v63)) + (float)(v82 * v64)) + v85;
      *(_QWORD *)((char *)this + 2332) = _mm_unpacklo_ps(v65, v66).m128_u64[0];
      *((float *)this + 585) = v72;
    }
    else
    {
      v39 = MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 293) = *((_QWORD *)v39 + 22);
      *((_DWORD *)this + 588) = *((_DWORD *)v39 + 46);
      v40 = (__m128)*((unsigned int *)this + 587);
      v40.m128_f32[0] = (float)((float)((float)(v40.m128_f32[0] * v77) + (float)(*((float *)this + 586) * v74))
                              + (float)(*((float *)this + 588) * v80))
                      + v83;
      v41 = (__m128)*((unsigned int *)this + 586);
      v41.m128_f32[0] = (float)((float)((float)(v41.m128_f32[0] * v75) + (float)(*((float *)this + 587) * v78))
                              + (float)(*((float *)this + 588) * v81))
                      + v84;
      v68 = (float)((float)((float)(*((float *)this + 586) * v76) + (float)(*((float *)this + 587) * v79))
                  + (float)(*((float *)this + 588) * v82))
          + v85;
      *(_QWORD *)((char *)this + 2332) = _mm_unpacklo_ps(v40, v41).m128_u64[0];
      *((float *)this + 585) = v68;
      *(_QWORD *)((char *)this + 2356) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)this + 591) = 0;
      *((_BYTE *)this + 2328) = 0;
    }
  }
  else
  {
    v42 = MPCHolographicInputManager::GetInstance();
    v67 = *((_QWORD *)v42 + 22);
    v69 = *((float *)v42 + 46);
    v43 = (__m128)LODWORD(v77);
    v43.m128_f32[0] = (float)((float)((float)(v77 * *((float *)&v67 + 1)) + (float)(v74 * *(float *)&v67))
                            + (float)(v80 * v69))
                    + v83;
    v44 = (__m128)LODWORD(v75);
    v44.m128_f32[0] = (float)((float)((float)(v75 * *(float *)&v67) + (float)(v78 * *((float *)&v67 + 1)))
                            + (float)(v81 * v69))
                    + v84;
    v70 = (float)((float)((float)(v76 * *(float *)&v67) + (float)(v79 * *((float *)&v67 + 1))) + (float)(v82 * v69))
        + v85;
    *((_QWORD *)this + 293) = _mm_unpacklo_ps(v43, v44).m128_u64[0];
    *((float *)this + 588) = v70;
  }
  *((_DWORD *)this + 576) = *((_DWORD *)this + 575);
}
