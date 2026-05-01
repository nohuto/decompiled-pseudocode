/*
 * XREFs of ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009461C
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800926F0 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800936D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093DE0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z @ 0x180094588 (-SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z.c)
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x1801779F0 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180181774 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::PositionView(__int64 a1, int a2)
{
  int v2; // eax
  HMONITOR v5; // rdi
  const char *v6; // r9
  __int64 v7; // rdx
  bool v9; // zf
  HWND WindowW; // rax
  int v11; // edi
  __int64 v12; // rdx
  HMONITOR v13; // rax
  int v14; // r14d
  int v15; // edi
  __int64 v16; // rcx
  int v17; // eax
  BOOL v18; // eax
  LONG bottom; // ecx
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // ebx
  POINT pt; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v26[40]; // [rsp+30h] [rbp-71h] BYREF
  struct tagRECT rcMonitor; // [rsp+58h] [rbp-49h] BYREF
  RECT rc; // [rsp+68h] [rbp-39h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp-29h] BYREF
  int nNumerator[4]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+Fh]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]
  HMONITOR v33; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = *(_DWORD *)(a1 + 328);
  if ( v2 == a2 && v2 != 1 )
    return 0LL;
  pt = 0LL;
  v5 = MonitorFromPoint(0LL, 1u);
  if ( v5 == (HMONITOR)-1LL )
  {
    v7 = 1418LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
             v6);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v7 = 1421LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
             v6);
  }
  v9 = *(_BYTE *)(a1 + 432) == 0;
  rcMonitor = mi.rcMonitor;
  if ( !v9 )
  {
    rcMonitor = mi.rcWork;
    if ( a2 == 1 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW )
      {
        if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(a1 + 472) + 152LL))(
                  *(_QWORD *)(a1 + 472),
                  &rcMonitor);
          if ( v11 < 0 )
          {
            v12 = 1437LL;
LABEL_14:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v12,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v11);
            return (unsigned int)v11;
          }
        }
      }
    }
  }
  memset(v26, 0, sizeof(v26));
  *(_DWORD *)&v26[16] = 96;
  *(_DWORD *)v26 = 100;
  *(_QWORD *)&v26[8] = 0x6400000064LL;
  v31 = *(_OWORD *)&v26[16];
  *(_OWORD *)nNumerator = *(_OWORD *)v26;
  v32 = *(_QWORD *)&v26[32];
  v13 = MonitorFromPoint(0LL, 1u);
  v33 = v13;
  if ( v13 )
    v11 = CImmersiveOrPrimaryMonitor::_initimpl(v13, (struct SCALINGINFO *const)nNumerator);
  else
    v11 = -2147024809;
  if ( v11 < 0 )
  {
    v12 = 1444LL;
    goto LABEL_14;
  }
  v14 = MulDiv((int)*(float *)(a1 + 156), nNumerator[0], 100);
  v15 = MulDiv((int)*(float *)(a1 + 160), nNumerator[0], 100);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v16 = *(_QWORD *)(a1 + 464);
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, RECT *, POINT *))(*(_QWORD *)v16 + 40LL))(v16, &rc, &pt);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5C1,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
      v18 = IsRectEmpty(&rc);
      bottom = rcMonitor.bottom;
      if ( !v18 && rcMonitor.bottom > rc.top )
      {
        if ( ((pt.x - 1) & 0xFFFFFFFD) == 0 )
          bottom = rc.top;
        rcMonitor.bottom = bottom;
      }
      v20 = *(float *)(a1 + 440);
      if ( v20 > 0.0 )
      {
        bottom -= (int)v20;
        rcMonitor.bottom = bottom;
      }
      rcMonitor.top = bottom - v15;
      CActionCenterExperienceManager::SetRectLeftRight((CActionCenterExperienceManager *)a1, &rcMonitor, v14);
    }
    else if ( a2 == 2 )
    {
      return 0LL;
    }
  }
  else
  {
    CActionCenterExperienceManager::SetRectLeftRight((CActionCenterExperienceManager *)a1, &rcMonitor, v14);
    v21 = *(float *)(a1 + 440);
    v22 = rcMonitor.bottom;
    if ( v21 > 0.0 )
    {
      v22 = rcMonitor.bottom - (int)v21;
      rcMonitor.bottom = v22;
    }
    if ( *(_BYTE *)(a1 + 433) )
      rcMonitor.top = v22 - v15;
  }
  v23 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(a1 + 112), &rcMonitor);
  v24 = v23;
  if ( v23 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5DC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v23);
  return v24;
}
