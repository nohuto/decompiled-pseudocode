/*
 * XREFs of _MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor$1 @ 0x1800E63DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>((_QWORD **)(a2 + 80), a2);
}
