/*
 * XREFs of ?AddRef@?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ @ 0x180096C70
 * Callers:
 *     ?AddRef@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1800A2A20 (-AddRef@CEnumerableObjectCollection@@W7EAAKXZ.c)
 *     ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1800A2A30 (-AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<ViewEventDispatcher::PerApplicationData>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
}
