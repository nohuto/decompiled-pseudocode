/*
 * XREFs of ?RegisterHolographicExecutor@CActionCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x18009A740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800944F4 (-StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094BF8 (--1-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?OnDisplayContextChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099FA0 (-OnDisplayContextChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009B01C (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009B748 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::RegisterHolographicExecutor(
        CActionCenterExperienceManager *this,
        struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *a2)
{
  __int64 v4; // rcx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  CActionCenterExperienceManager *v13; // rdi
  int v14; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v15; // rdx
  __int64 v16; // rcx
  __int64 v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h]
  int *v21; // [rsp+80h] [rbp-88h]
  int *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h] BYREF
  char v24; // [rsp+94h] [rbp-74h]
  int v25; // [rsp+B8h] [rbp-50h] BYREF
  const char *v26; // [rsp+C0h] [rbp-48h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  char v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h]
  _BYTE v30[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+170h] [rbp+68h]
  __int64 v32; // [rsp+178h] [rbp+70h]
  __int64 v33; // [rsp+180h] [rbp+78h]
  __int64 v34; // [rsp+188h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v18[1] = -2LL;
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
  v26 = "EM_RegisterHolographicExecutor";
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v34 = 0LL;
  v19[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor *)v19);
  if ( *((struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor **)this + 71) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 71);
    *((_QWORD *)this + 71) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v18[0] = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v18);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v7 = Instance;
  if ( Instance < 0 )
  {
    v8 = (unsigned int)Instance;
    v9 = 2020LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v8);
    goto LABEL_16;
  }
  v10 = v18[0];
  v11 = *((_QWORD *)this + 73);
  if ( v11 )
  {
    *((_QWORD *)this + 73) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v10 + 24LL))(
          v10,
          &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
          &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
          (char *)this + 584);
  v7 = v12;
  if ( v12 < 0 )
  {
    v8 = (unsigned int)v12;
    v9 = 2021LL;
    goto LABEL_14;
  }
  v13 = (CActionCenterExperienceManager *)((char *)this - 80);
  v14 = RtlSubscribeWnfStateChangeNotification(
          (char *)v13 + 504,
          WNF_HOLO_USER_DISPLAY_CONTEXT,
          0LL,
          CActionCenterExperienceManager::DisplayContextChangedCallback,
          v13,
          0LL,
          0,
          1);
  v7 = v14 | 0x10000000;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x434,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v7);
    v8 = v7;
    v9 = 2023LL;
    goto LABEL_14;
  }
  CActionCenterExperienceManager::OnDisplayContextChanged(v13, v15);
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
  v7 = 0;
LABEL_16:
  v16 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v19[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return v7;
}
