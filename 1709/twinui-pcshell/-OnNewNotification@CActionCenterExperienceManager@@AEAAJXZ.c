/*
 * XREFs of ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007A1EC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXI@Z @ 0x18009105C (-StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITeleme.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z @ 0x180097878 (-GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0E74 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnNewNotification(char *pv)
{
  const struct _TlgProvider_t *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rax
  const void *v7; // rdx
  PTP_TIMER *v8; // rsi
  struct _TP_TIMER *v9; // rcx
  const struct _TlgProvider_t *v10; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const struct _TlgProvider_t *v12; // rax
  const struct _TlgProvider_t *v13; // rax
  NTSTATUS v14; // eax
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h]
  int pvParam; // [rsp+48h] [rbp-C0h] BYREF
  char v19; // [rsp+4Ch] [rbp-BCh]
  _QWORD v20[4]; // [rsp+88h] [rbp-80h] BYREF
  int v21; // [rsp+A8h] [rbp-60h]
  int *v22; // [rsp+B0h] [rbp-58h]
  int *v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-48h] BYREF
  char v25; // [rsp+C4h] [rbp-44h]
  int v26; // [rsp+E8h] [rbp-20h] BYREF
  const char *v27; // [rsp+F0h] [rbp-18h]
  __int64 v28; // [rsp+F8h] [rbp-10h]
  char v29; // [rsp+100h] [rbp-8h]
  __int64 v30; // [rsp+108h] [rbp+0h]
  _BYTE v31[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v32; // [rsp+1A0h] [rbp+98h]
  __int64 v33; // [rsp+1A8h] [rbp+A0h]
  __int64 v34; // [rsp+1B0h] [rbp+A8h]
  __int64 v35; // [rsp+1B8h] [rbp+B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v17 = -2LL;
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "EM_NewNotificationActivity";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v20,
    *((_DWORD *)pv + 84));
  if ( *((_QWORD *)pv + 18) )
  {
    if ( (unsigned int)(*((_DWORD *)pv + 84) - 2) > 1 )
    {
      v6 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v6 <= 5u )
        goto LABEL_31;
      v7 = &unk_180259EDF;
      goto LABEL_9;
    }
    v8 = (PTP_TIMER *)(pv + 616);
    v9 = (struct _TP_TIMER *)*((_QWORD *)pv + 77);
    if ( v9 && IsThreadpoolTimerSet(v9) )
    {
      v10 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v10 > 5u )
        TlgWrite(v10, &unk_180259E6D, (LPCGUID)(v23 + 2), 0LL, 2u, &pData);
    }
    else
    {
      if ( !*v8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_5de898d0b4538391f376d563c0bb2176_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)pv + 77,
          ThreadpoolTimer);
      }
      v12 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v12 > 5u )
        TlgWrite(v12, &unk_180259E94, (LPCGUID)(v23 + 2), 0LL, 2u, &pData);
      v3 = CSingleViewShellExperience::NavigateView(pv + 120, 3LL);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 697LL;
        goto LABEL_23;
      }
      pftDueTime = (struct _FILETIME)-600000000LL;
      SetThreadpoolTimer(*v8, &pftDueTime, 0, 0);
    }
    pvParam = 56;
    if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam, 0) && (v19 & 1) != 0 )
    {
      v13 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v13 > 5u )
        TlgWrite(v13, &unk_180259E43, (LPCGUID)(v23 + 2), 0LL, 2u, &pData);
      v14 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
      if ( v14 < 0 )
      {
        v4 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x2C5,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               (const char *)(unsigned int)v14);
        goto LABEL_32;
      }
    }
LABEL_31:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
    v4 = 0;
    goto LABEL_32;
  }
  if ( !(unsigned __int8)CActionCenterExperienceManager::GetViewStateAllowed(pv, 1LL) )
  {
    v6 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = &unk_180259EC4;
LABEL_9:
      TlgWrite(v6, v7, (LPCGUID)(v23 + 2), 0LL, 2u, &pData);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  v2 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_180259F53, (LPCGUID)(v23 + 2), 0LL, 2u, &pData);
  v3 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)pv);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_31;
  v5 = 661LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_32:
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return v4;
}
