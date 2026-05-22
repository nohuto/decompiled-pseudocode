/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004EF44
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180095628 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097404 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180019640 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     _lambda_e1179965494e4fae5678a8549412ec28_::operator() @ 0x18004F25C (_lambda_e1179965494e4fae5678a8549412ec28_--operator().c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180050038 (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180050574 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct IInputTarget *a5)
{
  struct IInputTarget *v5; // rbx
  unsigned int v7; // edi
  const char *v10; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v14; // eax
  unsigned int v15; // esi
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rax
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  struct IInputTarget *v26; // [rsp+50h] [rbp-B0h]
  _OWORD v27[3]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v28[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v29[520]; // [rsp+C0h] [rbp-40h] BYREF
  int v30; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v31[1744]; // [rsp+790h] [rbp+690h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+EA8h] [rbp+DA8h]

  v5 = a5;
  v7 = a3;
  v26 = a5;
  if ( !*(_BYTE *)(a1 + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !MPCHolographicInputManager::IsExclusiveTarget(a5) )
  {
    v25 = a1;
    if ( *(_BYTE *)(a1 + 2012) )
    {
      if ( a2 != 1 )
        goto LABEL_14;
      v12 = *(_OWORD *)(a4 + 88);
      v27[0] = *(_OWORD *)(a4 + 72);
      v13 = *(_OWORD *)(a4 + 104);
      v27[1] = v12;
      v27[2] = v13;
      lambda_e1179965494e4fae5678a8549412ec28_::operator()(&v25, v31, 4LL, 1LL, v7, v27);
      v14 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(*(_QWORD *)a5 + 24LL))(a5, v31);
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147417853 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2B8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v14);
    }
    if ( a2 == 1 )
    {
      *(_BYTE *)(a1 + 2012) = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      *(_DWORD *)(a1 + 2016) = MPCInputInfoHelper::m_nextSpectrumId;
      if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
      {
        v15 = *(_DWORD *)(a4 + 276);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v15);
        v7 = a3;
        MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v15, a3, 512);
        v5 = v26;
      }
      v18 = 2LL;
LABEL_18:
      v19 = *(_OWORD *)(a4 + 88);
      v28[0] = *(_OWORD *)(a4 + 72);
      v20 = *(_OWORD *)(a4 + 104);
      v28[1] = v19;
      v28[2] = v20;
      lambda_e1179965494e4fae5678a8549412ec28_::operator()(&v25, v29, v18, a2, v7, v28);
      if ( v30 == 3 )
      {
        v21 = *(_QWORD *)v5;
        v30 = 6;
        v22 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(v21 + 24))(v5, v29);
        if ( (int)(v22 + 0x80000000) >= 0 && v22 != -2147417853 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2F3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)v22);
        v30 = 3;
      }
      v23 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(*(_QWORD *)v5 + 24LL))(v5, v29);
      if ( ((v23 + 0x80000000) & 0x80000000) == 0 && v23 != -2147417853 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2FF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v23);
      return 0LL;
    }
LABEL_14:
    *(_BYTE *)(a1 + 2012) = 0;
    if ( a2 )
    {
      if ( a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2E4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v10);
        JUMPOUT(0x18004F259LL);
      }
      v18 = 4LL;
    }
    else
    {
      v18 = 3LL;
    }
    goto LABEL_18;
  }
  return 0LL;
}
