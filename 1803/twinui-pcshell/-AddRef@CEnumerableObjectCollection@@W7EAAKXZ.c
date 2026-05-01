/*
 * XREFs of ?AddRef@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1800A2A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::AddRef(__int64 a1)
{
  return CRefCountedObject<ViewEventDispatcher::PerApplicationData>::AddRef(a1 - 8);
}
