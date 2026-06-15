/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$4 @ 0x18006725A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>(a2 + 40);
}
