/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90
 * Callers:
 *     <none>
 * Callees:
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180036C48 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180037D24 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038768 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038998 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180038C24 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A3B0 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A6D8 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A798 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180060998 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  double *v4; // rsi
  struct MPCGamepadInputHelper *Instance; // rax
  struct MPCGamepadInputHelper *v6; // rcx
  bool v7; // al
  _OWORD *v8; // rdi
  __int64 v9; // r12
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  struct MPCGestureHandlerManager *v13; // rcx
  char IsInjecting; // r15
  __int64 v15; // rax
  int v16; // xmm0_4
  __int64 v17; // rax
  int v18; // xmm0_4
  _OWORD *v19; // rax
  MPCGestureHandlerManager *v20; // rcx
  unsigned __int64 v21; // rdi
  struct MPCGestureHandlerManager *v22; // rcx
  struct MPCGestureHandlerManager *v23; // rcx
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  struct MPCHolographicInputManager *v27; // rax
  _OWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  double v31; // xmm1_8
  double v32; // xmm1_8
  double v33; // xmm2_8
  float v34; // xmm0_4
  float v35; // xmm4_4
  __m128 v36; // xmm2
  float v37; // xmm0_4
  float v38; // xmm0_4
  __m128 v39; // xmm1
  __m128 v40; // xmm2
  float v41; // xmm0_4
  float v42; // xmm0_4
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  float v45; // xmm0_4
  __m128 v46; // xmm2
  float v47; // xmm0_4
  __m128 v48; // xmm1
  struct MPCGestureHandlerManager *v49; // rcx
  struct MPCGestureHandlerManager *v50; // rcx
  unsigned __int64 v51; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 *v52; // [rsp+40h] [rbp-C8h]
  float v53; // [rsp+48h] [rbp-C0h]
  float v54[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+98h] [rbp-70h]
  _OWORD v56[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v57[191]; // [rsp+E8h] [rbp-20h] BYREF

  v55 = -2LL;
  *(_QWORD *)(this + 584) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCSlateDeadzoneHelper **)(this + 4008),
    (*(_DWORD *)(this + 3432) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 195),
    *((float *)a2 + 196),
    *((float *)a2 + 210));
  v4 = (double *)(this - 32);
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  Instance = MPCGamepadInputHelper::GetInstance();
  if ( (((1LL << gdwDeviceFamily) & 0x400) != 0 || *((_BYTE *)Instance + 36))
    && !*((_BYTE *)Instance + 37)
    && (!*(_BYTE *)Instance || *((_BYTE *)Instance + 40)) )
  {
    v6 = MPCGamepadInputHelper::GetInstance();
    v7 = !*((_BYTE *)v6 + 37) && !*((_BYTE *)a2 + 1072) && *((_BYTE *)v6 + 38) == 0;
    *(_BYTE *)(this + 3876) = v7;
    if ( v7 && *((_BYTE *)a2 + 776) && MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      || *(_DWORD *)(this + 3872) )
    {
      v8 = (_OWORD *)((char *)a2 + 776);
      v9 = 2LL;
      if ( *((_BYTE *)a2 + 776) )
      {
        v10 = (_OWORD *)(this + 3552);
        v11 = (_OWORD *)((char *)a2 + 776);
        v12 = 2LL;
        do
        {
          *v10 = *v11;
          v10[1] = v11[1];
          v10[2] = v11[2];
          v10[3] = v11[3];
          v10[4] = v11[4];
          v10[5] = v11[5];
          v10[6] = v11[6];
          v10 += 8;
          *(v10 - 1) = v11[7];
          v11 += 8;
          --v12;
        }
        while ( v12 );
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
      }
      if ( *((_BYTE *)a2 + 778) || *(_DWORD *)(this + 3872) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 3872) )
        {
          if ( *(_BYTE *)v8 )
          {
            v52 = &v51;
            v51 = this & -(__int64)(this != 32);
            if ( v51 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 32)) + 8LL))(this & -(__int64)(this != 32));
            v13 = MPCGestureHandlerManager::GetInstance();
            IsInjecting = MPCGestureHandlerManager::IsInjecting(v13, &v51);
            memset(v57, 0, 0xB20uLL);
            if ( !IsInjecting || (v15 = *(_QWORD *)(this + 4008), *(_BYTE *)(v15 + 13)) )
              v16 = *((_DWORD *)a2 + 195);
            else
              v16 = *(_DWORD *)(v15 + 4);
            DWORD2(v57[80]) = v16;
            if ( !IsInjecting || (v17 = *(_QWORD *)(this + 4008), *(_BYTE *)(v17 + 13)) )
              v18 = *((_DWORD *)a2 + 196);
            else
              v18 = *(_DWORD *)(v17 + 8);
            HIDWORD(v57[80]) = v18;
            v57[81] = *(_OWORD *)((char *)a2 + 788);
            LODWORD(v57[82]) = *((_DWORD *)a2 + 202);
            BYTE4(v57[82]) = *((_BYTE *)a2 + 1073) != 0;
            v19 = (_OWORD *)((char *)&v57[48] + 8);
            do
            {
              *v19 = *v8;
              v19[1] = v8[1];
              v19[2] = v8[2];
              v19[3] = v8[3];
              v19[4] = v8[4];
              v19[5] = v8[5];
              v19[6] = v8[6];
              v19 += 8;
              *(v19 - 1) = v8[7];
              v8 += 8;
              --v9;
            }
            while ( v9 );
            *v19 = *v8;
            v19[1] = v8[1];
            v19[2] = v8[2];
            v19[3] = v8[3];
            DWORD2(v57[79]) = IsInjecting != 0 ? 7 : 4;
            v52 = &v51;
            v51 = this & -(__int64)(this != 32);
            if ( v51 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 32)) + 8LL))(this & -(__int64)(this != 32));
            v20 = MPCGestureHandlerManager::GetInstance();
            MPCGestureHandlerManager::DownLevelTo2D(v20);
          }
        }
      }
    }
    else
    {
      v52 = &v51;
      v21 = this & -(__int64)(this != 32);
      v51 = v21;
      if ( v21 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))(this & -(__int64)(this != 32));
      v22 = MPCGestureHandlerManager::GetInstance();
      if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v22, &v51) && (*(_BYTE *)(this + 3432) & 4) == 0 )
        goto LABEL_44;
      v52 = &v51;
      v51 = this & -(__int64)(this != 32);
      if ( v21 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))(this & -(__int64)(this != 32));
      v23 = MPCGestureHandlerManager::GetInstance();
      if ( (unsigned __int8)MPCGestureHandlerManager::IsHovering(v23, &v51) )
