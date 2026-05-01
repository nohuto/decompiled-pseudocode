/*
 * XREFs of ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18011D36C
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801015D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18011B108 (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180123A18 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180126078 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180126E00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180126E00.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewEventDispatcher::TryShowAsStandaloneAsync(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v9; // rdi
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  __int64 v11; // rsi
  _QWORD *v12; // rax
  volatile signed __int64 *v13; // rbx
  int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // r14
  _QWORD *v17; // r14
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r8d
  void *v23; // rcx
  wil *v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-98h] BYREF
  __int64 v28; // [rsp+28h] [rbp-70h]
  void *v29; // [rsp+40h] [rbp-58h] BYREF
  wil *v30; // [rsp+48h] [rbp-50h] BYREF
  __int64 v31; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+58h] [rbp-40h] BYREF
  __int64 v33; // [rsp+60h] [rbp-38h] BYREF
  __int64 v34; // [rsp+68h] [rbp-30h] BYREF
  __int64 v35; // [rsp+70h] [rbp-28h]
  __int64 v36; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v36 = -2LL;
  try
  {
    v32 = 0LL;
    v31 = 0LL;
    v33 = 0LL;
    v9 = 0LL;
    v35 = 0LL;
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             (_DWORD)a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v32,
                                                             (unsigned int)&v31,
                                                             (__int64)&v33);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x332,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v11 = a6;
    if ( a6 )
    {
      AcquireSRWLockShared(a1 + 37);
      if ( (int)ViewEventDispatcher::_FindPendingActivation(a1, a6, &v34) < 0 )
      {
        v11 = 0LL;
      }
      else if ( *(_QWORD *)(v34 + 32) )
      {
        v9 = *(_QWORD *)(v34 + 32);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        v35 = v9;
      }
      if ( a1 != (RTL_SRWLOCK *)-296LL )
        ReleaseSRWLockShared(a1 + 37);
    }
    v30 = 0LL;
    v12 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      v17 = v12 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v12 + 1));
      *((_QWORD *)v13 + 8) = 0LL;
      *((_QWORD *)v13 + 12) = 1LL;
      *v13 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
      *v17 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v13 + 9) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v13 + 10) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v13 = (volatile signed __int64)&ViewEventArgsForShowAsStandalone::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
      *v17 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v13 + 9) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v13 + 10) = &ViewEventArgsForShowAsStandalone::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>'};
      *((_QWORD *)v13 + 13) = 0LL;
      *((_QWORD *)v13 + 14) = 0LL;
      *((_QWORD *)v13 + 15) = 0LL;
      *((_QWORD *)v13 + 17) = 0LL;
      v28 = v11;
      v16 = v31;
      v15 = v32;
      v14 = ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(
              (__int64)v13,
              v32,
              v31,
              a4,
              a5,
              v28,
              (__int64)a7,
              v9);
      v18 = v13;
      if ( v14 >= 0 )
      {
        v14 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::QueryInterface(
                v13,
                &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
                &v30);
        v18 = v13;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v18);
    }
    else
    {
      v14 = -2147024882;
      v15 = v32;
      v16 = v31;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x34C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    v29 = 0LL;
    v19 = v33;
    v20 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v33 + 32), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v29);
    if ( v20 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x34F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v20);
    v21 = (*(__int64 (__fastcall **)(void *, __int64, wil *))(*(_QWORD *)v29 + 24LL))(v29, v15, v30);
    if ( v21 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x350,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v21);
    v23 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(wil *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  catch ( ... )
  {
    v25 = *a7;
    v26 = wil::ResultFromCaughtException(v24, &v27, v22);
    (*(void (__fastcall **)(__int64 *, _QWORD))(v25 + 24))(a7, v26);
  }
}
