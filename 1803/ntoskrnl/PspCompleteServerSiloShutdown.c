/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140778E48
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14052F000 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x1400C3558 (PsGetServerSiloState.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
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
