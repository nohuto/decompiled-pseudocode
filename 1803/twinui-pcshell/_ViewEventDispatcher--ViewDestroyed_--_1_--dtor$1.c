/*
 * XREFs of _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$1 @ 0x1800B2D27
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::ViewDestroyed_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::~ComPtr<CRefCountedObject<ViewEventRegistration>>(a2 + 64);
}
