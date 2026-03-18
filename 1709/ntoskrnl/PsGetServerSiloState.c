/*
 * XREFs of PsGetServerSiloState @ 0x140133BD0
 * Callers:
 *     SepQueueWorkItem @ 0x140133A70 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140714C58 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140714CB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x14071534C (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1256) + 1088LL);
  else
    return 1LL;
}
