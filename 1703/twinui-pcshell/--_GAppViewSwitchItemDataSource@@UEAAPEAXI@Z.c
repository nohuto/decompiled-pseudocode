/*
 * XREFs of ??_GAppViewSwitchItemDataSource@@UEAAPEAXI@Z @ 0x18015E210
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18015DD48 (--1-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@Com.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@2@@Z @ 0x18015E404 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UISwitchI.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
AppViewSwitchItemDataSource *__fastcall AppViewSwitchItemDataSource::`scalar deleting destructor'(
        AppViewSwitchItemDataSource *this,
        char a2)
{
  char **v4; // r14
  char *v5; // rbx
  __int64 v6; // rdx
  char *v7; // rcx
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = (char **)((char *)this + 272);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>>>,0>>::_Erase(
    (char *)this + 272,
    *(_QWORD *)(*((_QWORD *)this + 34) + 8LL));
  *((_QWORD *)*v4 + 1) = *v4;
  *(_QWORD *)*v4 = *v4;
  *((_QWORD *)*v4 + 2) = *v4;
  v4[1] = 0LL;
  std::_Deallocate(*v4, 1uLL, 0x30uLL);
  v5 = (char *)this + 152;
  SmartCookie::Unregister((AppViewSwitchItemDataSource *)((char *)this + 152));
  v7 = (char *)*((_QWORD *)this + 32);
  if ( v7 )
  {
    LOBYTE(v6) = v7 != v5;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 24LL))(v7, v6);
    *((_QWORD *)this + 32) = 0LL;
  }
  v8 = (char *)*((_QWORD *)this + 32);
  if ( v8 )
  {
    LOBYTE(v6) = v8 != v5;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v8 + 24LL))(v8, v6);
    *((_QWORD *)this + 32) = 0LL;
  }
  v9 = *((_QWORD *)this + 18);
  if ( v9 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 17);
  if ( v10 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 16);
  if ( v11 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItemDataSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItemDataSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
