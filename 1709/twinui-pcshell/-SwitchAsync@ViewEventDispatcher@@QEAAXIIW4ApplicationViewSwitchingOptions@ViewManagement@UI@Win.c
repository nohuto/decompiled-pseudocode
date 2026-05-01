/*
 * XREFs of ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18011D6C8
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801015D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewSwitchingOptions@ViewManagement@UI@6@PEAUIAsyncCallback@@@Z @ 0x18011B350 (-RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180123A18 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180126C50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180126C50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewEventDispatcher::SwitchAsync(int a1, int a2, int a3, int a4, __int64 *a5)
{
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  char *v7; // rax
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rdi
  int v13; // r9d
  volatile signed __int64 *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r8d
  void *v19; // rcx
  wil *v20; // rcx
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-68h] BYREF
  void *v24; // [rsp+30h] [rbp-38h] BYREF
  wil *v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v28[1] = -2LL;
  try
  {
    v27 = 0LL;
    v26 = 0LL;
    v28[0] = 0LL;
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v27,
                                                             (unsigned int)&v26,
                                                             (__int64)v28);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x36C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v25 = 0LL;
    v7 = (char *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = (__int64)v7;
    if ( v7 )
    {
      v12 = v7 + 8;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 8));
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_QWORD *)(v8 + 96) = 1LL;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
      *v12 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *(_QWORD *)(v8 + 72) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `IWeakReferenceSource'};
      *(_QWORD *)(v8 + 80) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v8 = &ViewEventArgsForSwitch::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
      *v12 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *(_QWORD *)(v8 + 72) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `IWeakReferenceSource'};
      *(_QWORD *)(v8 + 80) = &ViewEventArgsForSwitch::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>'};
      *(_QWORD *)(v8 + 104) = 0LL;
      *(_QWORD *)(v8 + 112) = 0LL;
      *(_DWORD *)(v8 + 120) = 0;
      *(_QWORD *)(v8 + 128) = 0LL;
      v13 = a4;
      v11 = v26;
      v10 = v27;
      v9 = ViewEventArgsForSwitch::RuntimeClassInitialize(v8, v27, v26, v13, (__int64)a5);
      v14 = (volatile signed __int64 *)v8;
      if ( v9 >= 0 )
      {
        v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::QueryInterface(
               v8,
               &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
               &v25);
        v14 = (volatile signed __int64 *)v8;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v14);
    }
    else
    {
      v9 = -2147024882;
      v10 = v27;
      v11 = v26;
    }
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x374,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    v24 = 0LL;
    v15 = v28[0];
    v16 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v28[0] + 32LL), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v24);
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x377,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
    v17 = (*(__int64 (__fastcall **)(void *, __int64, wil *))(*(_QWORD *)v24 + 24LL))(v24, v11, v25);
    if ( v17 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x378,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v17);
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(wil *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  catch ( ... )
  {
    v21 = *a5;
    v22 = wil::ResultFromCaughtException(v20, &v23, v18);
    (*(void (__fastcall **)(__int64 *, _QWORD))(v21 + 24))(a5, v22);
  }
}
