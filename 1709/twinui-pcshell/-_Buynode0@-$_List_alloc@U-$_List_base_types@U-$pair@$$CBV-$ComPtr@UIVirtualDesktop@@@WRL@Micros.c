/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x18012B57C
 * Callers:
 *     ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180118238 (--0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18014B6C8 (-XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@1@PEAU21@0AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@Z @ 0x18014C508 (--$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV-$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@.c)
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B44FC (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1801C9308 (--$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@-$_List_buy@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v6; // rcx

  result = operator new(0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    if ( result )
      *result = a2;
    v6 = result + 1;
    if ( result != (_QWORD *)-8LL )
      *v6 = a3;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Freenode0(
      (__int64)v6,
      result);
    throw;
  }
  return result;
}
