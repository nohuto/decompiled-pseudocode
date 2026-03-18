/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x1405AC080
 * Callers:
 *     PopCheckShutdownMarker @ 0x140827D14 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1405AC0A4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2);
}
