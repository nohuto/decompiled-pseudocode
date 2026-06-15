/*
 * XREFs of _CWorkFifo::CWorkFifo_::_1_::dtor$0 @ 0x18005BAA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWorkFifo::CWorkFifo_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::~deque<std::shared_ptr<CWorkFifo::WorkItem>>(*(_QWORD *)(a2 + 64) + 96LL);
}
