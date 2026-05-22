/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800379E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x180036B98 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180039800 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180060998 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  struct MPCGamepadInputHelper *Instance; // rax
  bool v6; // di
  int v7; // edx
  bool v8; // zf
  __int64 v9; // rax
  _QWORD *ButtonHoldHelper; // rax
  volatile signed __int32 *v11; // rdi
  char v12; // si
  struct MPCHolographicInputManager *v13; // rax
  struct MPCHolographicInputManager *v14; // rax
  __int64 v15; // rdx
  char *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  float v25; // xmm3_4
  __m128 v26; // xmm5
  __m128 v27; // xmm6
  float v28; // xmm4_4
  __m128 v29; // xmm2
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // eax
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v37; // [rsp+40h] [rbp-C8h]
  char v38; // [rsp+48h] [rbp-C0h] BYREF
  float v39; // [rsp+638h] [rbp+530h]
  float v40; // [rsp+63Ch] [rbp+534h]
  float v41; // [rsp+640h] [rbp+538h]
  float v42; // [rsp+648h] [rbp+540h]
  float v43; // [rsp+64Ch] [rbp+544h]
  float v44; // [rsp+650h] [rbp+548h]
  float v45; // [rsp+658h] [rbp+550h]
  float v46; // [rsp+65Ch] [rbp+554h]
  float v47; // [rsp+660h] [rbp+558h]
  float v48; // [rsp+668h] [rbp+560h]
  float v49; // [rsp+66Ch] [rbp+564h]
  float v50; // [rsp+670h] [rbp+568h]

  Instance = MPCGamepadInputHelper::GetInstance();
  v6 = !*((_BYTE *)Instance + 37) && !*((_BYTE *)a3 + 1072) && *((_BYTE *)Instance + 38) == 0;
  if ( !*((_BYTE *)this + 3878) && v6 )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 32), a3);
  v7 = *((_DWORD *)this + 858);
  *((_BYTE *)this + 3878) = v6;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 501),
    (v7 & 4) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 195),
    *((float *)a3 + 196),
    *((float *)a3 + 210));
  v8 = !MPCInputProviderBase::IsPrimary(this);
  v9 = *((_QWORD *)this + 499);
  if ( v8 )
  {
    if ( *(_BYTE *)(v9 + 8) )
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 68) + 48LL))(
        *((_QWORD *)this + 68),
        (char *)this + 568);
  }
  else
  {
    if ( *(_BYTE *)(v9 + 8) || !v6 )
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 68) + 48LL))(
        *((_QWORD *)this + 68),
        (char *)this + 568);
    else
      MPCGamepadProcessor::SendMPCInput((MPCGamepadProcessor *)((char *)this - 32), a3);
    ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 501), &v36);
    v11 = v37;
    v12 = *(_BYTE *)(*ButtonHoldHelper + 10LL);
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    if ( v12 )
    {
      v13 = MPCHolographicInputManager::GetInstance();
      *(_QWORD *)((char *)this + 3908) = *((_QWORD *)v13 + 22);
      *((_DWORD *)this + 979) = *((_DWORD *)v13 + 46);
      v14 = MPCHolographicInputManager::GetInstance();
      v15 = 23LL;
      v16 = &v38;
      do
      {
        v17 = *((_OWORD *)v14 + 1);
        *(_OWORD *)v16 = *(_OWORD *)v14;
        v18 = *((_OWORD *)v14 + 2);
        *((_OWORD *)v16 + 1) = v17;
        v19 = *((_OWORD *)v14 + 3);
        *((_OWORD *)v16 + 2) = v18;
        v20 = *((_OWORD *)v14 + 4);
        *((_OWORD *)v16 + 3) = v19;
        v21 = *((_OWORD *)v14 + 5);
        *((_OWORD *)v16 + 4) = v20;
        v22 = *((_OWORD *)v14 + 6);
        *((_OWORD *)v16 + 5) = v21;
        v23 = *((_OWORD *)v14 + 7);
        v14 = (struct MPCHolographicInputManager *)((char *)v14 + 128);
        *((_OWORD *)v16 + 6) = v22;
        v16 += 128;
        *((_OWORD *)v16 - 1) = v23;
        --v15;
      }
      while ( v15 );
      v24 = *((_OWORD *)v14 + 1);
      v25 = *((float *)this + 978);
      v26 = (__m128)*((unsigned int *)this + 977);
      v27 = (__m128)LODWORD(v25);
      v28 = *((float *)this + 979);
      v29 = v26;
      *(_OWORD *)v16 = *(_OWORD *)v14;
      v30 = *((_OWORD *)v14 + 2);
      *((_OWORD *)v16 + 1) = v24;
      v31 = *((_OWORD *)v14 + 3);
      *((_OWORD *)v16 + 2) = v30;
      v32 = *((_OWORD *)v14 + 4);
      *((_OWORD *)v16 + 3) = v31;
      v33 = *((_OWORD *)v14 + 5);
      *((_OWORD *)v16 + 4) = v32;
      v34 = *((_OWORD *)v14 + 6);
      *((_OWORD *)v16 + 5) = v33;
      *((_OWORD *)v16 + 6) = v34;
      v27.m128_f32[0] = (float)((float)((float)(v25 * v42) + (float)(v26.m128_f32[0] * v39)) + (float)(v28 * v45)) + v48;
      v29.m128_f32[0] = (float)((float)((float)(v26.m128_f32[0] * v40) + (float)(v25 * v43)) + (float)(v28 * v46)) + v49;
      v26.m128_f32[0] = (float)((float)((float)(v26.m128_f32[0] * v41) + (float)(v25 * v44)) + (float)(v28 * v47)) + v50;
      *((_QWORD *)this + 490) = _mm_unpacklo_ps(v27, v29).m128_u64[0];
      LODWORD(v37) = 0;
      *((_DWORD *)this + 982) = v26.m128_i32[0];
      v35 = (int)v37;
      *((_QWORD *)this + 493) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)this + 988) = v35;
    }
  }
}
