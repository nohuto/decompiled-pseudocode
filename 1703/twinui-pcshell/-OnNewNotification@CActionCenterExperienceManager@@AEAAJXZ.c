/*
 * XREFs of ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092398
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180091EDC (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007759C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092BE4 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z @ 0x1800931A8 (-GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180096940 (--$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801817B4 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
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
  _QWORD v20[6]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v17 = -2LL;
  pftDueTime.dwLowDateTime = *((_DWORD *)pv + 82);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::Start<unsigned int>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v20);
  if ( *((_QWORD *)pv + 17) )
  {
    if ( (unsigned int)(*((_DWORD *)pv + 82) - 2) > 1 )
    {
      v6 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v6 <= 5u )
        goto LABEL_31;
      v7 = &unk_1801F7CE1;
      goto LABEL_9;
    }
    v8 = (PTP_TIMER *)(pv + 528);
    v9 = (struct _TP_TIMER *)*((_QWORD *)pv + 66);
    if ( v9 && IsThreadpoolTimerSet(v9) )
    {
      v10 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v10 > 5u )
        TlgWrite(v10, &unk_1801F7C8A, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
    }
    else
    {
      if ( !*v8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_1da3a53773f13b4b73946ed3ad9c3c5d_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)pv + 66,
          ThreadpoolTimer);
      }
      v12 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v12 > 5u )
        TlgWrite(v12, &unk_1801F7CB1, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
      v3 = CSingleViewShellExperience::NavigateView(pv + 112, 3LL);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 619LL;
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
        TlgWrite(v13, &unk_1801F7C60, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
      v14 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
      if ( v14 < 0 )
      {
        v4 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x277,
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
      v7 = &unk_1801F71AC;
LABEL_9:
      TlgWrite(v6, v7, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  v2 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1801F7D55, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
  v3 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)pv);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_31;
  v5 = 583LL;
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
