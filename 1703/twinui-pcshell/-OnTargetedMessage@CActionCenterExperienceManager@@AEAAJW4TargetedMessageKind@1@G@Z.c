/*
 * XREFs of ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180091EDC
 * Callers:
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180091E30 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007759C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800921F0 (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092398 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800927AC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180092944 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180096894 (--$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ??$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x1800969F8 (--$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x180096A84 (--$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801817B4 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnTargetedMessage(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  const struct _TlgProvider_t *v14; // rax
  EVENT_DATA_DESCRIPTOR *pData; // rcx
  const void *v16; // rdx
  NTSTATUS v17; // eax
  _QWORD v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v20[40]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+188h] [rbp+80h] BYREF
  char v22; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v19[1] = -2LL;
  if ( !a2 )
  {
    v8 = CActionCenterExperienceManager::OnShellReady((CActionCenterExperienceManager *)a1);
    if ( v8 < 0 )
    {
      v9 = 476LL;
      goto LABEL_40;
    }
    return 0LL;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v8 = CActionCenterExperienceManager::OnNewNotification((PVOID)a1);
    if ( v8 < 0 )
    {
      v9 = 480LL;
      goto LABEL_40;
    }
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::Start<>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v20);
    v11 = *(_QWORD *)(a1 + 480);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v11 + 32LL))(v11, 3LL, v19);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x229,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_23:
        v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
        wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
        wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
        goto LABEL_34;
      }
      if ( !*(_BYTE *)(a1 + 444) || LODWORD(v19[0]) )
      {
        v17 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
        if ( v17 < 0 )
        {
          v13 = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x231,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                  (const char *)(unsigned int)v17);
          goto LABEL_23;
        }
        v14 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v14 > 5u )
        {
          pData = (EVENT_DATA_DESCRIPTOR *)&v22;
          v16 = &unk_1801F718E;
          goto LABEL_32;
        }
      }
      else
      {
        v14 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v14 > 5u )
        {
          pData = &v21;
          v16 = &unk_1801F71AC;
LABEL_32:
          TlgWrite(v14, v16, (LPCGUID)(v20[6] + 8LL), 0LL, 2u, pData);
        }
      }
    }
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
    v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
    v13 = 0;
LABEL_34:
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1E4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          v8 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)0x8000FFFFLL);
          return (unsigned int)v8;
        }
        v8 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)a1);
        if ( v8 < 0 )
        {
          v9 = 498LL;
LABEL_40:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v9,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          return (unsigned int)v8;
        }
      }
      else
      {
        v8 = CActionCenterExperienceManager::RaiseApplicationEvent(
               (CActionCenterExperienceManager *)a1,
               L"ThemeChanged",
               1);
        if ( v8 < 0 )
        {
          v9 = 494LL;
          goto LABEL_40;
        }
      }
    }
    else
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>();
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 536),
        0LL);
    }
  }
  else
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ToastDidntLaunchInSpecifiedTime<unsigned long const &>();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 528),
      0LL);
    if ( *(_QWORD *)(a1 + 136) && (v10 = CSingleViewShellExperience::NavigateView(a1 + 112, 1LL), v8 = v10, v10 < 0) )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x28C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    else
      v8 = 0;
    if ( v8 < 0 )
    {
      v9 = 488LL;
      goto LABEL_40;
    }
  }
  return 0LL;
}
