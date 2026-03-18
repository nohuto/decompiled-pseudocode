/*
 * XREFs of PsGetServerSiloState @ 0x1400C3558
 * Callers:
 *     SepQueueWorkItem @ 0x1400C33F8 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140778E48 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x1407794DC (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
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
