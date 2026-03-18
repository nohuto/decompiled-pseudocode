/*
 * XREFs of PsGetServerSiloState @ 0x140143578
 * Callers:
 *     SepQueueWorkItem @ 0x140143418 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1406DE7E4 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1406DE840 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x1406DEEDC (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1256) + 1056LL);
  else
    return 1LL;
}
