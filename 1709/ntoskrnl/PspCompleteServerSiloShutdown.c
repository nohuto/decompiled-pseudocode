/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140714C58
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14050BBC0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x140133BD0 (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  struct _WORK_QUEUE_ITEM *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (struct _WORK_QUEUE_ITEM *)PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[35].List.Flink = 0LL;
  ServerSiloGlobals[35].WorkerRoutine = (void (__fastcall *)(void *))PspCompleteServerSiloShutdownDeferred;
  ServerSiloGlobals[35].Parameter = (void *)a1;
  ExQueueWorkItem(ServerSiloGlobals + 35, DelayedWorkQueue);
}
