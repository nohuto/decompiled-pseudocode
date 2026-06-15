/*
 * XREFs of _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x180097969
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::QueueWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(a2 + 144);
}
