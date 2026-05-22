/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x180024854
 * Callers:
 *     ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180024360 (-Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180024600 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v3; // r11
  _QWORD *v4; // r10
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 i; // r8
  __int64 v10; // rax
  __int64 *v11; // r8
  __int64 v12; // r8
  _QWORD *result; // rax

  v3 = (__int64)a3;
  v4 = a2;
  v5 = a1[3];
  v6 = a1[6] & (a3[1] | ((unsigned __int64)*a3 << 32));
  v7 = 2 * v6;
  v8 = a1[1];
  for ( i = *(_QWORD *)(v5 + 16 * v6); ; i = *v11 )
  {
    v10 = *(_QWORD *)(v5 + 8 * v7) == v8 ? v8 : **(_QWORD **)(v5 + 8 * v7 + 8);
    if ( i == v10 )
      break;
    if ( operator==(i + 16, v3) )
    {
      if ( operator==(v3, (__int64)(v11 + 2)) )
        v8 = v12;
      break;
    }
  }
  result = v4;
  *v4 = v8;
  return result;
}
