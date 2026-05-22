/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     _lambda_f70aa1018a3677971a6458a957cae229_::operator() @ 0x180057FE4 (_lambda_f70aa1018a3677971a6458a957cae229_--operator().c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180058C6C (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180059198 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CC2F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct IInputTarget *a5)
{
  unsigned int v5; // ebx
  const char *v9; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // esi
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rax
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v25[3]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v26[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[696]; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+368h] [rbp+268h]
  _BYTE v29[2848]; // [rsp+BD0h] [rbp+AD0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1738h] [rbp+1638h]

  v5 = a3;
  if ( !*(_BYTE *)(a1 + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x280,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !MPCHolographicInputManager::IsExclusiveTarget(a5) )
  {
    v24 = a1;
    if ( *(_BYTE *)(a1 + 3132) )
    {
      if ( a2 == 1 )
      {
        v11 = *(_OWORD *)(a4 + 88);
        v25[0] = *(_OWORD *)(a4 + 72);
        v12 = *(_OWORD *)(a4 + 104);
        v25[1] = v11;
        v25[2] = v12;
        lambda_f70aa1018a3677971a6458a957cae229_::operator()(&v24, v29, 4LL, 1LL, v5, v25);
        v13 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(*(_QWORD *)a5 + 24LL))(a5, v29);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x2A6,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        goto LABEL_9;
      }
    }
    else if ( a2 == 1 )
    {
LABEL_9:
      *(_BYTE *)(a1 + 3132) = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      *(_DWORD *)(a1 + 3136) = MPCInputInfoHelper::m_nextSpectrumId;
      if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
      {
        v14 = *(_DWORD *)(a4 + 276);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v14);
        v5 = a3;
        MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v14, a3, 512);
      }
      v17 = 2LL;
LABEL_18:
      v18 = *(_OWORD *)(a4 + 88);
      v26[0] = *(_OWORD *)(a4 + 72);
      v19 = *(_OWORD *)(a4 + 104);
      v26[1] = v18;
      v26[2] = v19;
      lambda_f70aa1018a3677971a6458a957cae229_::operator()(&v24, v27, v17, a2, v5, v26);
      if ( v28 == 3 )
      {
        v20 = *(_QWORD *)a5;
        v28 = 6;
        v21 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(v20 + 24))(a5, v27);
        if ( v21 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x2DB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v21);
          __debugbreak();
        }
        v28 = 3;
      }
      v22 = (*(__int64 (__fastcall **)(struct IInputTarget *, _BYTE *))(*(_QWORD *)a5 + 24LL))(a5, v27);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x2E1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v22);
        __debugbreak();
      }
      return 0LL;
    }
    *(_BYTE *)(a1 + 3132) = 0;
    if ( a2 )
    {
      if ( a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2D1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
        __debugbreak();
      }
      v17 = 4LL;
    }
    else
    {
      v17 = 3LL;
    }
    goto LABEL_18;
  }
  return 0LL;
}
