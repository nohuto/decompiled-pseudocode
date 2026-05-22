/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180093B20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180054744 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180095628 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180095E14 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3,
        const char *a4)
{
  struct MPCGamepadInputHelper *Instance; // rax
  bool v7; // di
  int v8; // edx
  bool IsPrimary; // al
  __int64 v10; // rcx
  char v11; // r14
  __int64 v12; // rax
  volatile signed __int32 *v13; // rdi
  char v14; // r15
  __int64 v15; // rax
  _OWORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  float v28; // xmm3_4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  float v31; // xmm4_4
  __m128 v32; // xmm2
  char v33; // [rsp+48h] [rbp-C0h] BYREF
  float v34; // [rsp+588h] [rbp+480h]
  float v35; // [rsp+58Ch] [rbp+484h]
  float v36; // [rsp+590h] [rbp+488h]
  float v37; // [rsp+598h] [rbp+490h]
  float v38; // [rsp+59Ch] [rbp+494h]
  float v39; // [rsp+5A0h] [rbp+498h]
  float v40; // [rsp+5A8h] [rbp+4A0h]
  float v41; // [rsp+5ACh] [rbp+4A4h]
  float v42; // [rsp+5B0h] [rbp+4A8h]
  float v43; // [rsp+5B8h] [rbp+4B0h]
  float v44; // [rsp+5BCh] [rbp+4B4h]
  float v45; // [rsp+5C0h] [rbp+4B8h]

  Instance = MPCGamepadInputHelper::GetInstance((__int64)this, (__int64)a2, (__int64)a3, a4);
  v7 = !*((_BYTE *)Instance + 37) && !*((_BYTE *)a3 + 896) && *((_BYTE *)Instance + 39) == 0;
  if ( !*((_BYTE *)this + 4494) && v7 )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 32), a3);
  v8 = *((_DWORD *)this + 1012);
  *((_BYTE *)this + 4494) = v7;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 574),
    (v8 & 4) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 151),
    *((float *)a3 + 152),
    *((float *)a3 + 166));
  IsPrimary = MPCInputProviderBase::IsPrimary((unsigned __int64)this);
  v10 = *((_QWORD *)this + 572);
  if ( IsPrimary )
  {
    if ( *(_BYTE *)(v10 + 8) || (v11 = 1, !v7) )
      v11 = 0;
    v12 = *((_QWORD *)this + 574);
    v13 = *(volatile signed __int32 **)(v12 + 24);
    if ( v13 )
    {
      _InterlockedAdd(v13 + 2, 1u);
      v13 = *(volatile signed __int32 **)(v12 + 24);
    }
    v14 = *(_BYTE *)(*(_QWORD *)(v12 + 16) + 10LL);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    if ( v14 )
    {
      MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 562) = *(_QWORD *)(v15 + 176);
      *((_DWORD *)this + 1126) = *(_DWORD *)(v15 + 184);
      MPCHolographicInputManager::GetInstance();
      v17 = 15LL;
      v18 = &v33;
      do
      {
        v19 = v16[1];
        *(_OWORD *)v18 = *v16;
        v20 = v16[2];
        *((_OWORD *)v18 + 1) = v19;
        v21 = v16[3];
        *((_OWORD *)v18 + 2) = v20;
        v22 = v16[4];
        *((_OWORD *)v18 + 3) = v21;
        v23 = v16[5];
        *((_OWORD *)v18 + 4) = v22;
        v24 = v16[6];
        *((_OWORD *)v18 + 5) = v23;
        v25 = v16[7];
        v16 += 8;
        *((_OWORD *)v18 + 6) = v24;
        v18 += 128;
        *((_OWORD *)v18 - 1) = v25;
        --v17;
      }
      while ( v17 );
      v26 = *v16;
      v27 = *((_QWORD *)v16 + 2);
      v28 = *((float *)this + 1125);
      v29 = (__m128)*((unsigned int *)this + 1124);
      v30 = (__m128)LODWORD(v28);
      v31 = *((float *)this + 1126);
      v32 = v29;
      *(_OWORD *)v18 = v26;
      *((_QWORD *)v18 + 2) = v27;
      v30.m128_f32[0] = (float)((float)((float)(v28 * v37) + (float)(v29.m128_f32[0] * v34)) + (float)(v31 * v40)) + v43;
      v32.m128_f32[0] = (float)((float)((float)(v29.m128_f32[0] * v35) + (float)(v28 * v38)) + (float)(v31 * v41)) + v44;
      v29.m128_f32[0] = (float)((float)((float)(v29.m128_f32[0] * v36) + (float)(v28 * v39)) + (float)(v31 * v42)) + v45;
      *(_QWORD *)((char *)this + 4508) = _mm_unpacklo_ps(v30, v32).m128_u64[0];
      *(_OWORD *)((char *)this + 4536) = 0LL;
      *((_DWORD *)this + 1129) = v29.m128_i32[0];
    }
    if ( v11 )
    {
      MPCGamepadProcessor::SendMPCInput((MPCGamepadProcessor *)((char *)this - 32), a3);
      return;
    }
  }
  else if ( !*(_BYTE *)(v10 + 8) )
  {
    return;
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 284) + 48LL))(
    *((_QWORD *)this + 284),
    (char *)this + 2296);
}
