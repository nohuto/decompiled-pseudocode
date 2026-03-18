/*
 * XREFs of PspJobIsAppSilo @ 0x140238A38
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
    return !PspIsServerSilo(a1);
  return v1;
}
