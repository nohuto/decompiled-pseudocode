/*
 * XREFs of ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C
 * Callers:
 *     ?ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095E50 (-ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180095F00 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180095FB0 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800975B8 (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x180098320 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800988C0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXII@Z @ 0x180091B4C (-StartActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097F30 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A0C4 (-ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A328 (-HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801D2CA0 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1801DCF38 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::TransitionToState(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  const struct _TlgProvider_t *v14; // rax
  const void *v15; // rdx
  HRESULT v16; // eax
  int v17; // eax
  _QWORD v19[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  int *v21; // [rsp+70h] [rbp-98h]
  int *v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+84h] [rbp-84h]
  int v25; // [rsp+A8h] [rbp-60h] BYREF
  const char *v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  char v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+160h] [rbp+58h]
  __int64 v32; // [rsp+168h] [rbp+60h]
  __int64 v33; // [rsp+170h] [rbp+68h]
  __int64 v34; // [rsp+178h] [rbp+70h]
  HSTRING_HEADER pData; // [rsp+188h] [rbp+80h] BYREF
  HSTRING string; // [rsp+1A0h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v19[1] = 0LL;
  v19[2] = v19;
  v19[3] = 0LL;
  LODWORD(v20) = 0;
  v21 = &v25;
  v22 = &v23;
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v25 = 0;
  v26 = "EM_TransitionToStateActivity";
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v34 = 0LL;
  v19[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity *)v19,
    *(_DWORD *)(a1 + 336),
    a2);
  if ( *(_DWORD *)(a1 + 336) == a2 )
  {
    v14 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v14 > 5u )
    {
      v15 = &unk_180259A67;
      goto LABEL_56;
    }
    goto LABEL_57;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 616),
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 624),
    0LL);
  v4 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1802599A9, (LPCGUID)(v22 + 2), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  v5 = *(_DWORD *)(a1 + 336);
  if ( (v5 & 0xFFFFFFFA) != 0 || v5 == 5 || (a2 & 0xFFFFFFFA) != 0 || a2 == 5 )
    goto LABEL_12;
  if ( (v5 & 0xFFFFFFFB) == 0 )
  {
LABEL_13:
    if ( (a2 & 0xFFFFFFFA) != 0 || a2 == 5 )
    {
LABEL_21:
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 320));
      goto LABEL_22;
    }
LABEL_15:
    if ( (v5 & 0xFFFFFFFA) != 0
      || v5 == 5
      || (a2 & 0xFFFFFFFA) != 0
      || a2 == 5
      || (v5 & 0xFFFFFFFB) != 0
      || (a2 & 0xFFFFFFFB) == 0 )
    {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
LABEL_12:
    if ( (v5 & 0xFFFFFFFB) != 0 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v6 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4DA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_23;
  }
LABEL_22:
  v7 = 0;
LABEL_23:
  if ( v7 >= 0 )
  {
    *(_DWORD *)(a1 + 340) = *(_DWORD *)(a1 + 336);
    *(_DWORD *)(a1 + 336) = a2;
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( !v10 )
      {
        string = 0LL;
        v16 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &pData, &string);
        if ( v16 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
          __debugbreak();
        }
        v17 = CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 120), string);
        v7 = v17;
        if ( v17 >= 0 )
        {
          v17 = CSingleViewShellExperience::Show(a1 + 120, 1LL);
          v7 = v17;
          if ( v17 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 656) != 1 )
              goto LABEL_48;
            v17 = CActionCenterExperienceManager::ShowInHolographic((CActionCenterExperienceManager *)a1);
            v7 = v17;
            if ( v17 >= 0 )
              goto LABEL_48;
            v9 = 1199LL;
          }
          else
          {
            v9 = 1195LL;
          }
        }
        else
        {
          v9 = 1194LL;
        }
LABEL_52:
        v8 = (unsigned int)v17;
        goto LABEL_53;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        if ( *(_QWORD *)(a1 + 648)
          && (v12 = CActionCenterExperienceManager::HideInHolographic((CActionCenterExperienceManager *)a1),
              v7 = v12,
              v12 < 0) )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x377,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v12);
        }
        else
        {
          v13 = CSingleViewShellExperience::Hide(a1 + 120, 0LL);
          v7 = v13;
          if ( v13 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x37A,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v13);
        }
        if ( v7 < 0 )
        {
          v8 = (unsigned int)v7;
          v9 = 1204LL;
          goto LABEL_53;
        }
        v14 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v14 > 5u )
        {
          v15 = &unk_1802599E5;
LABEL_56:
          TlgWrite(v14, v15, (LPCGUID)(v22 + 2), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
        }
LABEL_57:
        wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
        v7 = 0;
        goto LABEL_58;
      }
      if ( v11 != 2 )
        goto LABEL_57;
    }
    v17 = CSingleViewShellExperience::Show(a1 + 120, 0LL);
    v7 = v17;
    if ( v17 < 0 )
    {
      v9 = 1189LL;
      goto LABEL_52;
    }
LABEL_48:
    v14 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v14 > 5u )
    {
      v15 = &unk_1802599CC;
      goto LABEL_56;
    }
    goto LABEL_57;
  }
  v8 = (unsigned int)v7;
  v9 = 1180LL;
LABEL_53:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v8);
LABEL_58:
  v19[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return (unsigned int)v7;
}
