/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEBG@Z @ 0x1800FE8E4
 * Callers:
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x1800F3B34 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DCD00 (-Release@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@U-$InterfaceList@UIViewEventArgsFor.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FB560 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@U-$InterfaceList@UIViewPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const * &>(
        void **a1,
        const WCHAR **a2)
{
  void *v3; // rcx
  char *v5; // rax
  __int64 v6; // rbx
  int Interface; // esi
  _QWORD *v8; // rsi
  const WCHAR *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  HSTRING v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *a1 = 0LL;
  v5 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  if ( v5 )
  {
    v8 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v8 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_QWORD *)(v6 + 48) = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v6 + 56) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs,Microsoft::WRL::Details::Nil>,1,0>'};
    *(_QWORD *)(v6 + 72) = 1LL;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &ViewEventArgsForPropertyChanged::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v8 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_QWORD *)(v6 + 48) = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v6 + 56) = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs,Microsoft::WRL::Details::Nil>,1,0>'};
    *(_QWORD *)(v6 + 80) = 0LL;
    v9 = *a2;
    *(_DWORD *)(v6 + 32) = 5;
    v10 = *(_QWORD *)(v6 + 40);
    if ( v10 )
    {
      *(_QWORD *)(v6 + 40) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 )
    {
      string = 0LL;
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
      if ( v11 <= 0xFFFFFFFF )
      {
        Interface = WindowsCreateString(v9, v11, &string);
        if ( Interface >= 0 )
        {
          v12 = *(HSTRING *)(v6 + 80);
          *(_QWORD *)(v6 + 80) = string;
          WindowsDeleteString(v12);
        }
      }
      else
      {
        Interface = -2147024362;
      }
    }
    else
    {
      Interface = -2147467261;
    }
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
                    v6,
                    (__int64)&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
                    a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)Interface);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
