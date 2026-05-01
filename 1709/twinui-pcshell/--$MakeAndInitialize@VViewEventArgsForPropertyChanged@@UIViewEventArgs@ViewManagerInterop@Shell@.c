/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAPEBG@Z @ 0x1801295EC
 * Callers:
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18011E7B4 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801015D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801268F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801268F0.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18012C63C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const * &>(
        void **a1,
        const unsigned __int16 **a2)
{
  void *v4; // rcx
  char *v5; // rax
  __int64 v6; // rbx
  int Interface; // esi
  _QWORD *v8; // rsi
  const unsigned __int16 *v9; // rsi
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  if ( v5 )
  {
    v8 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v8 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *(_QWORD *)(v6 + 72) = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v6 + 80) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>'};
    *(_QWORD *)(v6 + 96) = 1LL;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &ViewEventArgsForPropertyChanged::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v8 = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *(_QWORD *)(v6 + 72) = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v6 + 80) = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>'};
    *(_QWORD *)(v6 + 104) = 0LL;
    v9 = *a2;
    *(_DWORD *)(v6 + 56) = 5;
    v10 = *(_QWORD *)(v6 + 64);
    if ( v10 )
    {
      *(_QWORD *)(v6 + 64) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 )
      Interface = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(v6 + 104), v9);
    else
      Interface = -2147467261;
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::QueryInterface(
                    v6,
                    (__int64)&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
                    a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)Interface);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release((volatile signed __int64 *)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
