/*
 * XREFs of ?Release@MouseProcessor@@WMA@EAAKXZ @ 0x18006CDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 192));
}
