/*
 * XREFs of ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800985E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXI@Z @ 0x18009262C (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801D2CA0 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::OnViewDestroyed(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  IUnknown *v3; // rbx
  IUnknown *v4; // rax
  IUnknown *v5; // rdi
  DWORD CurrentThreadId; // eax
  int v7; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  HRESULT v10; // eax
  int v11; // eax
  const struct _TlgProvider_t *v12; // rax
  int v14[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  IUnknown *v17; // [rsp+50h] [rbp-B8h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v20[4]; // [rsp+78h] [rbp-90h] BYREF
  int v21; // [rsp+98h] [rbp-70h]
  int *v22; // [rsp+A0h] [rbp-68h]
  int *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h] BYREF
  char v25; // [rsp+B4h] [rbp-54h]
  int v26; // [rsp+D8h] [rbp-30h] BYREF
  const char *v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+E8h] [rbp-20h]
  char v29; // [rsp+F0h] [rbp-18h]
  __int64 v30; // [rsp+F8h] [rbp-10h]
  _BYTE v31[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v32; // [rsp+190h] [rbp+88h]
  __int64 v33; // [rsp+198h] [rbp+90h]
  __int64 v34; // [rsp+1A0h] [rbp+98h]
  __int64 v35; // [rsp+1A8h] [rbp+A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v15 = -2LL;
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
  v27 = "EM_ViewDestroyedActivity";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v20,
    *((_DWORD *)this + 58));
  *((_DWORD *)this + 59) = *((_DWORD *)this + 58);
  *((_DWORD *)this + 58) = 2;
  v3 = 0LL;
  v16 = 0LL;
  v4 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v4[1].lpVtbl) = 1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->lpVtbl = (struct IUnknownVtbl *)off_180201410;
    v3 = v5;
  }
  v17 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  if ( v7 >= 0 )
  {
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = CSingleViewShellExperience::SetArgs((HSTRING *)this + 2, string);
    v7 = v11;
    if ( v11 < 0 )
    {
      v9 = 1427LL;
LABEL_17:
      v8 = (unsigned int)v11;
      goto LABEL_18;
    }
    if ( *((_DWORD *)this + 59) == 1 )
    {
      v14[1] = 1;
      SHRegGetBOOL(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        &v14[1]);
      if ( v14[1] )
      {
        v11 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)((char *)this - 104));
        v7 = v11;
        if ( v11 < 0 )
        {
          v9 = 1437LL;
          goto LABEL_17;
        }
        v12 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v12 > 5u )
          TlgWrite(v12, &unk_1802595CD, (LPCGUID)(v23 + 2), 0LL, 2u, &pData);
      }
    }
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
    v7 = 0;
    goto LABEL_22;
  }
  v8 = (unsigned int)v7;
  v9 = 1424LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v8);
LABEL_22:
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return (unsigned int)v7;
}
