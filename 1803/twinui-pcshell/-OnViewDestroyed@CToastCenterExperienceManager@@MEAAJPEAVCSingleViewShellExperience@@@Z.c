/*
 * XREFs of ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180164DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801536E0 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180155564 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180162FFC (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?IsToastQueueEmpty@CToastCenterExperienceManager@@AEAAHXZ @ 0x180163274 (-IsToastQueueEmpty@CToastCenterExperienceManager@@AEAAHXZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163330 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewDestroyed(
        PTP_TIMER *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  LSTATUS ValueW; // eax
  bool v6; // zf
  CToastCenterExperienceManager *v7; // rcx
  int v8; // eax
  unsigned int pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pdwType; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h]
  _QWORD v14[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v13 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"EM_ViewDestroyedActivity");
  v14[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v14);
  if ( !this[58]
    || (v3 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)(this - 10)),
        v4 = v3,
        v3 >= 0) )
  {
    pdwType = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
               L"AllowAutoAppRestartOnCrash",
               0x10000012u,
               &pdwType,
               &pvData,
               pcbData);
    if ( ValueW )
      goto LABEL_12;
    if ( pdwType == 4 )
    {
      if ( pvData > 1 )
        goto LABEL_12;
      v6 = pvData == 1;
    }
    else
    {
      if ( pcbData[0] != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_12;
      ValueW = 0;
      v6 = (_WORD)pvData == 49;
    }
    LOBYTE(ValueW) = v6;
    if ( !ValueW )
    {
LABEL_15:
      wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, 0);
      v4 = 0;
      goto LABEL_16;
    }
LABEL_12:
    pdwType = 0;
    pcbData[0] = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
      L"AllowAutoAppRestartOnCrash",
      0x10000012u,
      &pdwType,
      &pvData,
      pcbData);
    if ( !(unsigned int)CToastCenterExperienceManager::IsToastQueueEmpty(v7) )
    {
      v8 = CToastCenterExperienceManager::Launch(this - 10);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1062LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
    }
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x418,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_16:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v14);
  return v4;
}
