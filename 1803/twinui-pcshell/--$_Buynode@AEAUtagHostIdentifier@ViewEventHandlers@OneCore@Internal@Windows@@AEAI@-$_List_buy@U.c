/*
 * XREFs of ??$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1800903B8
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x18002F190 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@2@PEAU32@0@Z @ 0x1800903FC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUHostIdentifierKey@@I@std@@V-$allocator.c)
 */

_DWORD *__fastcall std::_List_buy<std::pair<HostIdentifierKey const,unsigned int>>::_Buynode<Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier &,unsigned int &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5)
{
  _DWORD *result; // rax

  result = (_DWORD *)std::_List_alloc<std::_List_base_types<std::pair<HostIdentifierKey const,unsigned int>>>::_Buynode0(a1);
  try
  {
    result[4] = *a4;
    result[5] = a4[1];
    result[6] = a4[2];
    result[7] = *a5;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x20uLL);
    throw;
  }
  return result;
}
