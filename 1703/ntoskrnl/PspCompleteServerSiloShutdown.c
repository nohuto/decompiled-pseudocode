/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x1406DE7E4
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14054D280 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     PsGetServerSiloState @ 0x140143578 (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  struct _WORK_QUEUE_ITEM *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (struct _WORK_QUEUE_ITEM *)PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[34].List.Flink = 0LL;
  ServerSiloGlobals[34].WorkerRoutine = (void (__fastcall *)(void *))PspCompleteServerSiloShutdownDeferred;
  ServerSiloGlobals[34].Parameter = (void *)a1;
  ExQueueWorkItem(ServerSiloGlobals + 34, DelayedWorkQueue);
}
