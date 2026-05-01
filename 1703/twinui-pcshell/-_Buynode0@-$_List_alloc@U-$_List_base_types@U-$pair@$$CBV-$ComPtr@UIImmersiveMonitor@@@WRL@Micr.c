/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x180100BE8
 * Callers:
 *     ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1800ED6D8 (--0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18012113C (-XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@1@PEAU21@0AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@Z @ 0x180121F84 (--$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV-$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@.c)
 *     ??$_Buynode@AEAUHostIdentifierKey@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUHostIdentifierKey@@AEAI@Z @ 0x18017C53C (--$_Buynode@AEAUHostIdentifierKey@@AEAI@-$_List_buy@U-$pair@$$CBUHostIdentifierKey@@I@std@@V-$al.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>::_Buynode0(
        __int64 a1,
        char *a2,
        char *a3)
{
  char *result; // rax
  char **v6; // rcx

  result = (char *)operator new(0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    if ( result )
      *(_QWORD *)result = a2;
    v6 = (char **)(result + 8);
    if ( result != (char *)-8LL )
      *v6 = a3;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<HostIdentifierKey const,unsigned int>,void *>>>::deallocate(
      (__int64)v6,
      result);
    throw;
  }
  return result;
}
