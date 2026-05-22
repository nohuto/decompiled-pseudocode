/*
 * XREFs of ?AddRef@MouseProcessor@@WMI@EAAKXZ @ 0x18006CE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(__int64 a1)
{
  return TouchInfoAdapter::AddRef((TouchInfoAdapter *)(a1 - 200));
}
