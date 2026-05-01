/*
 * XREFs of _ViewEventDispatcher::TryConsolidate_::_1_::dtor$1 @ 0x1801CF2C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::TryConsolidate_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::~ComPtr<CRefCountedObject<ViewEventRegistration>>((void **)(a2 + 104));
}
