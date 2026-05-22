/*
 * XREFs of ?Release@MouseProcessor@@WMI@EAAKXZ @ 0x18006CE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 200));
}
