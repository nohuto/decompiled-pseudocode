/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x180024E1C
 * Callers:
 *     ?OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x180023D70 (-OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N.c)
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180024600 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std::_Uhash_compare_tagMsgRoutingInfo_std::hash_tagMsgRoutingInfo__std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo____0___::_Insert_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__________::_1_::catch$110 @ 0x1800E44C4 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std--_Uhash_com_ea_1800E44C4.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx

  v5 = a1[6] & (*((unsigned int *)a3 + 5) | ((unsigned __int64)*((unsigned int *)a3 + 4) << 32));
  v6 = a1[3];
  v7 = 2 * v5;
  if ( *(_QWORD **)(v6 + 8 * v7 + 8) == a3 )
  {
    if ( *(_QWORD **)(v6 + 8 * v7) == a3 )
    {
      *(_QWORD *)(v6 + 8 * v7) = a1[1];
      v6 = a1[3];
      v8 = a1[1];
    }
    else
    {
      v8 = a3[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD **)(v6 + 8 * v7) == a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = *a3;
  }
  v9 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  operator delete(a3);
  *a2 = v9;
  return a2;
}
