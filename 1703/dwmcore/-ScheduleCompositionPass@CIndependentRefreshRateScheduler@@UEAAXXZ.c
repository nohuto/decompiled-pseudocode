/*
 * XREFs of ?ScheduleCompositionPass@CIndependentRefreshRateScheduler@@UEAAXXZ @ 0x18013E250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIndependentRefreshRateScheduler::ScheduleCompositionPass(HANDLE *this)
{
  SetEvent(this[8]);
}
