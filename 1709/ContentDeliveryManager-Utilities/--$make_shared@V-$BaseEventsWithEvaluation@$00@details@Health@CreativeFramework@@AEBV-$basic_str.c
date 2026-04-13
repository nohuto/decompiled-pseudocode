/*
 * XREFs of ??$make_shared@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEB_N@std@@YA?AV?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEB_N@Z @ 0x18003BDCC
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003B2BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003CDBC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     ??0?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180029DF0 (--0-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@QEAA@AEBV-$basic_string@GU-$.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>,std::wstring const &,bool const &>(
        _QWORD *a1,
        __int64 a2,
        char *a3)
{
  _DWORD *v6; // rbx

  v6 = operator new(0x110uLL);
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v6 != (_DWORD *)-16LL )
      CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::BaseEventsWithEvaluation<1>(
        (__int64)(v6 + 4),
        a2,
        *a3);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 4;
  return a1;
}
