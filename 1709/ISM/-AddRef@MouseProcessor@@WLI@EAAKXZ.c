/*
 * XREFs of ?AddRef@MouseProcessor@@WLI@EAAKXZ @ 0x18006CE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(__int64 a1)
{
  return TouchInfoAdapter::AddRef((TouchInfoAdapter *)(a1 - 184));
}
