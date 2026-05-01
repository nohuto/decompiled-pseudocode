/*
 * XREFs of ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009335C
 * Callers:
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180091B50 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180091C00 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180092EFC (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800939A0 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093DE0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092D5C (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180093630 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI0@Z @ 0x180096C88 (--$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18018329C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18018DC08 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::TransitionToState(__int64 a1, unsigned int a2)
{
  const struct _TlgProvider_t *v4; // rax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // eax
  const struct _TlgProvider_t *v12; // rax
  const void *v13; // rdx
  HRESULT v14; // eax
  _QWORD v16[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  HSTRING_HEADER pData; // [rsp+188h] [rbp+80h] BYREF
  HSTRING string; // [rsp+1A0h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::Start<unsigned int,unsigned int>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity *)v16);
  if ( *(_DWORD *)(a1 + 328) == a2 )
  {
    v12 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      v13 = &unk_1801F7884;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 528),
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 536),
    0LL);
  v4 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1801F77C6, (LPCGUID)(v17 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  v5 = *(_DWORD *)(a1 + 328);
  if ( v5 > 1 || a2 > 1 )
    goto LABEL_10;
  if ( !v5 )
  {
LABEL_11:
    if ( a2 > 1 )
    {
LABEL_16:
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 312));
      goto LABEL_17;
    }
LABEL_12:
    if ( v5 > 1 || a2 > 1 || v5 || !a2 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( a2 )
  {
LABEL_10:
    if ( v5 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v6 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x446,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
LABEL_17:
  v7 = 0;
LABEL_18:
  if ( v7 >= 0 )
  {
    *(_DWORD *)(a1 + 332) = *(_DWORD *)(a1 + 328);
    *(_DWORD *)(a1 + 328) = a2;
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v11 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)a1);
          v7 = v11;
          if ( v11 < 0 )
          {
            v9 = 1056LL;
LABEL_37:
            v8 = (unsigned int)v11;
            goto LABEL_38;
          }
          v12 = NotificationCenterLogging::Provider();
          if ( *(_DWORD *)v12 > 5u )
          {
            v13 = &unk_1801F7802;
LABEL_41:
            TlgWrite(v12, v13, (LPCGUID)(v17 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
            goto LABEL_42;
          }
        }
        goto LABEL_42;
      }
      string = 0LL;
      v14 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &pData, &string);
      if ( v14 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
        __debugbreak();
      }
      v11 = CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 112), string);
      v7 = v11;
      if ( v11 < 0 )
      {
        v9 = 1051LL;
        goto LABEL_37;
      }
      v11 = CSingleViewShellExperience::Show(a1 + 112, 1LL);
      v7 = v11;
      if ( v11 < 0 )
      {
        v9 = 1052LL;
        goto LABEL_37;
      }
    }
    else
    {
      v11 = CSingleViewShellExperience::Show(a1 + 112, 0LL);
      v7 = v11;
      if ( v11 < 0 )
      {
        v9 = 1046LL;
        goto LABEL_37;
      }
    }
    v12 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      v13 = &unk_1801F77E9;
      goto LABEL_41;
    }
LABEL_42:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    v7 = 0;
    goto LABEL_43;
  }
  v8 = (unsigned int)v7;
  v9 = 1038LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v8);
LABEL_43:
  v16[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
  return (unsigned int)v7;
}
