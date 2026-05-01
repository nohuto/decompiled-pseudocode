/*
 * XREFs of ??$_Uninit_alloc_fill_n1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_KV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@0@PEAV10@_KAEBV10@AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x1801C7694
 * Callers:
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18025F7E0 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUCo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>> *,unsigned __int64,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  try
  {
    for ( ; a2; --a2 )
      *a1++ = *a3;
  }
  catch ( ... )
  {
    throw;
  }
  return a1;
}
