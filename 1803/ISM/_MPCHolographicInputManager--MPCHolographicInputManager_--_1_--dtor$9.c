/*
 * XREFs of _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x1800E6288
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
    *(_QWORD *)(a2 + 240) + 2224LL,
    a2);
}
