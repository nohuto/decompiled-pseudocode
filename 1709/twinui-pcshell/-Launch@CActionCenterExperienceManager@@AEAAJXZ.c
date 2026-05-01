/*
 * XREFs of ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220
 * Callers:
 *     ?ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095E50 (-ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800964DC (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800975B8 (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800985E0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800930BC (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0060 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::Launch(CActionCenterExperienceManager *this)
{
  HWND WindowW; // rax
  const struct _TlgProvider_t *v3; // rax
  const void *v4; // rdx
  const struct _TlgProvider_t *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-A0h]
  int *v11; // [rsp+70h] [rbp-98h]
  int *v12; // [rsp+78h] [rbp-90h]
  int v13; // [rsp+80h] [rbp-88h] BYREF
  char v14; // [rsp+84h] [rbp-84h]
  int v15; // [rsp+A8h] [rbp-60h] BYREF
  const char *v16; // [rsp+B0h] [rbp-58h]
  __int64 v17; // [rsp+B8h] [rbp-50h]
  char v18; // [rsp+C0h] [rbp-48h]
  __int64 v19; // [rsp+C8h] [rbp-40h]
  _BYTE v20[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+160h] [rbp+58h]
  __int64 v22; // [rsp+168h] [rbp+60h]
  __int64 v23; // [rsp+170h] [rbp+68h]
  __int64 v24; // [rsp+178h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v9[1] = 0LL;
  v9[2] = v9;
  v9[3] = 0LL;
  LODWORD(v10) = 0;
  v11 = &v15;
  v12 = &v13;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v15 = 0;
  v16 = "EM_LaunchActivity";
  v17 = 0LL;
  v19 = 1LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  v23 = 0LL;
  v24 = 0LL;
  v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v9);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)this + 548) )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_180259159;
LABEL_10:
      TlgWrite(v3, v4, (LPCGUID)(v12 + 2), 0LL, 2u, &pData);
      goto LABEL_11;
    }
    goto LABEL_11;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_1802591BE;
      goto LABEL_10;
    }
LABEL_11:
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 77,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 78,
      0LL);
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    v7 = 0;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 40) == 2 )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_18025917B;
      goto LABEL_10;
    }
    goto LABEL_11;
  }
  v5 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
    TlgWrite(v5, &unk_18025919B, (LPCGUID)(v12 + 2), 0LL, 2u, &pData);
  v6 = CSingleViewShellExperience::Launch((CActionCenterExperienceManager *)((char *)this + 120));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_16;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x365,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_17:
  v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return v7;
}
