/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180074360
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180078C3C (--$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077658 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x180077738 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$C.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180078914 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18007C388 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::RuntimeClassInitialize(CApplicationViewManager *this)
{
  const struct _GUID *v1; // rdx
  bool v2; // cf
  void **v3; // rsi
  __int64 v5; // rcx
  struct IApplicationViewCollection *v6; // rbx
  int Instance; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  GUID *v14; // rdx
  _QWORD v15[2]; // [rsp+28h] [rbp-39h] BYREF
  GUID v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h]
  __int64 v18; // [rsp+50h] [rbp-11h]
  GUID v19; // [rsp+58h] [rbp-9h]
  __int64 v20; // [rsp+68h] [rbp+7h]
  __int64 v21; // [rsp+70h] [rbp+Fh]
  GUID v22; // [rsp+78h] [rbp+17h]
  void *v23; // [rsp+88h] [rbp+27h]
  __int64 v24; // [rsp+90h] [rbp+2Fh]
  GUID *v25; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v1 = (const struct _GUID *)((char *)this + 144);
  v2 = this != 0LL;
  v3 = (void **)((char *)this + 584);
  v5 = *((_QWORD *)this + 73);
  v6 = (struct IApplicationViewCollection *)((unsigned __int64)v1 & -(__int64)v2);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Instance = ApplicationViewManagerVisibilityDebouncer_CreateInstance(v6, v1, v3);
  if ( Instance < 0 )
  {
    v8 = 19LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v17 = 0LL;
  v16 = GUID_2c08adf0_a386_4b35_9250_0fe183476fcc;
  v18 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = *v3;
  v19 = GUID_e0fe7384_5482_4659_ab2c_4ff038948779;
  v24 = 0LL;
  v22 = GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationViewManager *)((char *)this + 80),
               (__int64)&v16,
               3uLL);
  if ( Instance < 0 )
  {
    v8 = 27LL;
    goto LABEL_5;
  }
  Instance = Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>((char *)this + 656);
  if ( Instance < 0 )
  {
    v8 = 28LL;
    goto LABEL_5;
  }
  *(_QWORD *)v16.Data4 = this;
  *(_QWORD *)&v16.Data1 = off_1801FF628;
  v25 = &v16;
  v12 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(v10, &v16, v11, v15);
  v13 = 0LL;
  if ( v12 >= 0 )
    v13 = v15[0];
  v15[0] = v13;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (char *)this + 576,
    v15);
  if ( v15[0] )
    (**(void (__fastcall ***)(_QWORD, __int64))v15[0])(v15[0], 1LL);
  if ( v25 )
  {
    v14 = &v16;
    LOBYTE(v14) = v25 != &v16;
    (*(void (__fastcall **)(GUID *, GUID *))(*(_QWORD *)&v25->Data1 + 24LL))(v25, v14);
  }
  if ( !*((_QWORD *)this + 72) )
  {
    Instance = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
    return (unsigned int)Instance;
  }
  return 0LL;
}
