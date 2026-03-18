/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x140714CB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PspSendJobNotification @ 0x1400D2E84 (PspSendJobNotification.c)
 *     PsGetServerSiloState @ 0x140133BD0 (PsGetServerSiloState.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140715CA8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x1407199BC (PspNotifyServerSiloTermination.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(_QWORD *Object)
{
  void *ServerSiloGlobals; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rdi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  if ( (unsigned int)PsGetServerSiloState((__int64)Object) != 3 )
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
  PspNotifyServerSiloTermination(Object);
  PspDeleteExternalServerSiloState(Object);
  v5 = (void *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  v6 = *((_DWORD *)ServerSiloGlobals + 273);
  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
  if ( Object[57] && (*((_DWORD *)Object + 219) & 0x2000) != 0 )
    PspSendJobNotification((__int64)Object, 13LL, v6, 0);
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  return ObfDereferenceObject(Object);
}
