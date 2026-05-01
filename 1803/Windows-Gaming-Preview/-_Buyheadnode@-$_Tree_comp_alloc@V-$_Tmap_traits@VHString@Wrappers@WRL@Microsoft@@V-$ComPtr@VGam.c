/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18001DD30
 * Callers:
 *     _lambda_1fac56e8dc857868f8bd6529f7683e95_::operator() @ 0x18001A9D4 (_lambda_1fac56e8dc857868f8bd6529f7683e95_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180042950 (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = operator new(0x30uLL);
  try
  {
    *result = result;
    result[1] = result;
    result[2] = result;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>::deallocate(
      v1,
      result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
