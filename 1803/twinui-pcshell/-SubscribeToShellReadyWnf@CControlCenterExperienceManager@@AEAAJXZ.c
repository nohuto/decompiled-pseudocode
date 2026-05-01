/*
 * XREFs of ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158E64
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180158A18 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180139D70 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18013D2F4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x18015672C (--$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManag.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SubscribeToShellReadyWnf(CControlCenterExperienceManager *this)
{
  char *v2; // rbx
  int AgileReference; // ebx
  wil::details *v4; // rcx
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  wil::details **v10; // rax
  struct wil::details::wnf_subscription_state_base *v11; // rdx
  wil::details **v12; // rdi
  wil::details **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (*v16)(void); // rax
  wil::details *v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+28h] [rbp-41h] BYREF
  wil::details *v20; // [rsp+30h] [rbp-39h] BYREF
  char *v21; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v22[14]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( this )
    v2 = (char *)this + 32;
  else
    v2 = 0LL;
  v21 = v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
  if ( v2 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
    AgileReference = RoGetAgileReference(0LL, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, v2, &v18);
    if ( AgileReference >= 0 )
    {
      v4 = v20;
      v20 = v18;
      v18 = v4;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
    if ( AgileReference < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)AgileReference);
      goto LABEL_27;
    }
  }
  v19 = 0LL;
  v18 = (wil::details *)&v19;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v18);
  v6 = Microsoft::WRL::AsWeak<CControlCenterExperienceManager>((__int64)this, v5);
  AgileReference = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 457LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_23;
  }
  v9 = v19;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v22[1] = this;
  v22[0] = off_18031FC60;
  v22[2] = v9;
  v22[13] = v22;
  v10 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                           &v18,
                           (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                           (__int64)v22);
  v12 = (wil::details **)((char *)this + 384);
  v13 = v10;
  if ( v12 != v10 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v12,
      *v10);
    *v13 = 0LL;
  }
  if ( v18 )
    wil::details::delete_wnf_subscription_state(v18, v11);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v22,
    (__int64)v11);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v22,
    v14);
  if ( !*v12 )
  {
    AgileReference = -2147467259;
    v8 = 465LL;
    v7 = 2147500037LL;
    goto LABEL_21;
  }
  AgileReference = 0;
LABEL_23:
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    v16 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v15,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      v16();
  }
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return (unsigned int)AgileReference;
}
