/*
 * XREFs of ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800D5F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionContextWrapper::Release(__int64 a1)
{
  return CWARPCallbackRenderer::Release((CWARPCallbackRenderer *)(a1 - 8));
}
