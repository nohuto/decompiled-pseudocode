/*
 * XREFs of ??$_Buynode@AEAUHostIdentifierKey@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUHostIdentifierKey@@AEAI@Z @ 0x18017C53C
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801789F0 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x180100BE8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 */

char *__fastcall std::_List_buy<std::pair<HostIdentifierKey const,unsigned int>>::_Buynode<HostIdentifierKey &,unsigned int &>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        unsigned int *a5)
{
  char *result; // rax
  __int64 v7; // rcx

  result = std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (char *)-16LL )
    {
      *((_QWORD *)result + 2) = *(_QWORD *)a4;
      *((_DWORD *)result + 6) = *(_DWORD *)(a4 + 8);
      v7 = *a5;
      *((_DWORD *)result + 7) = v7;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<HostIdentifierKey const,unsigned int>,void *>>>::deallocate(
      v7,
      result);
    throw;
  }
  return result;
}
