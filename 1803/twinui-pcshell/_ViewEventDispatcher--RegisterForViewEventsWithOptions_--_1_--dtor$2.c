/*
 * XREFs of _ViewEventDispatcher::RegisterForViewEventsWithOptions_::_1_::dtor$2 @ 0x1801CCC47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::RegisterForViewEventsWithOptions_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::~ComPtr<CRefCountedObject<ViewEventRegistration>>((void **)(a2 + 48));
}