LABEL_44:
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
    }
    v24 = *(double *)(this + 3464);
    v25 = *(double *)(this + 3440);
    v26 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(this + 3448)) ^ _xmm) + v25;
    *(float *)(this + 3932) = (float)((float)*(double *)(this + 3456) + *(float *)(this + 3932)) * 0.5;
    *(float *)(this + 3936) = (float)(v24 + *(float *)(this + 3936)) * 0.5;
    *(float *)(this + 3940) = (float)(v26 + *(float *)(this + 3940)) * 0.5;
    v27 = MPCHolographicInputManager::GetInstance();
    v28 = v57;
    v29 = 23LL;
    do
    {
      *v28 = *(_OWORD *)v27;
      v28[1] = *((_OWORD *)v27 + 1);
      v28[2] = *((_OWORD *)v27 + 2);
      v28[3] = *((_OWORD *)v27 + 3);
      v28[4] = *((_OWORD *)v27 + 4);
      v28[5] = *((_OWORD *)v27 + 5);
      v28[6] = *((_OWORD *)v27 + 6);
      v28 += 8;
      *(v28 - 1) = *((_OWORD *)v27 + 7);
      v27 = (struct MPCHolographicInputManager *)((char *)v27 + 128);
      --v29;
    }
    while ( v29 );
    *v28 = *(_OWORD *)v27;
    v28[1] = *((_OWORD *)v27 + 1);
    v28[2] = *((_OWORD *)v27 + 2);
    v28[3] = *((_OWORD *)v27 + 3);
    v28[4] = *((_OWORD *)v27 + 4);
    v28[5] = *((_OWORD *)v27 + 5);
    v28[6] = *((_OWORD *)v27 + 6);
    v56[0] = v57[95];
    v56[1] = v57[96];
    v56[2] = v57[97];
    v56[3] = v57[98];
    MPCMath::OrientToGravity((__int64)v54, (__int64)v56, 0.89999998);
    v30 = *((_QWORD *)a2 + 2);
    v31 = (double)(int)v30;
    if ( v30 < 0 )
      v31 = v31 + 1.844674407370955e19;
    v32 = v31 * v4[499];
    v33 = v4[500];
    if ( v33 == 0.0 )
      v34 = FLOAT_1_0;
    else
      v34 = (float)(v32 - v33) / 0.02;
    *((float *)v4 + 1002) = v34;
    v4[500] = v32;
    v35 = *(float *)(this + 3976);
    v36 = (__m128)*(unsigned int *)(this + 3932);
    v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36.m128_f32[0]) & _xmm);
    if ( v37 >= *(float *)(this + 3880) )
    {
      v36.m128_f32[0] = v36.m128_f32[0] * *(float *)(this + 3896);
      v38 = v36.m128_f32[0] * v54[2];
      v39 = v36;
      v39.m128_f32[0] = (float)((float)(v36.m128_f32[0] * v54[1]) * v35) + *(float *)(this + 3924);
      v36.m128_f32[0] = (float)((float)(v36.m128_f32[0] * v54[0]) * v35) + *(float *)(this + 3920);
      v53 = (float)(v38 * v35) + *(float *)(this + 3928);
      *(_QWORD *)(this + 3920) = _mm_unpacklo_ps(v36, v39).m128_u64[0];
      *(float *)(this + 3928) = v53;
      *(float *)(this + 3944) = (float)((float)(*(float *)(this + 3932) * *(float *)(this + 3896)) * v35)
                              + *(float *)(this + 3944);
    }
    v40 = (__m128)*(unsigned int *)(this + 3936);
    v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v40.m128_f32[0]) & _xmm);
    if ( v41 >= *(float *)(this + 3880) )
    {
      v40.m128_f32[0] = v40.m128_f32[0] * *(float *)(this + 3896);
      v42 = v40.m128_f32[0] * v54[6];
      v43 = v40;
      v43.m128_f32[0] = (float)((float)(v40.m128_f32[0] * v54[5]) * v35) + *(float *)(this + 3924);
      v40.m128_f32[0] = (float)((float)(v40.m128_f32[0] * v54[4]) * v35) + *(float *)(this + 3920);
      v53 = (float)(v42 * v35) + *(float *)(this + 3928);
      *(_QWORD *)(this + 3920) = _mm_unpacklo_ps(v40, v43).m128_u64[0];
      *(float *)(this + 3928) = v53;
      *(float *)(this + 3948) = (float)((float)(*(float *)(this + 3896) * *(float *)(this + 3936)) * v35)
                              + *(float *)(this + 3948);
    }
    v44 = (__m128)*(unsigned int *)(this + 3940);
    v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44.m128_f32[0]) & _xmm);
    if ( v45 >= *(float *)(this + 3880) )
    {
      v44.m128_f32[0] = v44.m128_f32[0] * *(float *)(this + 3896);
      v46 = _mm_xor_ps(v44, (__m128)_xmm);
      v47 = v46.m128_f32[0] * v54[10];
      v48 = v46;
      v48.m128_f32[0] = (float)((float)(v46.m128_f32[0] * v54[9]) * v35) + *(float *)(this + 3924);
      v46.m128_f32[0] = (float)((float)(v46.m128_f32[0] * v54[8]) * v35) + *(float *)(this + 3920);
      v53 = (float)(v47 * v35) + *(float *)(this + 3928);
      *(_QWORD *)(this + 3920) = _mm_unpacklo_ps(v46, v48).m128_u64[0];
      *(float *)(this + 3928) = v53;
      *(float *)(this + 3952) = (float)((float)(*(float *)(this + 3896) * *(float *)(this + 3940)) * v35)
                              + *(float *)(this + 3952);
    }
    *(_OWORD *)(this + 3488) = *(_OWORD *)(this + 3424);
    *(_OWORD *)(this + 3504) = *(_OWORD *)(this + 3440);
    *(_OWORD *)(this + 3520) = *(_OWORD *)(this + 3456);
    *(_OWORD *)(this + 3536) = *(_OWORD *)(this + 3472);
    v52 = &v51;
    v51 = this & -(__int64)(this != 32);
    if ( v51 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 32)) + 8LL))(this & -(__int64)(this != 32));
    v49 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::OnGazeUpdate(v49, &v51);
  }
  else
  {
    if ( *(_DWORD *)(this + 3872) )
      goto LABEL_65;
    v52 = &v51;
    v51 = this & -(__int64)(this != 32);
    if ( v51 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 32)) + 8LL))(this & -(__int64)(this != 32));
    v50 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsHovering(v50, &v51) )
LABEL_65:
      MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
  }
}
