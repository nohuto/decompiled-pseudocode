/*
 * XREFs of PspIsSiloInServerSilo @ 0x14024DAFC
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
