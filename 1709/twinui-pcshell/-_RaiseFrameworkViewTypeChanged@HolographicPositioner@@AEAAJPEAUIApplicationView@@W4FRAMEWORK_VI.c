/*
 * XREFs of ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800FEB0C
 * Callers:
 *     ?FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800FBD50 (-FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_V.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801015D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_RaiseFrameworkViewTypeChanged(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v3; // rdi
  char *v4; // rax
  char *v5; // rbx
  int v6; // esi
  _QWORD *v7; // rsi
  HSTRING *v8; // rsi
  __int64 v9; // rcx
  HRESULT String; // eax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  PVOID Ptr; // rbx
  struct IUnknown **i; // rdi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v22; // [rsp+20h] [rbp-30h]
  _QWORD v23[2]; // [rsp+28h] [rbp-28h] BYREF
  char *v24; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v28; // [rsp+88h] [rbp+38h] BYREF

  v26 = -2LL;
  HolographicPositioner::_FindViewHostItem(a1, v23, a2);
  v3 = v23[0];
  if ( !v23[0] )
    goto LABEL_49;
  v22 = 0LL;
  v4 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v7 = v4 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 12) = 1LL;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
    *v7 = &ViewHostItemPropertyChangedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v5 + 9) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v5 + 10) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &ViewHostItemPropertyChangedArgs::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
    *v7 = &ViewHostItemPropertyChangedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v5 + 9) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v5 + 10) = &ViewHostItemPropertyChangedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>'};
    v8 = (HSTRING *)(v5 + 104);
    *((_QWORD *)v5 + 13) = 0LL;
    *((_DWORD *)v5 + 14) = 5;
    v9 = *((_QWORD *)v5 + 8);
    if ( v9 )
    {
      *((_QWORD *)v5 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    WindowsDeleteString(*v8);
    *v8 = 0LL;
    String = WindowsCreateString(L"FrameworkViewType", 0x11u, (HSTRING *)v5 + 13);
    v6 = String;
    if ( String >= 0 )
    {
      v11 = *((_QWORD *)v5 + 12);
      v23[1] = v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 12, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_14;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_14:
      v22 = v5;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v5);
      v6 = 0;
      v3 = v23[0];
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)String);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v5);
    }
    if ( v6 < 0 )
      goto LABEL_16;
    v24 = v22;
    v25 = v3;
    Ptr = 0LL;
    AcquireSRWLockExclusive(a1 + 41);
    if ( a1[40].Ptr )
    {
      Ptr = a1[40].Ptr;
      _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
      v3 = v23[0];
    }
    if ( a1 != (RTL_SRWLOCK *)-328LL )
      ReleaseSRWLockExclusive(a1 + 41);
    if ( Ptr )
    {
      _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
      for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
      {
        v15 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))(*i)->lpVtbl[1].QueryInterface)(*i, v25, v24);
        v16 = v15;
        if ( v15 < 0 )
        {
          RoTransformError((unsigned int)v15, 0LL, 0LL);
          if ( v16 == -2147417848 || v16 == -2147023174 || v16 == -1996357631 )
            Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
              (__int64)&a1[40],
              *i);
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v3 = v23[0];
    }
    v28 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v3)(
            v3,
            &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
            &v28);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 1518LL;
      goto LABEL_41;
    }
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 88LL))(v28);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 1519LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v17);
      v19 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_43;
    }
    v20 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v22);
LABEL_49:
    v6 = 0;
    goto LABEL_50;
  }
  v6 = -2147024882;
LABEL_16:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5E9,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v6);
LABEL_43:
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v22);
LABEL_50:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v6;
}
