/*
 * XREFs of ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x180005240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::Release(__int64 a1)
{
  return EdgyInputTarget::Release((EdgyInputTarget *)(a1 - 8));
}
