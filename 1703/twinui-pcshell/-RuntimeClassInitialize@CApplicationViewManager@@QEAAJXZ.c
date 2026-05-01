/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180071850
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800758E0 (-CreateInstance@-$SimpleClassFactory@VCApplicationViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180074858 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x180074938 (--$MakeAndInitialize@VNotificationDispatcher@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComP.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180074AA4 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180079608 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::RuntimeClassInitialize(CApplicationViewManager *this)
{
  const struct _GUID *v1; // rdx
  bool v2; // cf
  void **v3; // rsi
  __int64 v5; // rcx
  struct IApplicationViewCollection *v6; // rdi
  int Instance; // edi
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  GUID *v12; // rdx
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+28h] [rbp-39h] BYREF
  GUID v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+48h] [rbp-19h]
  __int64 v16; // [rsp+50h] [rbp-11h]
  GUID v17; // [rsp+58h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  GUID v20; // [rsp+78h] [rbp+17h]
  void *v21; // [rsp+88h] [rbp+27h]
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  GUID *v23; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v1 = (const struct _GUID *)((char *)this + 104);
  v2 = this != 0LL;
  v3 = (void **)((char *)this + 528);
  v5 = *((_QWORD *)this + 66);
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
  v15 = 0LL;
  v14 = GUID_2c08adf0_a386_4b35_9250_0fe183476fcc;
  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v21 = *v3;
  v17 = GUID_e0fe7384_5482_4659_ab2c_4ff038948779;
  v22 = 0LL;
  v20 = GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationViewManager *)((char *)this + 56),
               (__int64)&v14,
               3uLL);
  if ( Instance < 0 )
  {
    v8 = 27LL;
    goto LABEL_5;
  }
  Instance = Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher>((char *)this + 600);
  if ( Instance < 0 )
  {
    v8 = 28LL;
    goto LABEL_5;
  }
  *(_QWORD *)v14.Data4 = this;
  *(_QWORD *)&v14.Data1 = off_1801AC500;
  v23 = &v14;
  v11 = wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(&v13, v10, &v14);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (char *)this + 520,
    v11);
  if ( v13 )
    (**v13)(v13, 1LL);
  if ( v23 )
  {
    v12 = &v14;
    LOBYTE(v12) = v23 != &v14;
    (*(void (__fastcall **)(GUID *, GUID *))(*(_QWORD *)&v23->Data1 + 24LL))(v23, v12);
  }
  if ( *((_QWORD *)this + 65) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
