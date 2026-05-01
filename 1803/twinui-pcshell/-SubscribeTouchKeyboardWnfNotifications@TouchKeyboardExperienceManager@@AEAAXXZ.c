/*
 * XREFs of ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180242C70
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180240230 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18013D2F4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180143A88 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications(wil::details **this)
{
  wil::details **v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details **v4; // rdi
  __int64 v5; // rdx
  wil::details **v6; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  wil::details **v8; // rdi
  __int64 v9; // rdx
  wil::details **v10; // rax
  struct wil::details::wnf_subscription_state_base *v11; // rdx
  wil::details **v12; // rdi
  __int64 v13; // rdx
  wil::details **v14; // rax
  struct wil::details::wnf_subscription_state_base *v15; // rdx
  wil::details **v16; // rdi
  __int64 v17; // rdx
  wil::details **v18; // rax
  struct wil::details::wnf_subscription_state_base *v19; // rdx
  wil::details **v20; // rdi
  __int64 v21; // rdx
  wil::details **v22; // rax
  struct wil::details::wnf_subscription_state_base *v23; // rdx
  wil::details **v24; // rdi
  __int64 v25; // rdx
  wil::details **v26; // rax
  struct wil::details::wnf_subscription_state_base *v27; // rdx
  wil::details **v28; // rdi
  __int64 v29; // rdx
  wil::details **v30; // rax
  struct wil::details::wnf_subscription_state_base *v31; // rdx
  wil::details **v32; // rdi
  __int64 v33; // rdx
  wil::details *v34[2]; // [rsp+28h] [rbp-39h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+38h] [rbp-29h] BYREF
  wil::details **v36; // [rsp+40h] [rbp-21h]
  __int64 (__fastcall ***v37)(); // [rsp+A0h] [rbp+3Fh]

  v34[1] = (wil::details *)-2LL;
  v35 = off_180321538;
  v36 = this;
  v37 = &v35;
  v2 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          v34,
                          &WNF_ENTR_FULLLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                          (__int64)&v35);
  v4 = v2;
  if ( this + 87 != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 87,
      *v2);
    *v4 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v3);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v3);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v5);
  v35 = off_180321568;
  v36 = this;
  v37 = &v35;
  v6 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          v34,
                          &WNF_ENTR_WIDELAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                          (__int64)&v35);
  v8 = v6;
  if ( this + 89 != v6 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 89,
      *v6);
    *v8 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v7);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v7);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v9);
  v35 = off_180321598;
  v36 = this;
  v37 = &v35;
  v10 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           v34,
                           &WNF_ENTR_NARROWLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                           (__int64)&v35);
  v12 = v10;
  if ( this + 88 != v10 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 88,
      *v10);
    *v12 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v11);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v11);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v13);
  v35 = off_1803215C8;
  v36 = this;
  v37 = &v35;
  v14 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           v34,
                           &WNF_ENTR_HANDWRITING_AVAILABILITY_POLICY_VALUE_CHANGED,
                           (__int64)&v35);
  v16 = v14;
  if ( this + 90 != v14 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 90,
      *v14);
    *v16 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v15);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v15);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v17);
  v35 = off_1803215F8;
  v36 = this;
  v37 = &v35;
  v18 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           v34,
                           &WNF_ENTR_SPLITLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                           (__int64)&v35);
  v20 = v18;
  if ( this + 91 != v18 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 91,
      *v18);
    *v20 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v19);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v19);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v21);
  v35 = off_180321418;
  v36 = this;
  v37 = &v35;
  v22 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           v34,
                           &WNF_ENTR_EMOJI_AVAILABILITY_POLICY_VALUE_CHANGED,
                           (__int64)&v35);
  v24 = v22;
  if ( this + 92 != v22 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 92,
      *v22);
    *v24 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v23);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v23);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v25);
  v35 = off_180321448;
  v36 = this;
  v37 = &v35;
  v26 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           v34,
                           &WNF_ENTR_FORCEDOCKED_TOUCHKEYBOARD_POLICY_VALUE_CHANGED,
                           (__int64)&v35);
  v28 = v26;
  if ( this + 93 != v26 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 93,
      *v26);
    *v28 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v27);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v27);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v29);
  v35 = off_180321478;
  v36 = this;
  v37 = &v35;
  v30 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           v34,
                           &WNF_ENTR_TOUCHKEYBOARDDICTATION_POLICY_VALUE_CHANGED,
                           (__int64)&v35);
  v32 = v30;
  if ( this + 94 != v30 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 94,
      *v30);
    *v32 = 0LL;
  }
  if ( v34[0] )
    wil::details::delete_wnf_subscription_state(v34[0], v31);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    (__int64)v31);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v35,
    v33);
}
