/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x18005CC64
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z @ 0x18005FF20 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18005CE5C (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18005D120 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x18006341C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall RayStabilizer::StabilizeInput(RayStabilizer *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  bool v4; // zf
  __int32 v5; // r14d
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // xmm1_8
  __int128 v24; // [rsp+20h] [rbp-69h] BYREF
  __int64 v25; // [rsp+30h] [rbp-59h]
  __m256i v26; // [rsp+40h] [rbp-49h] BYREF
  __int128 v27; // [rsp+60h] [rbp-29h]
  __int128 v28; // [rsp+70h] [rbp-19h]
  __int128 v29; // [rsp+80h] [rbp-9h]
  __int128 v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 4) == 0LL;
  v5 = 1;
  v8 = *(_QWORD *)((char *)a2 + 732);
  *(_OWORD *)((char *)v26.m256i_i64 + 4) = *(_OWORD *)((char *)a2 + 716);
  v26.m256i_i32[0] = 1;
  *(__int64 *)((char *)&v26.m256i_i64[2] + 4) = v8;
  if ( !v4 && (*((_BYTE *)this + 44) & 1) != 0 )
  {
    RayStabilizer::PerformLowPassFilterStabilization(this, (struct RayStabilizationResult *)&v26);
    v5 = v26.m256i_i32[0];
  }
  if ( *((_QWORD *)this + 2) <= (unsigned __int64)(*((_QWORD *)this + 4) + 1LL) )
    std::deque<RayStabilizationResult>::_Growmap(this);
  v9 = *((_QWORD *)this + 2) - 1LL;
  v4 = (v9 & *((_QWORD *)this + 3)) == 0;
  *((_QWORD *)this + 3) &= v9;
  v10 = *((_QWORD *)this + 3);
  if ( v4 )
    v10 = *((_QWORD *)this + 2);
  v11 = v10 - 1;
  v12 = v11 & (*((_QWORD *)this + 2) - 1LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v12) )
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v12) = operator new(0x64uLL);
  v13 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v12);
  if ( v13 )
  {
    v14 = *(_OWORD *)&v26.m256i_u64[2];
    v15 = v31;
    *(_OWORD *)v13 = *(_OWORD *)v26.m256i_i8;
    v16 = v27;
    *(_OWORD *)(v13 + 16) = v14;
    v17 = v28;
    *(_OWORD *)(v13 + 32) = v16;
    v18 = v29;
    *(_OWORD *)(v13 + 48) = v17;
    v19 = v30;
    *(_OWORD *)(v13 + 64) = v18;
    *(_OWORD *)(v13 + 80) = v19;
    *(_DWORD *)(v13 + 96) = v15;
  }
  *((_QWORD *)this + 3) = v11;
  ++*((_QWORD *)this + 4);
  v20 = *((unsigned int *)this + 10);
  if ( *((_QWORD *)this + 4) > v20 )
  {
    for ( ; *((_QWORD *)this + 4) < v20; ++*((_QWORD *)this + 4) )
    {
      if ( *((_QWORD *)this + 2) <= (unsigned __int64)(*((_QWORD *)this + 4) + 1LL) )
        std::deque<RayStabilizationResult>::_Growmap(this);
      *((_QWORD *)this + 3) &= *((_QWORD *)this + 2) - 1LL;
      v21 = (*((_QWORD *)this + 2) - 1LL) & (*((_QWORD *)this + 4) + *((_QWORD *)this + 3));
      if ( !*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v21) )
        *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v21) = operator new(0x64uLL);
      v22 = *(_DWORD **)(*((_QWORD *)this + 1) + 8 * v21);
      if ( v22 )
        *v22 = 0;
    }
    while ( v20 < *((_QWORD *)this + 4) )
    {
      v4 = (*((_QWORD *)this + 4))-- == 1LL;
      if ( v4 )
        *((_QWORD *)this + 3) = 0LL;
    }
  }
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      a4);
    JUMPOUT(0x18005CE5ALL);
  }
  RayStabilizationResult::GetAtStep(&v26, &v24, (unsigned int)(v5 - 1));
  v23 = v25;
  *(_OWORD *)((char *)a2 + 716) = v24;
  *(_QWORD *)((char *)a2 + 732) = v23;
}
