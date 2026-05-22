/*
 * XREFs of ?Release@ControllerNavigationManager@@WBA@EAAKXZ @ 0x18003D000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerNavigationManager::Release(__int64 a1)
{
  return RefCountedObject::Release((RefCountedObject *)(a1 - 16));
}
