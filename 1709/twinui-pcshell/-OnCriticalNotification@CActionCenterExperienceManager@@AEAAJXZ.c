/*
 * XREFs of ?OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096684
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007A1EC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180092B7C (-StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnCriticalNotification(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  const struct _TlgProvider_t *v5; // rax
  const void *v6; // rdx
  NTSTATUS v7; // eax
  _QWORD v9[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+68h] [rbp-A0h]
  int *v12; // [rsp+70h] [rbp-98h]
  int *v13; // [rsp+78h] [rbp-90h]
  int v14; // [rsp+80h] [rbp-88h] BYREF
  char v15; // [rsp+84h] [rbp-84h]
  int v16; // [rsp+A8h] [rbp-60h] BYREF
  const char *v17; // [rsp+B0h] [rbp-58h]
  __int64 v18; // [rsp+B8h] [rbp-50h]
  char v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  _BYTE v21[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+160h] [rbp+58h]
  __int64 v23; // [rsp+168h] [rbp+60h]
  __int64 v24; // [rsp+170h] [rbp+68h]
  __int64 v25; // [rsp+178h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v9[1] = -2LL;
  v10[1] = 0LL;
  v10[2] = v10;
  v10[3] = 0LL;
  LODWORD(v11) = 0;
  v12 = &v16;
  v13 = &v14;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v17 = "EM_CriticalNotificationActivity";
  v18 = 0LL;
  v20 = 1LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v21, 0, sizeof(v21));
  v24 = 0LL;
  v25 = 0LL;
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v10);
  v2 = *((_QWORD *)this + 71);
  if ( !v2 )
    goto LABEL_13;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v2 + 32LL))(v2, 3LL, v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !*((_BYTE *)this + 532) || LODWORD(v9[0]) )
    {
      v7 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
      if ( v7 < 0 )
      {
        v4 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x27F,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               (const char *)(unsigned int)v7);
        goto LABEL_14;
      }
      v5 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v5 > 5u )
      {
        v6 = &unk_18025938C;
        goto LABEL_12;
      }
    }
    else
    {
      v5 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v5 > 5u )
      {
        v6 = &unk_180259EC4;
LABEL_12:
        TlgWrite(v5, v6, (LPCGUID)(v13 + 2), 0LL, 2u, &pData);
      }
    }
LABEL_13:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    v4 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x277,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_14:
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
  return v4;
}
