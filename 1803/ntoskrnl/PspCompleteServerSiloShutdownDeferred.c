/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x140778EA0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PspSendJobNotification @ 0x14008522C (PspSendJobNotification.c)
 *     PsGetServerSiloState @ 0x1400C3558 (PsGetServerSiloState.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x140537038 (PspLockJobShared.c)
 *     PspDeleteExternalServerSiloState @ 0x140779254 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140779E3C (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x14077D71C (PspNotifyServerSiloTermination.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(_QWORD *Object)
{
  void *ServerSiloGlobals; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rdi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  if ( (unsigned int)PsGetServerSiloState(v3) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 110);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 110) = 0LL;
  }
  v5 = (void *)*((_QWORD *)ServerSiloGlobals + 111);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)ServerSiloGlobals + 111) = 0LL;
  }
  PspNotifyServerSiloTermination(Object);
  PspDeleteExternalServerSiloState(Object);
  v6 = (void *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  v7 = *((_DWORD *)ServerSiloGlobals + 273);
  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
  if ( Object[57] && (*((_DWORD *)Object + 219) & 0x2000) != 0 )
    PspSendJobNotification((__int64)Object, 13LL, v7, 0);
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  return ObfDereferenceObject(Object);
}
