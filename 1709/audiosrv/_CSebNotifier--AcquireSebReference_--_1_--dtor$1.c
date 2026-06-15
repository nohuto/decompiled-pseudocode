/*
 * XREFs of _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x180039C6F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSebNotifier::AcquireSebReference_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(a2 + 48);
}
