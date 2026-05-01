/*
 * XREFs of ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AA120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x1800AA088 (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnViewPropertiesChanging(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // edi
  HWND ForegroundWindow; // rax
  HMONITOR v5; // rsi
  ImeNotificationExperienceManager *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  const char *v10; // r9
  int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  struct tagRECT v15; // [rsp+40h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v14 = -2LL;
  try
  {
    *(_QWORD *)&v15.left = 0LL;
    *(_QWORD *)&v15.right = 0LL;
    if ( *((float *)a2 + 12) == *((float *)a2 + 11) )
    {
      v3 = (int)*((float *)a2 + 11);
      v13 = v3;
      ForegroundWindow = GetForegroundWindow();
      v5 = MonitorFromWindow(ForegroundWindow, 2u);
      memset(&mi, 0, sizeof(mi));
      mi.cbSize = 40;
      if ( GetMonitorInfoW(v5, &mi) )
      {
        v9 = ImeNotificationExperienceManager::CalculateScaling(v6, v3, v5, &mi, 0, &v13);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
            (const char *)(unsigned int)v9);
        v15.left = mi.rcMonitor.left + (mi.rcMonitor.right - mi.rcMonitor.left - v13) / 2;
        v15.top = mi.rcMonitor.top + (mi.rcMonitor.bottom - mi.rcMonitor.top - v13) / 2;
        v15.right = v13 + v15.left;
        v15.bottom = v13 + v15.top;
        if ( *((_QWORD *)this + 4) )
        {
          v11 = CSingleViewShellExperience::SetPosition((ImeNotificationExperienceManager *)((char *)this + 8), &v15);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xB3,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
              (const char *)(unsigned int)v11);
        }
        goto LABEL_12;
      }
      v7 = 2147500037LL;
      v8 = 120LL;
    }
    else
    {
      v7 = 2147549183LL;
      v8 = 111LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)v7);
LABEL_12:
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9B,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                           v10);
  }
  return result;
}
