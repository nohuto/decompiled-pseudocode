/*
 * XREFs of _ButtonProcessor::QueueWorkItem_::_1_::dtor$2 @ 0x1800E830A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ButtonProcessor::QueueWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>::~shared_ptr<ButtonProcessor::AsynchronousWorkItem>(a2 + 48);
}
