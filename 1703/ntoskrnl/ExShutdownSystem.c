/*
 * XREFs of ExShutdownSystem @ 0x14041A7C8
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExpRecordShutdownTime @ 0x140259E30 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 */

__int64 __fastcall ExShutdownSystem(int a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx

  result = (__int64)PsGetServerSiloGlobals(0LL);
  v3 = result;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      result = (unsigned int)PopShutdownCleanly;
      if ( (PopShutdownCleanly & 2) != 0 )
        return ExSwapinWorkerThreads(0LL);
    }
  }
  else
  {
    ExpRecordShutdownTime();
    v4 = *(void **)(v3 + 888);
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *(_QWORD *)(v3 + 888) = 0LL;
    }
    v5 = *(void **)(v3 + 880);
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      *(_QWORD *)(v3 + 880) = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_140344A18 )
    {
      ObfDereferenceObject(qword_140344A18);
      qword_140344A18 = 0LL;
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
    return ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  }
  return result;
}
