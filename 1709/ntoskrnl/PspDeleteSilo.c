/*
 * XREFs of PspDeleteSilo @ 0x14071534C
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     PsGetServerSiloState @ 0x140133BD0 (PsGetServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PsIsServerSilo(a1) && (unsigned int)PsGetServerSiloState(v2) != 4 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATED");
  if ( PsIsServerSilo(v2) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v3 + 1256));
    *(_QWORD *)(a1 + 1256) = 0LL;
  }
}
