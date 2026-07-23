/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1800EAD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(0x20u, a1, a2, a3);
}
