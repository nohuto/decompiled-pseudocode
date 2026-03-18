/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXXZ @ 0x1800658C0
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(HANDLE *this)
{
  SetEvent(this[8]);
}
