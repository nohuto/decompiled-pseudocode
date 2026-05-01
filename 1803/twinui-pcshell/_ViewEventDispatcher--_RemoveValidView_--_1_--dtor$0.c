/*
 * XREFs of _ViewEventDispatcher::_RemoveValidView_::_1_::dtor$0 @ 0x1800B29AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::_RemoveValidView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::~ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>(a2 + 64);
}
