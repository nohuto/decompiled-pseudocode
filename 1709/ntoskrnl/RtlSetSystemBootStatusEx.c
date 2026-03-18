/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1407235C0
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1405AC0A4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(0x20u, a1, a2, a3);
}
