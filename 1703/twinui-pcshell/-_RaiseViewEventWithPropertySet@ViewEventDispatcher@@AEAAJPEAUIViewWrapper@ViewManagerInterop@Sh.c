/*
 * XREFs of ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F189C (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1800F32D4 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1800F7A78 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8790 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1800F91E0 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD0F0 (-Release@-$RuntimeClass@U-$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD190 (-AddRef@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010FB94 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_RaiseViewEventWithPropertySet(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int a3,
        __int64 a4,
        AgileGitPtr *a5)
{
  char *v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // rcx
  ConnectedStandbyHelper *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v22[1] = (void *)-2LL;
  v9 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v11 = v9 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 64) = 1LL;
    *(_QWORD *)v10 = &ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v11 = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_QWORD *)(v10 + 48) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v11 = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_QWORD *)(v10 + 48) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *(_DWORD *)(v10 + 32) = a3;
    if ( *(_QWORD *)(v10 + 40) != a4 )
    {
      if ( a4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v12 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 40) = a4;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(v10);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v10);
    v22[0] = 0LL;
    v13 = AgileGitPtr::CopyLocal(a5, &GUID_d1b9407f_a351_5319_bce5_178ee5585391, v22);
    if ( v13 < 0 )
    {
      v14 = 3130LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
      v15 = v22[0];
      if ( v22[0] )
      {
        v22[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v10);
      v16 = *(_QWORD *)a5;
      if ( *(_QWORD *)a5 )
      {
        *(_QWORD *)a5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return (unsigned int)v13;
    }
    v13 = (*(__int64 (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v22[0] + 24LL))(
            v22[0],
            a2,
            v10);
    if ( v13 < 0 )
    {
      v14 = 3131LL;
      goto LABEL_11;
    }
    if ( !a3 )
    {
      v18 = *(ConnectedStandbyHelper **)(a1 + 464);
      if ( v18 )
        ConnectedStandbyHelper::HandleViewCreated(v18, a2);
    }
    v19 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v10);
    v20 = *(_QWORD *)a5;
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)a5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC37,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    v21 = *(_QWORD *)a5;
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)a5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return 2147942414LL;
  }
}
