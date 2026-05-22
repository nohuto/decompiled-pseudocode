/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180058234
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180057580 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     _lambda_3e33307cb1e17c9b7f6fa64480bfac10_::operator() @ 0x18005770C (_lambda_3e33307cb1e17c9b7f6fa64480bfac10_--operator().c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x180060FA0 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r15d
  __int64 v9; // rdi
  char v10; // al
  int v11; // eax
  int v12; // eax
  MPCCursorManager *v13; // rcx
  int v14; // eax
  char v15; // al
  int v16; // eax
  __m128 v17; // xmm6
  __m128 v18; // xmm2
  float v19; // xmm1_4
  __int64 result; // rax
  int v21; // [rsp+28h] [rbp-18h]
  float v22; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  bool v24; // [rsp+60h] [rbp+20h] BYREF

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x31C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = a5;
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 168);
  *(_OWORD *)(v9 + 40) = *(_OWORD *)(a3 + 184);
  *(_OWORD *)(v9 + 56) = *(_OWORD *)(a3 + 200);
  *(_OWORD *)(v9 + 72) = *(_OWORD *)(a3 + 120);
  *(_OWORD *)(v9 + 88) = *(_OWORD *)(a3 + 136);
  *(_OWORD *)(v9 + 104) = *(_OWORD *)(a3 + 152);
  *(_OWORD *)v9 = *(_OWORD *)(a3 + 220);
  *(_QWORD *)(v9 + 16) = *(_QWORD *)(a3 + 236);
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 120LL))(a2);
  *(_DWORD *)(v9 + 152) = v5;
  *(_BYTE *)(v9 + 136) = v10;
  v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_BYTE *)(v9 + 160) = 0;
  *(_DWORD *)(v9 + 132) = v11;
  *(_QWORD *)(v9 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(v9 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(v9 + 161) = *(_BYTE *)a3;
  *(_DWORD *)(v9 + 164) = (__int64)(*(_QWORD *)(a1 + 3344) - *(_QWORD *)(a1 + 3336)) >> 3;
  v12 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 296LL))(a2);
  v24 = 0;
  *(_DWORD *)(v9 + 168) = v12;
  if ( v5 == 1 )
  {
    v13 = *(MPCCursorManager **)(a1 + 3152);
    if ( *((_BYTE *)v13 + 64) )
    {
      v14 = MPCCursorManager::ProcessProviderHitTest(v13, a2, (const struct HitTestResult3D *)a3, &v24);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x32D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      if ( v24 )
        goto LABEL_9;
    }
    else
    {
      v24 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3336) + 80LL))(**(_QWORD **)(a1 + 3336)) )
    {
      v15 = 0;
LABEL_10:
      *(_BYTE *)(v9 + 160) = v15;
      goto LABEL_11;
    }
LABEL_9:
    v15 = 1;
    goto LABEL_10;
  }
LABEL_11:
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3104) + 112LL))(*(_QWORD *)(a1 + 3104), v9);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x331,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x180058576LL);
  }
  v21 = *(_DWORD *)(a3 + 60);
  if ( v5 == 1 )
  {
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a3 + 52);
    *(_DWORD *)(a1 + 184) = v21;
    v17 = (__m128)*(unsigned int *)(a1 + 180);
    v18 = (__m128)*(unsigned int *)(a1 + 176);
    v19 = *(float *)(a1 + 184);
    v17.m128_f32[0] = (float)((float)((float)(v17.m128_f32[0] * *(float *)(a1 + 16))
                                    + (float)(*(float *)(a1 + 176) * *(float *)a1))
                            + (float)(v19 * *(float *)(a1 + 32)))
                    + *(float *)(a1 + 48);
    v18.m128_f32[0] = (float)((float)((float)(v18.m128_f32[0] * *(float *)(a1 + 4))
                                    + (float)(*(float *)(a1 + 180) * *(float *)(a1 + 20)))
                            + (float)(v19 * *(float *)(a1 + 36)))
                    + *(float *)(a1 + 52);
    v22 = (float)((float)((float)(*(float *)(a1 + 176) * *(float *)(a1 + 8))
                        + (float)(*(float *)(a1 + 180) * *(float *)(a1 + 24)))
                + (float)(v19 * *(float *)(a1 + 40)))
        + *(float *)(a1 + 56);
    *(_QWORD *)(a1 + 188) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    *(float *)(a1 + 196) = v22;
  }
  *(_OWORD *)(a1 + 3160) = *(_OWORD *)v9;
  *(_OWORD *)(a1 + 3176) = *(_OWORD *)(v9 + 16);
  *(_OWORD *)(a1 + 3192) = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(a1 + 3208) = *(_OWORD *)(v9 + 48);
  *(_OWORD *)(a1 + 3224) = *(_OWORD *)(v9 + 64);
  *(_OWORD *)(a1 + 3240) = *(_OWORD *)(v9 + 80);
  *(_OWORD *)(a1 + 3256) = *(_OWORD *)(v9 + 96);
  result = a1 + 3288;
  *(_OWORD *)(a1 + 3272) = *(_OWORD *)(v9 + 112);
  *(_OWORD *)(a1 + 3288) = *(_OWORD *)(v9 + 128);
  *(_OWORD *)(a1 + 3304) = *(_OWORD *)(v9 + 144);
  *(_OWORD *)(a1 + 3320) = *(_OWORD *)(v9 + 160);
  return result;
}
