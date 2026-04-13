/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@1@@Z @ 0x18003D38C
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003B2BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003CDBC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x18003D57C (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>::_Buynode<std::pair<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  void *v8; // [rsp+40h] [rbp+8h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>::_Buynode0(a1);
  v5 = v3;
  v8 = (void *)v3;
  *(_WORD *)(v3 + 24) = 0;
  try
  {
    v6 = v3 + 32;
    if ( v3 != -32 )
    {
      *(_QWORD *)(v3 + 56) = 7LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_WORD *)v6 = 0;
      std::wstring::_Assign_rv((_QWORD *)(v3 + 32), a2);
      *(_QWORD *)(v6 + 32) = a2[4];
      *(_QWORD *)(v6 + 40) = a2[5];
      a2[4] = 0LL;
      a2[5] = 0LL;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v4,
      v8);
    throw;
  }
  return v5;
}
