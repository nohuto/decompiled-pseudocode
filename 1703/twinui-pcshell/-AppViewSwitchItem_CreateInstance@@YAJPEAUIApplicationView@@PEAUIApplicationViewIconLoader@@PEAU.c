/*
 * XREFs of ?AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1801641E4
 * Callers:
 *     ?CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015D5A4 (-CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchI.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x180163AD8 (-RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLo.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164610 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@Composa.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801646C0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@Composab.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164730 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewSwitchItem_CreateInstance(
        struct IApplicationView *a1,
        struct IApplicationViewIconLoader *a2,
        struct IThumbnailInteropDevice *a3,
        const struct _GUID *a4,
        void **a5)
{
  RTL_SRWLOCK *v8; // rax
  RTL_SRWLOCK *v9; // rbx
  int v10; // edi
  RTL_SRWLOCK *v11; // r15
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+78h] [rbp+20h]

  *a5 = 0LL;
  v15 = 0LL;
  v8 = (RTL_SRWLOCK *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8F,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_17;
  }
  v11 = v8 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v8[1]);
  v9->Ptr = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem'};
  v11->Ptr = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v9[4].Ptr = 0LL;
  LOBYTE(v9[5].Ptr) = 1;
  v9[6].Ptr = 0LL;
  v9[7].Ptr = 0LL;
  LOBYTE(v9[9].Ptr) = 0;
  v9[10].Ptr = 0LL;
  v9[11].Ptr = 0LL;
  v9[12].Ptr = 0LL;
  v9[13].Ptr = 0LL;
  InitializeSRWLock(v9 + 14);
  InitializeSRWLock(v9 + 15);
  v9[17].Ptr = &IThumbnailDeviceInternal::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v9[18]);
  v9[22].Ptr = (PVOID)1;
  v9->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,IAppViewSwitchItem,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem'};
  v11->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,IAppViewSwitchItem,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'s `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase'};
  v9[16].Ptr = &AppViewSwitchItem::`vftable';
  v9[17].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,IAppViewSwitchItem,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAppViewSwitchItem'};
  v9[18].Ptr = &AppViewSwitchItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'s `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v9->Ptr = &AppViewSwitchItem::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem'};
  v11->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,IAppViewSwitchItem,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'s `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase'};
  v9[16].Ptr = &AppViewSwitchItem::`vftable';
  v9[17].Ptr = &AppViewSwitchItem::`vftable'{for `IAppViewSwitchItem'};
  v9[18].Ptr = &AppViewSwitchItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'s `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  v9[23].Ptr = 0LL;
  v9[24].Ptr = 0LL;
  v10 = AppViewSwitchItem::RuntimeClassInitialize(v9, a1, a2, a3);
  if ( v10 >= 0 )
  {
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v9);
    v15 = v9;
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
    v10 = 0;
  }
  else if ( v9 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
  }
  if ( v10 < 0 )
    goto LABEL_14;
  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                v15,
                &GUID_d553efa6_cf93_494e_903c_f90e2f1c1052,
                a5);
  v10 = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)Interface);
LABEL_17:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v15);
  return (unsigned int)v10;
}
