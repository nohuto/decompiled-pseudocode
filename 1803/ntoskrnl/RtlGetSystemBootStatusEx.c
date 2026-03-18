/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140627A50
 * Callers:
 *     PopCheckShutdownMarker @ 0x1408A8FA8 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140611E5C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(0x1Fu, a1, a2, a3);
}
