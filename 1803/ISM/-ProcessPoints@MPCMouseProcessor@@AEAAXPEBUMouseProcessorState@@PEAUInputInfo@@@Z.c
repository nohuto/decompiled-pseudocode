/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180098034
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097220 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180092D64 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __m128 v8; // xmm0
  __int64 v9; // r8
  MPCConstantManager *v10; // rax
  __m128 v11; // xmm1
  float v12; // xmm2_4
  __m128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // r8
  MPCConstantManager *v16; // rax
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r8
  MPCConstantManager *v22; // rax
  __m128 v23; // xmm0
  __m128 v24; // xmm2
  __int64 v25; // rdx
  __int64 v26; // r8
  MPCConstantManager *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  MPCConstantManager *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  MPCConstantManager *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  _OWORD *v36; // rax
  _OWORD *v37; // rcx
  __m128 v38; // xmm6
  __m128 v39; // xmm2
  float v40; // [rsp+30h] [rbp-D8h]
  float v41[16]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h]
  _BYTE v43[1344]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v44; // [rsp+5C8h] [rbp+4C0h]
  __int128 v45; // [rsp+5D8h] [rbp+4D0h]
  __m128 v46; // [rsp+5E8h] [rbp+4E0h]
  float v47[140]; // [rsp+5F8h] [rbp+4F0h]
  _OWORD v48[4]; // [rsp+828h] [rbp+720h] BYREF

  v42 = -2LL;
  MPCHolographicInputManager::GetInstance();
  v5 = v43;
  v6 = 15LL;
  v7 = 15LL;
  do
  {
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[3] = v4[3];
    v5[4] = v4[4];
    v5[5] = v4[5];
    v5[6] = v4[6];
    v5 += 8;
    *(v5 - 1) = v4[7];
    v4 += 8;
    --v7;
  }
  while ( v7 );
  *v5 = *v4;
  *((_QWORD *)v5 + 2) = *((_QWORD *)v4 + 2);
  v48[0] = v44;
  v48[1] = v45;
  v8 = v46;
  v48[2] = v46;
  v48[3] = *(_OWORD *)v47;
  MPCMath::OrientToGravity((__int64)v41, (__int64)v48, 0.89999998);
  std::string::string(v48, "MouseParams_PointScaleFactorXY", v9);
  MPCConstantManager::GetInstance();
  v8.m128_f32[0] = MPCConstantManager::GetConstant<float>(
                     v10,
                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                     (__int64)v48)
                 * (float)*((int *)this + 837);
  v11 = v8;
  v12 = (float)(v8.m128_f32[0] * v41[2]) + *((float *)this + 848);
  v11.m128_f32[0] = (float)(v8.m128_f32[0] * v41[1]) + *((float *)this + 847);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] * v41[0]) + *((float *)this + 846);
  v13 = _mm_unpacklo_ps(v8, v11);
  *((_QWORD *)this + 423) = v13.m128_u64[0];
  *((float *)this + 848) = v12;
  std::string::~string((unsigned __int64 *)v48, v14);
  std::string::string(v48, "MouseParams_PointScaleFactorXY", v15);
  MPCConstantManager::GetInstance();
  v13.m128_f32[0] = MPCConstantManager::GetConstant<float>(
                      v16,
                      (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                      (__int64)v48)
                  * (float)*((int *)this + 838);
  v17 = _mm_xor_ps(v13, (__m128)(unsigned int)_xmm);
  v18 = v17;
  v11.m128_f32[0] = (float)(v17.m128_f32[0] * v41[6]) + *((float *)this + 848);
  v18.m128_f32[0] = (float)(v17.m128_f32[0] * v41[5]) + *((float *)this + 847);
  v17.m128_f32[0] = (float)(v17.m128_f32[0] * v41[4]) + *((float *)this + 846);
  v19 = _mm_unpacklo_ps(v17, v18);
  *((_QWORD *)this + 423) = v19.m128_u64[0];
  *((_DWORD *)this + 848) = v11.m128_i32[0];
  std::string::~string((unsigned __int64 *)v48, v20);
  std::string::string(v48, "MouseParams_PointScaleFactorWheel", v21);
  MPCConstantManager::GetInstance();
  v19.m128_f32[0] = MPCConstantManager::GetConstant<float>(
                      v22,
                      (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                      (__int64)v48)
                  * (float)*((int *)this + 840);
  v23 = _mm_xor_ps(v19, (__m128)(unsigned int)_xmm);
  v24 = v23;
  v11.m128_f32[0] = (float)(v23.m128_f32[0] * v41[10]) + *((float *)this + 848);
  v24.m128_f32[0] = (float)(v23.m128_f32[0] * v41[9]) + *((float *)this + 847);
  v23.m128_f32[0] = (float)(v23.m128_f32[0] * v41[8]) + *((float *)this + 846);
  *((_QWORD *)this + 423) = _mm_unpacklo_ps(v23, v24).m128_u64[0];
  *((_DWORD *)this + 848) = v11.m128_i32[0];
  std::string::~string((unsigned __int64 *)v48, v25);
  std::string::string(v48, "MouseParams_PointScaleFactorXY", v26);
  MPCConstantManager::GetInstance();
  *((float *)this + 849) = (float)(MPCConstantManager::GetConstant<float>(
                                     v27,
                                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                                     (__int64)v48)
                                 * (float)*((int *)this + 837))
                         + *((float *)this + 849);
  std::string::~string((unsigned __int64 *)v48, v28);
  std::string::string(v48, "MouseParams_PointScaleFactorXY", v29);
  MPCConstantManager::GetInstance();
  *((float *)this + 850) = *((float *)this + 850)
                         - (float)(MPCConstantManager::GetConstant<float>(
                                     v30,
                                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                                     (__int64)v48)
                                 * (float)*((int *)this + 838));
  std::string::~string((unsigned __int64 *)v48, v31);
  std::string::string(v48, "MouseParams_PointScaleFactorWheel", v32);
  MPCConstantManager::GetInstance();
  *((float *)this + 851) = (float)(MPCConstantManager::GetConstant<float>(
                                     v33,
                                     (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                                     (__int64)v48)
                                 * (float)*((int *)this + 840))
                         + *((float *)this + 851);
  std::string::~string((unsigned __int64 *)v48, v34);
  if ( (*((_BYTE *)this + 3368) & 0x70) != 0 && !*((_QWORD *)this + 284) )
  {
    MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 3372) = *(_QWORD *)(v35 + 176);
    *((_DWORD *)this + 845) = *(_DWORD *)(v35 + 184);
    MPCHolographicInputManager::GetInstance();
    v37 = v43;
    do
    {
      *v37 = *v36;
      v37[1] = v36[1];
      v37[2] = v36[2];
      v37[3] = v36[3];
      v37[4] = v36[4];
      v37[5] = v36[5];
      v37[6] = v36[6];
      v37 += 8;
      *(v37 - 1) = v36[7];
      v36 += 8;
      --v6;
    }
    while ( v6 );
    *v37 = *v36;
    *((_QWORD *)v37 + 2) = *((_QWORD *)v36 + 2);
    v38 = (__m128)*((unsigned int *)this + 844);
    v38.m128_f32[0] = (float)((float)((float)(v38.m128_f32[0] * *(float *)&v45)
                                    + (float)(*((float *)this + 843) * *(float *)&v44))
                            + (float)(*((float *)this + 845) * v46.m128_f32[0]))
                    + v47[0];
    v39 = (__m128)*((unsigned int *)this + 843);
    v39.m128_f32[0] = (float)((float)((float)(v39.m128_f32[0] * *((float *)&v44 + 1))
                                    + (float)(*((float *)this + 844) * *((float *)&v45 + 1)))
                            + (float)(*((float *)this + 845) * v46.m128_f32[1]))
                    + v47[1];
    v40 = (float)((float)((float)(*((float *)this + 843) * *((float *)&v44 + 2))
                        + (float)(*((float *)this + 844) * *((float *)&v45 + 2)))
                + (float)(*((float *)this + 845) * v46.m128_f32[2]))
        + v47[2];
    *((_QWORD *)this + 423) = _mm_unpacklo_ps(v38, v39).m128_u64[0];
    *((float *)this + 848) = v40;
    *(_QWORD *)((char *)this + 3396) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 851) = 0;
  }
}
