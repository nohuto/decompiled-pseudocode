/*
 * XREFs of ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092BE4
 * Callers:
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800921F0 (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092398 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180092EFC (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093BD0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@$$V@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180096BDC (--$Start@$$V@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA-AV0.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180180AE0 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
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
  _QWORD v9[6]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v10; // [rsp+70h] [rbp-148h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::Start<>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v9);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)this + 460) )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_1801F6F7B;
LABEL_7:
      TlgWrite(v3, v4, (LPCGUID)(v10 + 8), 0LL, 2u, &pData);
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_1801F6FC0;
      goto LABEL_7;
    }
LABEL_8:
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 66,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 67,
      0LL);
LABEL_13:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    v7 = 0;
    goto LABEL_14;
  }
  v5 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
    TlgWrite(v5, &unk_1801F6F9D, (LPCGUID)(v10 + 8), 0LL, 2u, &pData);
  v6 = CSingleViewShellExperience::Launch((CActionCenterExperienceManager *)((char *)this + 112));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_13;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x313,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return v7;
}
