/*
 * XREFs of ??1?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAA@XZ @ 0x18007E65C
 * Callers:
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$12 @ 0x1800D022D (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$12.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$14 @ 0x1800D0253 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$14.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$12 @ 0x1800D0436 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$12.c)
 *     _ViewHierarchy::_ViewHierarchy_::_1_::dtor$7 @ 0x1800D07E1 (_ViewHierarchy--_ViewHierarchy_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::~unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>(
        __int64 a1)
{
  return std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::~_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>(a1);
}
