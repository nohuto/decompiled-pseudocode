/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000C6E0
 * Callers:
 *     _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::dtor$0 @ 0x1800E3ACE (_InputSiteManager--GetInputSiteListFromDITCallbackStruct_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>()
{
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy();
}
