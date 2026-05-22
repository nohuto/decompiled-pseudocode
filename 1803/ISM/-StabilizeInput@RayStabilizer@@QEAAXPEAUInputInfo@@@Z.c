/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x1800576CC
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z @ 0x180049AC0 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18005790C (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x180057BC8 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x18005AA68 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall RayStabilizer::StabilizeInput(RayStabilizer *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  bool v4; // zf
  __int32 v5; // r14d
  __int64 v8; // xmm1_8
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // xmm1_8
  __int128 v27; // [rsp+20h] [rbp-69h] BYREF
  __int64 v28; // [rsp+30h] [rbp-59h]
  __m256i v29; // [rsp+40h] [rbp-49h] BYREF
  __int128 v30; // [rsp+60h] [rbp-29h]
  __int128 v31; // [rsp+70h] [rbp-19h]
  __int128 v32; // [rsp+80h] [rbp-9h]
  __int128 v33; // [rsp+90h] [rbp+7h]
  int v34; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 4) == 0LL;
  v5 = 1;
  v8 = *(_QWORD *)((char *)a2 + 556);
  *(_OWORD *)((char *)v29.m256i_i64 + 4) = *(_OWORD *)((char *)a2 + 540);
  v29.m256i_i32[0] = 1;
  *(__int64 *)((char *)&v29.m256i_i64[2] + 4) = v8;
  if ( !v4 && (*((_BYTE *)this + 44) & 1) != 0 )
  {
    RayStabilizer::PerformLowPassFilterStabilization(this, (struct RayStabilizationResult *)&v29);
    v5 = v29.m256i_i32[0];
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 <= *((_QWORD *)this + 4) + 1LL )
  {
    std::deque<RayStabilizationResult>::_Growmap(this);
    v9 = *((_QWORD *)this + 2);
  }
  v4 = ((v9 - 1) & *((_QWORD *)this + 3)) == 0;
  *((_QWORD *)this + 3) &= v9 - 1;
  v10 = *((_QWORD *)this + 3);
  if ( v4 )
    v10 = *((_QWORD *)this + 2);
  v11 = v10 - 1;
  v12 = *((_QWORD *)this + 1);
  v13 = v11 & (*((_QWORD *)this + 2) - 1LL);
  if ( !*(_QWORD *)(v12 + 8 * v13) )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v13) = operator new(0x64uLL);
    v12 = *((_QWORD *)this + 1);
  }
  v14 = *(_QWORD *)(v12 + 8 * v13);
  v15 = *(_OWORD *)&v29.m256i_u64[2];
  v16 = v34;
  *(_OWORD *)v14 = *(_OWORD *)v29.m256i_i8;
  v17 = v30;
  *(_OWORD *)(v14 + 16) = v15;
  v18 = v31;
  *(_OWORD *)(v14 + 32) = v17;
  v19 = v32;
  *(_OWORD *)(v14 + 48) = v18;
  v20 = v33;
  *(_OWORD *)(v14 + 64) = v19;
  *(_OWORD *)(v14 + 80) = v20;
  *(_DWORD *)(v14 + 96) = v16;
  *((_QWORD *)this + 3) = v11;
  v21 = *((_QWORD *)this + 4) + 1LL;
  *((_QWORD *)this + 4) = v21;
  v22 = *((unsigned int *)this + 10);
  if ( v21 > v22 )
  {
    for ( ; v21 < v22; v21 = *((_QWORD *)this + 4) )
    {
      v23 = *((_QWORD *)this + 2);
      if ( v23 <= v21 + 1 )
      {
        std::deque<RayStabilizationResult>::_Growmap(this);
        v23 = *((_QWORD *)this + 2);
      }
      *((_QWORD *)this + 3) &= v23 - 1;
      v24 = (*((_QWORD *)this + 4) + *((_QWORD *)this + 3)) & (*((_QWORD *)this + 2) - 1LL);
      if ( !*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v24) )
        *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v24) = operator new(0x64uLL);
      **(_DWORD **)(*((_QWORD *)this + 1) + 8 * v24) = 0;
      ++*((_QWORD *)this + 4);
    }
    v25 = *((_QWORD *)this + 4);
    while ( v22 < v25 )
    {
      *((_QWORD *)this + 4) = --v25;
      if ( !v25 )
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
    __debugbreak();
  }
  RayStabilizationResult::GetAtStep(&v29, &v27, (unsigned int)(v5 - 1));
  v26 = v28;
  *(_OWORD *)((char *)a2 + 540) = v27;
  *(_QWORD *)((char *)a2 + 556) = v26;
}
