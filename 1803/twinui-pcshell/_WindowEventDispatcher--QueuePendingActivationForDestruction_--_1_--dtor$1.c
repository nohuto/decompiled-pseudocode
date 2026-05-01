/*
 * XREFs of _WindowEventDispatcher::QueuePendingActivationForDestruction_::_1_::dtor$1 @ 0x1801D76C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::QueuePendingActivationForDestruction_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 128));
}
