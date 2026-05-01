/*
 * XREFs of ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x18011D974
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801015D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ViewSizePreference@896@USize@Foundation@6@PEAUIAsyncCallback@@@Z @ 0x18011B540 (-RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180123A18 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180126AA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180126AA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewEventDispatcher::TryShowAsViewModeAsync(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 *a7)
{
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rbx
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  int v15; // r9d
  volatile signed __int64 *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r8d
  void *v21; // rcx
  wil *v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // [rsp+0h] [rbp-78h] BYREF
  void *v26; // [rsp+40h] [rbp-38h] BYREF
  wil *v27; // [rsp+48h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h] BYREF
  __int64 v29; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v30[1] = -2LL;
  try
  {
    v29 = 0LL;
    v28 = 0LL;
    v30[0] = 0LL;
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v29,
                                                             (unsigned int)&v28,
                                                             (__int64)v30);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x393,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v27 = 0LL;
    v9 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      v14 = v9 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 1));
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 12) = 1LL;
      *v10 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
      *v14 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v10 + 9) = &ViewEventArgsForShowAsViewMode::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v10 + 10) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v10 = (volatile signed __int64)&ViewEventArgsForShowAsViewMode::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
      *v14 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v10 + 9) = &ViewEventArgsForShowAsViewMode::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v10 + 10) = &ViewEventArgsForShowAsViewMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>'};
      *((_QWORD *)v10 + 13) = 0LL;
      *((_QWORD *)v10 + 14) = 0LL;
      *((_QWORD *)v10 + 15) = 0LL;
      *((_QWORD *)v10 + 17) = 0LL;
      v15 = a4;
      v13 = v28;
      v12 = v29;
      v11 = ViewEventArgsForShowAsViewMode::RuntimeClassInitialize((__int64)v10, v29, v28, v15, a5, a6, (__int64)a7);
      v16 = v10;
      if ( v11 >= 0 )
      {
        v11 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::QueryInterface(
                v10,
                &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
                &v27);
        v16 = v10;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v16);
    }
    else
    {
      v11 = -2147024882;
      v12 = v29;
      v13 = v28;
    }
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x39C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    v26 = 0LL;
    v17 = v30[0];
    v18 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v30[0] + 32LL), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v26);
    if ( v18 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x39F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v18);
    v19 = (*(__int64 (__fastcall **)(void *, __int64, wil *))(*(_QWORD *)v26 + 24LL))(v26, v12, v27);
    if ( v19 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3A0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v19);
    v21 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(wil *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  catch ( ... )
  {
    v23 = *a7;
    v24 = wil::ResultFromCaughtException(v22, &v25, v20);
    (*(void (__fastcall **)(__int64 *, _QWORD))(v23 + 24))(a7, v24);
  }
}
