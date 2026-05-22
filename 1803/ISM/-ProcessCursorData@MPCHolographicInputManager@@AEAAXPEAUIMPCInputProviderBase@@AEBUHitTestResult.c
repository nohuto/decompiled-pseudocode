/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004F5D4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E784 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     _lambda_0715eb120d1477447f28b84fe1ba39f2_::operator() @ 0x18004E924 (_lambda_0715eb120d1477447f28b84fe1ba39f2_--operator().c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18005850C (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r12d
  char v9; // al
  int v10; // eax
  int v11; // eax
  char v12; // di
  MPCCursorManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  int v17; // xmm1_4
  __int64 *v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // eax
  int v21; // eax
  __m128 v22; // xmm6
  __m128 v23; // xmm2
  float v24; // xmm1_4
  float v25; // xmm5_4
  __int64 result; // rax
  bool v27; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-38h]
  _QWORD v29[2]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x344,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 168);
  *(_OWORD *)(a5 + 40) = *(_OWORD *)(a3 + 184);
  *(_OWORD *)(a5 + 56) = *(_OWORD *)(a3 + 200);
  *(_OWORD *)(a5 + 72) = *(_OWORD *)(a3 + 120);
  *(_OWORD *)(a5 + 88) = *(_OWORD *)(a3 + 136);
  *(_OWORD *)(a5 + 104) = *(_OWORD *)(a3 + 152);
  *(_OWORD *)a5 = *(_OWORD *)(a3 + 220);
  *(_QWORD *)(a5 + 16) = *(_QWORD *)(a3 + 236);
  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 120LL))(a2);
  *(_DWORD *)(a5 + 152) = v5;
  *(_BYTE *)(a5 + 136) = v9;
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_BYTE *)(a5 + 160) = 0;
  *(_DWORD *)(a5 + 132) = v10;
  *(_QWORD *)(a5 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(a5 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(a5 + 161) = *(_BYTE *)a3;
  *(_DWORD *)(a5 + 164) = (__int64)(*(_QWORD *)(a1 + 2232) - *(_QWORD *)(a1 + 2224)) >> 3;
  v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 304LL))(a2);
  v12 = 1;
  v27 = 0;
  *(_DWORD *)(a5 + 168) = v11;
  if ( v5 == 1 )
  {
    v13 = *(MPCCursorManager **)(a1 + 2032);
    if ( *((_BYTE *)v13 + 64) )
    {
      v14 = MPCCursorManager::ProcessProviderHitTest(v13, a2, (const struct HitTestResult3D *)a3, &v27);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x355,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      if ( v27 )
        goto LABEL_9;
    }
    else
    {
      v27 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 2224) + 80LL))(**(_QWORD **)(a1 + 2224)) )
      v12 = 0;
LABEL_9:
    *(_BYTE *)(a5 + 160) = v12;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1992) + 96LL))(*(_QWORD *)(a1 + 1992), a5);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x359,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v17 = *(_DWORD *)(a3 + 56);
  LODWORD(v28[0]) = *(_DWORD *)(a3 + 52);
  LODWORD(v28[1]) = *(_DWORD *)(a3 + 60);
  HIDWORD(v28[0]) = v17;
  v29[0] = 0LL;
  LODWORD(v29[1]) = 0;
  if ( !*(_BYTE *)(a1 + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x59,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
      v16);
    JUMPOUT(0x18004F9AELL);
  }
  v18 = *(__int64 **)(a1 + 2024);
  v19 = *v18;
  v20 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 320LL))(a2);
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v19 + 120))(v18, v20, v29) >= 0 )
  {
    LODWORD(v28[0]) = v29[0];
    *(_QWORD *)((char *)v28 + 4) = *(_QWORD *)((char *)v29 + 4);
  }
  v21 = v28[1];
  *(_QWORD *)(a1 + 176) = v28[0];
  *(_DWORD *)(a1 + 184) = v21;
  v22 = (__m128)*(unsigned int *)(a1 + 180);
  v23 = (__m128)*(unsigned int *)(a1 + 176);
  v24 = *(float *)(a1 + 184);
  v22.m128_f32[0] = (float)((float)((float)(v22.m128_f32[0] * *(float *)(a1 + 16))
                                  + (float)(*(float *)(a1 + 176) * *(float *)a1))
                          + (float)(v24 * *(float *)(a1 + 32)))
                  + *(float *)(a1 + 48);
  v23.m128_f32[0] = (float)((float)((float)(v23.m128_f32[0] * *(float *)(a1 + 4))
                                  + (float)(*(float *)(a1 + 180) * *(float *)(a1 + 20)))
                          + (float)(v24 * *(float *)(a1 + 36)))
                  + *(float *)(a1 + 52);
  v25 = (float)((float)((float)(*(float *)(a1 + 176) * *(float *)(a1 + 8))
                      + (float)(*(float *)(a1 + 180) * *(float *)(a1 + 24)))
              + (float)(v24 * *(float *)(a1 + 40)))
      + *(float *)(a1 + 56);
  *(_QWORD *)(a1 + 188) = _mm_unpacklo_ps(v22, v23).m128_u64[0];
  *(float *)&v29[1] = v25;
  *(float *)(a1 + 196) = v25;
  *(_OWORD *)(a1 + 2048) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 2064) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 2080) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 2096) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 2112) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 2128) = *(_OWORD *)(a5 + 80);
  *(_OWORD *)(a1 + 2144) = *(_OWORD *)(a5 + 96);
  result = a1 + 2176;
  *(_OWORD *)(a1 + 2160) = *(_OWORD *)(a5 + 112);
  *(_OWORD *)(a1 + 2176) = *(_OWORD *)(a5 + 128);
  *(_OWORD *)(a1 + 2192) = *(_OWORD *)(a5 + 144);
  *(_OWORD *)(a1 + 2208) = *(_OWORD *)(a5 + 160);
  return result;
}
