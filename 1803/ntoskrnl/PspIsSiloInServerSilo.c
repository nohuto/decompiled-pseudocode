/*
 * XREFs of PspIsSiloInServerSilo @ 0x140283EDC
 * Callers:
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
