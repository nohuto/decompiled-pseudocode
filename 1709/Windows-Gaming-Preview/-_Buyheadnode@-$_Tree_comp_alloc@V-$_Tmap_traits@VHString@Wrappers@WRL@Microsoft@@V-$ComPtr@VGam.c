/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18001CD70
 * Callers:
 *     _lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator() @ 0x18001A008 (_lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041620 (--2@YAPEAX_K@Z.c)
 */

_WORD *std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x30uLL);
  try
  {
    if ( result )
      *(_QWORD *)result = result;
    if ( result != (_WORD *)-8LL )
      *((_QWORD *)result + 1) = result;
    v1 = result + 8;
    if ( result != (_WORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Freenode0(
      (__int64)v1,
      result);
    throw;
  }
  result[12] = 257;
  return result;
}
