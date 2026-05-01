/*
 * XREFs of ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180156390
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180154F78 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_6c114e0491c0ae3621bab08cb7c5d6d2___ @ 0x18009E1BC (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_6c114e0491c0ae3621bab0.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_ @ 0x1800A11F8 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--__lambda_c3020acaf10c7144233ee4f2e713fc58_.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180139D70 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18013D2F4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180152D50 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SubscribeToShellReadyWnf(CActionCenterExperienceManager *this)
{
  char *v2; // rbx
  int AgileReference; // ebx
  wil::details *v4; // rcx
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  wil::details **v9; // rax
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  wil::details **v11; // rdi
  wil::details **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  wil::details *v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  wil::details *v18; // [rsp+30h] [rbp-49h] BYREF
  char *v19; // [rsp+38h] [rbp-41h] BYREF
  CActionCenterExperienceManager *v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v22[14]; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( this )
    v2 = (char *)this + 32;
  else
    v2 = 0LL;
  v19 = v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
  if ( v2 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
    AgileReference = RoGetAgileReference(0LL, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9, v2, &v16);
    if ( AgileReference >= 0 )
    {
      v4 = v18;
      v18 = v16;
      v16 = v4;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
    if ( AgileReference < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x279,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)AgileReference);
      goto LABEL_23;
    }
  }
  v17 = 0LL;
  v16 = (wil::details *)&v17;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v16);
  v6 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>((__int64)this, v5);
  AgileReference = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 636LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_21;
  }
  v20 = this;
  Microsoft::WRL::WeakRef::WeakRef(&v21, &v17);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_6c114e0491c0ae3621bab08cb7c5d6d2___(
    v22,
    &v20);
  v9 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                          &v16,
                          (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                          (__int64)v22);
  v11 = (wil::details **)((char *)this + 400);
  v12 = v9;
  if ( v11 != v9 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v11,
      *v9);
    *v12 = 0LL;
  }
  if ( v16 )
    wil::details::delete_wnf_subscription_state(v16, v10);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v22,
    (__int64)v10);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v22,
    v13);
  lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_((__int64)&v20);
  if ( !*v11 )
  {
    AgileReference = -2147467259;
    v8 = 644LL;
    v7 = 2147500037LL;
    goto LABEL_19;
  }
  AgileReference = 0;
LABEL_21:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return (unsigned int)AgileReference;
}
