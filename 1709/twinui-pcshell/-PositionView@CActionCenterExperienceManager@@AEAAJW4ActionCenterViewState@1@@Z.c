/*
 * XREFs of ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800990F8
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180096C50 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180097FD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800988C0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z @ 0x180099068 (-SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z.c)
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801C35C0 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1801C361C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x1801C3680 (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x1801C3AC8 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1801C3BEC (-LoadScalingOverrides@@YAXXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::PositionView(__int64 a1, int a2)
{
  int v4; // eax
  const char *v5; // r9
  HMONITOR v6; // r15
  __int64 v7; // rdx
  HWND WindowW; // rax
  _QWORD *v10; // r12
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 *v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  HMONITOR v26; // rax
  signed int v27; // r15d
  signed int LastError; // eax
  enum DEVICE_SCALE_FACTOR v29; // ebx
  struct tagSIZE v30; // rbx
  struct tagSIZE v31; // rdi
  enum DEVICE_SCALE_FACTOR v32; // r12d
  unsigned int v33; // eax
  int v34; // ebx
  int v35; // edi
  int v36; // eax
  BOOL v37; // eax
  LONG top; // ecx
  float v39; // xmm0_4
  float v40; // xmm0_4
  int bottom; // ecx
  int v42; // eax
  _QWORD *v43; // [rsp+30h] [rbp-D0h] BYREF
  float v44; // [rsp+38h] [rbp-C8h]
  float v45; // [rsp+3Ch] [rbp-C4h]
  _BYTE v46[40]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h]
  RECT rc; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcMonitor; // [rsp+80h] [rbp-80h] BYREF
  int nNumerator[14]; // [rsp+90h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v52[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v53; // [rsp+F8h] [rbp-8h]
  unsigned int v54; // [rsp+FCh] [rbp-4h]
  struct tagSIZE v55; // [rsp+110h] [rbp+10h]
  struct tagSIZE v56; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v47 = -2LL;
  v4 = *(_DWORD *)(a1 + 336);
  if ( v4 == a2 && v4 != 1 && v4 != 4 )
    return 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v6 = MonitorFromPoint(0LL, 1u);
  if ( v6 == (HMONITOR)-1LL )
  {
    v7 = 1583LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
             v5);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v6, &mi) )
  {
    v7 = 1586LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
             v5);
  }
  rcMonitor = mi.rcMonitor;
  if ( *(_BYTE *)(a1 + 520) )
  {
    rcMonitor = mi.rcWork;
    if ( a2 == 1 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW )
      {
        if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
        {
          v10 = (_QWORD *)(a1 + 560);
          if ( *(_QWORD *)(a1 + 560) )
            goto LABEL_25;
          *(_QWORD *)&rc.left = 0LL;
          ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&rc.left);
          Instance = CoCreateInstance(
                       &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                       0LL,
                       0x404u,
                       &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                       (LPVOID *)ppv);
          if ( Instance < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x646,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)Instance);
LABEL_23:
            v23 = *(_QWORD *)&rc.left;
            if ( *(_QWORD *)&rc.left )
            {
              *(_QWORD *)&rc.left = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
LABEL_25:
            if ( *v10 )
            {
              v24 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(*(_QWORD *)*v10 + 152LL))(*v10, &rcMonitor);
              if ( v24 < 0 )
              {
                v25 = 1620LL;
LABEL_28:
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)v25,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                  (const char *)(unsigned int)v24);
                return (unsigned int)v24;
              }
            }
            goto LABEL_29;
          }
          v43 = 0LL;
          v13 = *(_QWORD *)&rc.left;
          v14 = **(_QWORD **)&rc.left;
          v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v43);
          v16 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(v14 + 24))(
                  v13,
                  &SID_IImmersiveMonitorService,
                  &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                  v15);
          v17 = retaddr;
          if ( v16 >= 0 )
          {
            v19 = v43;
            v20 = *v43;
            v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)(a1 + 560));
            v16 = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *, __int64 *))(v20 + 72))(
                    v19,
                    v6,
                    &SID_EdgeUi,
                    &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                    v21);
            v17 = retaddr;
            if ( v16 >= 0 )
              goto LABEL_21;
            v18 = 1612LL;
          }
          else
          {
            v18 = 1610LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)v18,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v16);
LABEL_21:
          v22 = (__int64)v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_23;
        }
      }
    }
  }
LABEL_29:
  memset(v46, 0, sizeof(v46));
  *(_DWORD *)v46 = 100;
  *(_QWORD *)&v46[8] = 0x6400000064LL;
  *(_DWORD *)&v46[16] = 96;
  *(_OWORD *)nNumerator = *(_OWORD *)v46;
  v26 = MonitorFromPoint(0LL, 1u);
  if ( v26 )
  {
    if ( !(unsigned int)GetCurrentDpiInfo(v26, v52) )
    {
      LastError = GetLastError();
      v27 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v27 = LastError;
      if ( v27 >= 0 )
        v27 = -2147467259;
      goto LABEL_56;
    }
    v27 = 0;
    LoadScalingOverrides();
    v29 = g_legacyCompatScalingOverride;
    if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
      v29 = v53;
    nNumerator[0] = v29;
    if ( (unsigned int)QuirkIsEnabled(589832LL) )
    {
      nNumerator[0] = GetLegacyModernScaleFactor(v53);
      GetLegacyModernScaleFactor(v54);
    }
    else if ( (unsigned int)QuirkIsEnabled(589831LL) )
    {
      v30 = v56;
      v31 = v55;
      LoadScalingOverrides();
      v32 = g_legacyCompatScalingOverride;
      if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
        v32 = CalcBucketedScaleFactor(v31, v30);
      v33 = CalcBucketedScaleFactor(v31, v30);
      ScalingCompatCalculationTelemetry(0LL, v33, (unsigned int)v32);
      nNumerator[0] = v32;
    }
    else if ( (unsigned int)QuirkIsEnabled(589834LL) )
    {
      switch ( v29 )
      {
        case SCALE_175_PERCENT:
          v29 = SCALE_150_PERCENT;
          break;
        case SCALE_225_PERCENT:
          v29 = SCALE_200_PERCENT;
          break;
        case SCALE_350_PERCENT:
          v29 = SCALE_300_PERCENT;
          break;
      }
      nNumerator[0] = v29;
    }
    GetStartTilesScaleFactor((const struct _DPI_INFORMATION *)v52, (unsigned int *)&nNumerator[3]);
  }
  else
  {
    v27 = -2147024809;
  }
  if ( v27 < 0 )
  {
LABEL_56:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x65C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
    return (unsigned int)v27;
  }
  v34 = MulDiv((int)*(float *)(a1 + 164), nNumerator[0], 100);
  v35 = MulDiv((int)*(float *)(a1 + 168), nNumerator[0], 100);
  if ( !a2 )
  {
LABEL_72:
    CActionCenterExperienceManager::SetRectLeftRight((CActionCenterExperienceManager *)a1, &rcMonitor, v34);
    v40 = *(float *)(a1 + 528);
    bottom = rcMonitor.bottom;
    if ( v40 > 0.0 )
    {
      bottom = rcMonitor.bottom - (int)v40;
      rcMonitor.bottom = bottom;
    }
    if ( *(_BYTE *)(a1 + 521) )
      rcMonitor.top = bottom - v35;
    goto LABEL_76;
  }
  if ( a2 == 1 )
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    v36 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD **))(**(_QWORD **)(a1 + 552) + 40LL))(
            *(_QWORD *)(a1 + 552),
            &rc,
            &v43);
    if ( v36 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x67A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v36);
    v37 = IsRectEmpty(&rc);
    top = rcMonitor.bottom;
    if ( !v37 && rcMonitor.bottom > rc.top )
    {
      if ( (((_DWORD)v43 - 1) & 0xFFFFFFFD) == 0 )
        top = rc.top;
      rcMonitor.bottom = top;
    }
    v39 = *(float *)(a1 + 528);
    if ( v39 > 0.0 )
    {
      top -= (int)v39;
      rcMonitor.bottom = top;
    }
    rcMonitor.top = top - v35;
    CActionCenterExperienceManager::SetRectLeftRight((CActionCenterExperienceManager *)a1, &rcMonitor, v34);
LABEL_76:
    *(struct tagRECT *)(a1 + 672) = rcMonitor;
    if ( *(_QWORD *)(a1 + 648) && *(_DWORD *)(a1 + 656) == 1 && a2 == 1 )
    {
      *(_QWORD *)&rc.left = 0LL;
      rc.right = MulDiv((int)*(float *)(a1 + 164), 150, 100);
      rc.bottom = MulDiv((int)*(float *)(a1 + 168), 150, 100);
      v24 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(a1 + 120), &rc);
      if ( v24 < 0 )
      {
        v25 = 1695LL;
        goto LABEL_28;
      }
      v43 = 0LL;
      v44 = (float)(*(_DWORD *)(a1 + 680) - *(_DWORD *)(a1 + 672));
      v45 = (float)(*(_DWORD *)(a1 + 684) - *(_DWORD *)(a1 + 676));
      v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD **))(**(_QWORD **)(a1 + 648) + 64LL))(
              *(_QWORD *)(a1 + 648),
              *(_QWORD *)(a1 + 136),
              *(_QWORD *)(a1 + 144),
              &v43);
      if ( v42 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6A3,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v42);
    }
    else
    {
      v24 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(a1 + 120), &rcMonitor);
      if ( v24 < 0 )
      {
        v25 = 1703LL;
        goto LABEL_28;
      }
    }
    return 0LL;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 4 )
      goto LABEL_76;
    goto LABEL_72;
  }
  return 0LL;
}
