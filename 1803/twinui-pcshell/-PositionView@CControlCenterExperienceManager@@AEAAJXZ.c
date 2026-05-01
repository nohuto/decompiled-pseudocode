/*
 * XREFs of ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158498
 * Callers:
 *     ?DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801574E0 (-DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180157820 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?Show@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158D70 (-Show@CControlCenterExperienceManager@@AEAAJXZ.c)
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
__int64 __fastcall CControlCenterExperienceManager::PositionView(CControlCenterExperienceManager *this)
{
  HMONITOR v2; // rdi
  const char *v3; // r9
  __int64 v4; // rdx
  HMONITOR v5; // r8
  unsigned int LastError; // ebx
  double v7; // xmm0_8
  int v8; // edi
  LANGID ThreadUILanguage; // ax
  int v10; // eax
  struct tagRECT pt_8; // [rsp+30h] [rbp-D8h] BYREF
  struct tagMONITORINFO mi_4; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v14[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"EM_PositionViewActivity");
  v14[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v14);
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_18;
  *(_QWORD *)&pt_8.left = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 != (HMONITOR)-1LL )
  {
    mi_4.cbSize = 40;
    memset_0(&mi_4.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v2, &mi_4) )
    {
      v4 = 651LL;
      goto LABEL_6;
    }
    pt_8 = mi_4.rcMonitor;
    if ( *((_BYTE *)this + 400) )
      pt_8 = mi_4.rcWork;
    v7 = *((double *)this + 59);
    if ( v7 > 0.0 )
      pt_8.bottom -= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                       (ExperienceManagerUtils *)(unsigned int)(int)v7,
                       (__int64)v2,
                       v5);
    if ( *((_BYTE *)this + 401) )
      pt_8.top = pt_8.bottom
               - ExperienceManagerUtils::ScaleByPerMonitorDPI(
                   (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                   (__int64)v2,
                   v5);
    v8 = (int)(float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                       (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 37),
                       (__int64)v2,
                       v5);
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      pt_8.right = v8 + pt_8.left;
    else
      pt_8.left = pt_8.right - v8;
    v10 = CSingleViewShellExperience::SetPosition((CControlCenterExperienceManager *)((char *)this + 104), &pt_8);
    LastError = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_19;
    }
LABEL_18:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, 0);
    LastError = 0;
    goto LABEL_19;
  }
  v4 = 648LL;
LABEL_6:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v4,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                v3);
LABEL_19:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v14);
  return LastError;
}
