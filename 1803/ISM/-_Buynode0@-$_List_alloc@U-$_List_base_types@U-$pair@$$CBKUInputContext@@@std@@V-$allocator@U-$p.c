/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@2@PEAU32@0@Z @ 0x180081EF8
 * Callers:
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18007B310 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800821E0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_1800821E0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,InputContext>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rcx

  result = operator new(0x40uLL);
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
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v6,
      result);
    throw;
  }
  return result;
}
