/*
 * XREFs of ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x18003CFAC
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003C07C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18003CDB8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _QWORD *result; // rax
  __int64 v7; // rcx

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    if ( result != (_QWORD *)-16LL )
    {
      *((_DWORD *)result + 4) = *a4;
      v7 = (__int64)a5;
      result[3] = *a5;
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
