/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@2@PEAU32@0@Z @ 0x1800903FC
 * Callers:
 *     ??$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1800903B8 (--$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@-$_List_buy@U.c)
 *     ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1801C7C88 (--0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<HostIdentifierKey const,unsigned int>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    *result = a2;
    result[1] = a3;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x20uLL);
    throw;
  }
  return result;
}
