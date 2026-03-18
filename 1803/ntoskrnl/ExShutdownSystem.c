/*
 * XREFs of ExShutdownSystem @ 0x140487504
 * Callers:
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExpRecordShutdownTime @ 0x1402B7940 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 */

char ExShutdownSystem()
{
  _QWORD *ServerSiloGlobals; // rax
  int v1; // edx
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  v3 = ServerSiloGlobals;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      LOBYTE(ServerSiloGlobals) = PopShutdownCleanly;
      if ( (PopShutdownCleanly & 2) != 0 )
        LOBYTE(ServerSiloGlobals) = ExSwapinWorkerThreads(v2);
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
    if ( qword_1403A1B48 )
    {
      ObfDereferenceObject(qword_1403A1B48);
      qword_1403A1B48 = 0LL;
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
    LOBYTE(ServerSiloGlobals) = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL, v6, v7);
  }
  return (char)ServerSiloGlobals;
}
