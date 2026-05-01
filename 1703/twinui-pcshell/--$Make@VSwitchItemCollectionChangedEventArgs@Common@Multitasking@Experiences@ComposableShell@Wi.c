/*
 * XREFs of ??$Make@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPEAUISwitchItem@23456@AEAW4SwitchItemCollectionChangedEventType@23456@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@12@AEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAW4SwitchItemCollectionChangedEventType@56789@@Z @ 0x180160BEC
 * Callers:
 *     ??$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPEAUISwitchItem@23456@AEAW4SwitchItemCollectionChangedEventType@23456@@wil@@YA?AV?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@AEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAW4SwitchItemCollectionChangedEventType@56789@@Z @ 0x180160CEC (--$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableS.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E36D0 (-Release@-$RuntimeClass@U-$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * &,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        int *a3)
{
  char *v6; // rax
  _QWORD *v7; // rbx
  int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // r14

  *a1 = 0LL;
  v6 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = *a3;
    v9 = *a2;
    v10 = v6 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
    v7[6] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *v10 = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *v10 = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v7[7] = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *((_DWORD *)v7 + 16) = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(*a1);
    *a1 = v7;
  }
  return a1;
}
