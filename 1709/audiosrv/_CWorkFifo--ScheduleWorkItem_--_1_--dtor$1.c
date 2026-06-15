/*
 * XREFs of _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x1800C2181
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWorkFifo::ScheduleWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 160));
}
