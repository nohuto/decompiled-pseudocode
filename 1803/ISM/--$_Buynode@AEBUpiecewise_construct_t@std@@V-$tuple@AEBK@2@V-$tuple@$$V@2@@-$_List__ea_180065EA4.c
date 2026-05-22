/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180065EA4
 * Callers:
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x180064374 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180065954 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUVelocityData@DragNDropProcessor@@@std.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    *((_DWORD *)result + 4) = **a5;
    result[3] = 0LL;
    result[4] = 0LL;
    result[5] = 0LL;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      0LL,
      result);
    throw;
  }
  return result;
}
