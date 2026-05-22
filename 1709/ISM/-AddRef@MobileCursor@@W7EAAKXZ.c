/*
 * XREFs of ?AddRef@MobileCursor@@W7EAAKXZ @ 0x180016980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursor::AddRef(__int64 a1)
{
  return TouchInfoAdapter::AddRef((TouchInfoAdapter *)(a1 - 8));
}
