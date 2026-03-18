/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x1406DE840
 * Callers:
 *     <none>
 * Callees:
 *     PspSendJobNotification @ 0x140039434 (PspSendJobNotification.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsGetServerSiloState @ 0x140143578 (PsGetServerSiloState.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x1406E33E8 (PspNotifyServerSiloTermination.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(__int64 a1)
{
  void *ServerSiloGlobals; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rdi

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v3 = (void *)*((_QWORD *)ServerSiloGlobals + 110);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)ServerSiloGlobals + 110) = 0LL;
  }
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 111);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 111) = 0LL;
  }
  PspNotifyServerSiloTermination(a1);
  PspDeleteExternalServerSiloState(a1);
  v5 = (void *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  v6 = *((_DWORD *)ServerSiloGlobals + 265);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  if ( *(_QWORD *)(a1 + 456) && (*(_DWORD *)(a1 + 876) & 0x2000) != 0 )
    PspSendJobNotification(a1, 13LL, v6, 0);
  PspUnlockJob(a1, (__int64)CurrentThread);
  return ObfDereferenceObject((PVOID)a1);
}
