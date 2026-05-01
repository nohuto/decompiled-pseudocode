/*
 * XREFs of _NotificationDispatcher::AddTask_::_1_::dtor$1 @ 0x1800B170C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NotificationDispatcher::AddTask_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>(a2 + 128);
}
