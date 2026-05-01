/*
 * XREFs of ?ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18009A4EC
 * Callers:
 *     ?OnDisplayContextChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099FA0 (-OnDisplayContextChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CActionCenterExperienceManager@@UEAAJXZ @ 0x18009A9E0 (-UnregisterHolographicExecutor@CActionCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800935FC (-StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A0C4 (-ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A328 (-HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::ChangeDisplayContext(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v8; // rax
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
  v17 = "EM_DisplayContextChanged";
  v18 = 0LL;
  v20 = 1LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v21, 0, sizeof(v21));
  v24 = 0LL;
  v25 = 0LL;
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  if ( !*(_QWORD *)(a1 + 144) || !*(_QWORD *)(a1 + 664) || !*(_QWORD *)(a1 + 648) || *(_DWORD *)(a1 + 656) == a2 )
  {
    v8 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
      TlgWrite(v8, &unk_180258F0E, (LPCGUID)(v13 + 2), 0LL, 2u, &pData);
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 656) = a2;
  v4 = NotificationCenterLogging::Provider();
  if ( a2 != 1 )
  {
    if ( *(_DWORD *)v4 > 5u )
      TlgWrite(v4, &unk_180258F6F, (LPCGUID)(v13 + 2), 0LL, 2u, &pData);
    v5 = CActionCenterExperienceManager::HideInHolographic((CActionCenterExperienceManager *)a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 2002LL;
      goto LABEL_15;
    }
LABEL_18:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    v6 = 0;
    goto LABEL_19;
  }
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_180258F36, (LPCGUID)(v13 + 2), 0LL, 2u, &pData);
  if ( *(_DWORD *)(a1 + 336) != 1 )
    goto LABEL_18;
  v5 = CActionCenterExperienceManager::ShowInHolographic((CActionCenterExperienceManager *)a1);
  v6 = v5;
  if ( v5 >= 0 )
    goto LABEL_18;
  v7 = 1995LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_19:
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
  return v6;
}
