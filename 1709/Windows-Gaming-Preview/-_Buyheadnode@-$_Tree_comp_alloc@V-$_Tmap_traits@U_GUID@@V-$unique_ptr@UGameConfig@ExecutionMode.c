/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@XZ @ 0x18001B848
 * Callers:
 *     _lambda_f57c409ef9907fe20f12ddbbf436a36a_::operator() @ 0x18001A924 (_lambda_f57c409ef9907fe20f12ddbbf436a36a_--operator().c)
 *     _lambda_e55ccab858df802f1f19496ef6f8fbee_::operator() @ 0x18001ADAC (_lambda_e55ccab858df802f1f19496ef6f8fbee_--operator().c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18002CF9C (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041620 (--2@YAPEAX_K@Z.c)
 */

_WORD *std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x38uLL);
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
