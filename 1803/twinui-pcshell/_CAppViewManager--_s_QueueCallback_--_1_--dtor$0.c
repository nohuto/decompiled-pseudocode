/*
 * XREFs of _CAppViewManager::_s_QueueCallback_::_1_::dtor$0 @ 0x1800B1228
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_s_QueueCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>(a2 + 56);
}
