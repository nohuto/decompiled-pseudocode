/*
 * XREFs of ??$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x180025278
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180024600 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800252DC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInf.c)
 */

__int64 __fastcall std::_List_buy<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::_Buynode<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    *(_OWORD *)(result + 16) = *(_OWORD *)a4;
    *(_OWORD *)(result + 32) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(result + 48) = *(_QWORD *)(a4 + 32);
    *(_OWORD *)(result + 56) = *a5;
    *(_OWORD *)(result + 72) = a5[1];
    *(_OWORD *)(result + 88) = a5[2];
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      result,
      (void *)result);
    throw;
  }
  return result;
}
