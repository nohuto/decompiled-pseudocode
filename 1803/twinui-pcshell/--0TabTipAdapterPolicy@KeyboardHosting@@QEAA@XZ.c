/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x180247234
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x180246060 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBIPEBG@std@@@1@@Z @ 0x1802470A0 (--0-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V-$initializer_li.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@XZ @ 0x18024FD80 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IUSize@Foundation@Windows@@U-$less@I@std@@V-$al.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1802BA9D8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 */

// Hidden C++ exception states: #wind=6
KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __m128i v5; // [rsp+28h] [rbp-49h] BYREF
  __int64 v6; // [rsp+38h] [rbp-39h]
  KeyboardHosting::TabTipAdapterPolicy *v7; // [rsp+40h] [rbp-31h]
  int v8; // [rsp+48h] [rbp-29h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-21h]
  int v10; // [rsp+58h] [rbp-19h]
  const wchar_t *v11; // [rsp+60h] [rbp-11h]
  int v12; // [rsp+68h] [rbp-9h]
  const wchar_t *v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+78h] [rbp+7h] BYREF
  const wchar_t *v15; // [rsp+80h] [rbp+Fh]
  int v16; // [rsp+88h] [rbp+17h]
  const wchar_t *v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+98h] [rbp+27h]
  const wchar_t *v19; // [rsp+A0h] [rbp+2Fh]
  __int64 v20; // [rsp+A8h] [rbp+37h] BYREF

  v6 = -2LL;
  v7 = this;
  Microsoft::WRL::FtmBase::FtmBase((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v8 = 0;
  v9 = L"OptimizedKeyboardRelativeXPositionOnScreen";
  v10 = 4;
  v11 = L"OptimizedDictationPanelRelativeXPositionOnScreen";
  v12 = 5;
  v13 = L"OptimizedLanguageBarRelativeXPositionOnScreen";
  v5.m128i_i64[0] = (__int64)&v8;
  v5.m128i_i64[1] = (__int64)&v14;
  std::map<unsigned int,unsigned short const *>::map<unsigned int,unsigned short const *>((__int64 *)this + 9, &v5);
  v14 = 0;
  v15 = L"OptimizedKeyboardRelativeYPositionOnScreen";
  v16 = 4;
  v17 = L"OptimizedDictationPanelRelativeYPositionOnScreen";
  v18 = 5;
  v19 = L"OptimizedLanguageBarRelativeYPositionOnScreen";
  v5.m128i_i64[0] = (__int64)&v14;
  v5.m128i_i64[1] = (__int64)&v20;
  std::map<unsigned int,unsigned short const *>::map<unsigned int,unsigned short const *>((__int64 *)this + 11, &v5);
  *((_DWORD *)this + 26) = 1000;
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 14) = L"LastTipXPositionOnScreen";
  *((_QWORD *)this + 15) = L"LastTipYPositionOnScreen";
  *((_QWORD *)this + 16) = L"LastTipXPositionIsPositive";
  *((_QWORD *)this + 17) = L"LastTipYPositionIsPositive";
  memset_0((char *)this + 144, 0, 0x30uLL);
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  memset_0((char *)this + 232, 0, 0x20uLL);
  *((_DWORD *)this + 66) = 96;
  *((_DWORD *)this + 67) = 96;
  *((_DWORD *)this + 68) = 100;
  *((_QWORD *)this + 35) = 0LL;
  memset_0((char *)this + 288, 0, 0x20uLL);
  *((_DWORD *)this + 80) = 96;
  *((_DWORD *)this + 81) = 96;
  *((_DWORD *)this + 82) = 100;
  *((_QWORD *)this + 42) = 0LL;
  memset_0((char *)this + 344, 0, 0x20uLL);
  *((_DWORD *)this + 94) = 96;
  *((_DWORD *)this + 95) = 96;
  *((_DWORD *)this + 96) = 100;
  *((_WORD *)this + 196) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_BYTE *)this + 408) = 0;
  v5.m128i_i64[0] = (__int64)this + 416;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 52) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v2);
  v5.m128i_i64[0] = (__int64)this + 432;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 54) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Buyheadnode(v3);
  *((_BYTE *)this + 448) = 0;
  memset_0((char *)this + 452, 0, 0x2CuLL);
  *((_DWORD *)this + 124) = -1;
  *(_QWORD *)((char *)this + 500) = 0LL;
  *((_DWORD *)this + 127) = 0;
  *((_BYTE *)this + 512) = 0;
  *((_DWORD *)this + 129) = 0;
  return this;
}
