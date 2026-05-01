/*
 * XREFs of ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007B700
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007BAD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007C01C (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180153B40 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007DB10 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007DC54 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::PositionView(CActionCenterExperienceManager *this)
{
  HMONITOR v2; // rdi
  const char *v3; // r9
  HMONITOR v4; // r8
  double v5; // xmm0_8
  int v6; // edi
  LANGID ThreadUILanguage; // ax
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v11; // rdx
  struct tagRECT pt_8; // [rsp+30h] [rbp-D8h] BYREF
  struct tagMONITORINFO mi_4; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v14[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v14,
    "EM_PositionViewActivity");
  v14[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v14);
  if ( *((_QWORD *)this + 18) )
  {
    *(_QWORD *)&pt_8.left = 0LL;
    v2 = MonitorFromPoint(0LL, 1u);
    if ( v2 == (HMONITOR)-1LL )
    {
      v11 = 875LL;
    }
    else
    {
      mi_4.cbSize = 40;
      memset_0(&mi_4.rcMonitor, 0, 0x24uLL);
      if ( GetMonitorInfoW(v2, &mi_4) )
      {
        pt_8 = mi_4.rcMonitor;
        if ( *((_BYTE *)this + 416) )
          pt_8 = mi_4.rcWork;
        v5 = *((double *)this + 65);
        if ( v5 > 0.0 )
          pt_8.bottom -= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                           (ExperienceManagerUtils *)(unsigned int)(int)v5,
                           (int)v2,
                           v4);
        if ( *((_BYTE *)this + 417) )
          pt_8.top = pt_8.bottom
                   - ExperienceManagerUtils::ScaleByPerMonitorDPI(
                       (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 42),
                       (int)v2,
                       v4);
        v6 = (int)(float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 41),
                                (int)v2,
                                v4);
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          pt_8.right = v6 + pt_8.left;
        else
          pt_8.left = pt_8.right - v6;
        v8 = CSingleViewShellExperience::SetPosition((CActionCenterExperienceManager *)((char *)this + 120), &pt_8);
        LastError = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x392,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v8,
            -2);
          goto LABEL_14;
        }
        goto LABEL_13;
      }
      v11 = 878LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v11,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                  v3);
    goto LABEL_14;
  }
LABEL_13:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v14, 0LL);
  LastError = 0;
LABEL_14:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v14);
  return LastError;
}
