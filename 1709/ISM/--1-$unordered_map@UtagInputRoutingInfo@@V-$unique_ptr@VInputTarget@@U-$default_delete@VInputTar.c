/*
 * XREFs of ??1?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18007E664
 * Callers:
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$13 @ 0x1800D0240 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$13.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$13 @ 0x1800D0469 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::~unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>(
        __int64 a1)
{
  return std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::~_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>(a1);
}
