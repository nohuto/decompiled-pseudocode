/*
 * XREFs of ?AddRef@?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ @ 0x180023740
 * Callers:
 *     ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x180023370 (-AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 *     ?AddRef@CEnumerableObjectCollection@@W7EAAKXZ @ 0x180023750 (-AddRef@CEnumerableObjectCollection@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<ViewEventDispatcher::PerApplicationData>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
}
