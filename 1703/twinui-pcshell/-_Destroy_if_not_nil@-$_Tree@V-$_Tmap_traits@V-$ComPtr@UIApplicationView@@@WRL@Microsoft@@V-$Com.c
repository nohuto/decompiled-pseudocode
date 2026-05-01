/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@2@@Z @ 0x18015E764
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@1@AEAU?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@1@1@Z @ 0x18015E7BC (--$_Insert_at@AEAU-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UISwitchItem.c)
 *     _std::_Tree_std::_Tmap_traits_Microsoft::WRL::ComPtr_IApplicationView__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem__std::less_Microsoft::WRL::ComPtr_IApplicationView____std::allocator_std::pair_Microsoft::WRL::ComPtr_IApplicationView__const__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem______0___::_Insert_hint_std::pair_Microsoft::WRL::ComPtr_IApplicationView__const__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem____&___ptr64_std::_Tree_node_std::pair_Microsoft::WRL::ComPtr_IApplicationView__const__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem____void_____ptr64______ptr64__::_1_::catch$111 @ 0x1801A423B (_std--_Tree_std--_Tmap_traits_Microsoft--WRL--ComPtr_IApplicationView__Microsoft--WRL--ComPtr_Wi.c)
 *     _std::_Tree_std::_Tmap_traits_Microsoft::WRL::ComPtr_IApplicationView__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem__std::less_Microsoft::WRL::ComPtr_IApplicationView____std::allocator_std::pair_Microsoft::WRL::ComPtr_IApplicationView__const__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem______0___::_Insert_nohint_std::pair_Microsoft::WRL::ComPtr_IApplicationView__const__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem____&___ptr64_std::_Tree_node_std::pair_Microsoft::WRL::ComPtr_IApplicationView__const__Microsoft::WRL::ComPtr_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem____void_____ptr64______ptr64__::_1_::catch$47 @ 0x1801A427E (_std--_Tree_std--_Tmap_traits_Microsoft--WRL--ComPtr_IApplicationView__Microsoft--W_ea_1801A427E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  std::_Deallocate((char *)a2, 1uLL, 0x30uLL);
}
