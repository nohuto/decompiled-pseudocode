/*
 * XREFs of PspJobIsAppSilo @ 0x14024DB18
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
