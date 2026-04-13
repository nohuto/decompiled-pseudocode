/*
 * XREFs of ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x180036530
 * Callers:
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x180001550 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180097550 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_WORD *std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x50uLL);
  if ( !result )
    std::_Xbad_alloc();
  try
  {
    *(_QWORD *)result = result;
    if ( result != (_WORD *)-8LL )
      *((_QWORD *)result + 1) = result;
    v1 = result + 8;
    if ( result != (_WORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      (__int64)v1,
      result);
    throw;
  }
  result[12] = 257;
  return result;
}
