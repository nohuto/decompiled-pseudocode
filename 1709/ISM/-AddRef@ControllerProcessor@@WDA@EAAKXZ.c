/*
 * XREFs of ?AddRef@ControllerProcessor@@WDA@EAAKXZ @ 0x180042170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::AddRef(__int64 a1)
{
  return TouchInfoAdapter::AddRef((TouchInfoAdapter *)(a1 - 48));
}
