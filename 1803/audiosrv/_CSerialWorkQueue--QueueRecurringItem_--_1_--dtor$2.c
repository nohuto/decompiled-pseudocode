/*
 * XREFs of _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x180069917
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::QueueRecurringItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>(a2 + 32);
}
