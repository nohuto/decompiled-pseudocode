/*
 * XREFs of ??$_Buynode@AEBUtagInputRoutingInfo@@V?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@std@@@?$_List_buy@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@1@PEAU21@0AEBUtagInputRoutingInfo@@$$QEAV?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@1@@Z @ 0x18008142C
 * Callers:
 *     ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18007EC0C (-OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800122E0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<tagInputRoutingInfo const &,std::unique_ptr<InputAttemptedTarget>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _OWORD *a4,
        __int64 *a5)
{
  _QWORD *result; // rax
  __int64 v7; // rcx

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (_QWORD *)-16LL )
    {
      *((_OWORD *)result + 1) = *a4;
      *((_OWORD *)result + 2) = a4[1];
      *((_OWORD *)result + 3) = a4[2];
      v7 = *a5;
      *a5 = 0LL;
      result[8] = v7;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v7,
      result);
    throw;
  }
  return result;
}
