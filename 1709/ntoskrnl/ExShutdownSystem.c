/*
 * XREFs of ExShutdownSystem @ 0x14043A73C
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ExpRecordShutdownTime @ 0x140283B80 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 */

char __fastcall ExShutdownSystem(int a1)
{
  _QWORD *ServerSiloGlobals; // rax
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  v3 = ServerSiloGlobals;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      LOBYTE(ServerSiloGlobals) = PopShutdownCleanly;
      if ( (PopShutdownCleanly & 2) != 0 )
        LOBYTE(ServerSiloGlobals) = ExSwapinWorkerThreads(0LL);
    }
  }
  else
  {
    ExpRecordShutdownTime();
    v4 = (void *)v3[111];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      v3[111] = 0LL;
    }
    v5 = (void *)v3[110];
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      v3[110] = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_14035E518 )
    {
      ObfDereferenceObject(qword_14035E518);
      qword_14035E518 = 0LL;
    }
    if ( ExpProductTypeKey )
    {
      ObCloseHandle(ExpProductTypeKey, 0);
      ExpProductTypeKey = 0LL;
    }
    if ( ExpSetupKey )
    {
      ObCloseHandle(ExpSetupKey, 0);
      ExpSetupKey = 0LL;
    }
    LOBYTE(ServerSiloGlobals) = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  }
  return (char)ServerSiloGlobals;
}
