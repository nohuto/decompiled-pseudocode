/*
 * XREFs of PspDeleteSilo @ 0x1406DEEDC
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 * Callees:
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 *     PsGetServerSiloState @ 0x140143578 (PsGetServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x1406DECFC (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PspIsServerSilo(a1) && (unsigned int)PsGetServerSiloState(v2) != 4 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATED");
  if ( PspIsServerSilo(v2) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v3 + 1256));
    *(_QWORD *)(a1 + 1256) = 0LL;
  }
}
