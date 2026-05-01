/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::dtor$1 @ 0x1801DD895
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewManagerBridge::OnConnected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 40));
}
