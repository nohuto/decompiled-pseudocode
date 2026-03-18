/*
 * XREFs of PsShutdownSystem @ 0x1406E2814
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     SmIsCompressionProcess @ 0x14001E628 (SmIsCompressionProcess.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     PsEnumProcesses @ 0x1404B0354 (PsEnumProcesses.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1406E2DE4 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r13d
  _QWORD *ServerSiloGlobals; // r15
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rbx
  int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 NextProcess; // rbx
  ULONG_PTR v10; // rcx
  int v11; // r14d
  NTSTATUS v12; // r14d
  PVOID *v13; // rbx
  __int64 v14; // rsi
  ULONG_PTR v15; // rcx
  volatile __int64 **v16; // rbx
  unsigned __int64 v17; // rdx
  volatile __int64 *v18; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  void *v20; // rbp
  void *v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-98h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-50h] BYREF

  Timeout.QuadPart = -1000000000LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(unsigned __int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  v7 = 4LL;
  while ( 1 )
  {
    v8 = 0LL;
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (PEPROCESS)NextProcess != PsInitialSystemProcess
          && (PVOID)NextProcess != PsIdleProcess
          && NextProcess != ServerSiloGlobals[110]
          && !SmIsCompressionProcess((PVOID)NextProcess) )
        {
          v11 = PsTerminateProcess(v10);
          if ( (*(_DWORD *)(NextProcess + 772) & 4) == 0 && v11 != 290 && (unsigned int)v8 < 3 )
          {
            ObfReferenceObject((PVOID)NextProcess);
            Object[v8] = (PVOID)NextProcess;
            v8 = (unsigned int)(v8 + 1);
          }
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v8 )
      {
        v12 = KeWaitForMultipleObjects(v8, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v13 = Object;
        v14 = (unsigned int)v8;
        do
        {
          ObfDereferenceObject(*v13++);
          --v14;
        }
        while ( v14 );
        if ( v12 == 258 )
          break;
      }
    }
    v6 = 0;
LABEL_42:
    if ( !(_DWORD)v8 )
      goto LABEL_26;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_42;
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v15 = ServerSiloGlobals[110];
    if ( v15 )
    {
      PsTerminateProcess(v15);
      PspWaitForUsermodeExit(ServerSiloGlobals[110]);
    }
  }
  v16 = (volatile __int64 **)&PspSystemDlls;
  do
  {
    if ( *v16 )
    {
      v17 = *((_QWORD *)*v16 + 5);
      if ( v17 )
        MiUnmapViewOfSection(PsInitialSystemProcess, v17, 0);
      v18 = *v16;
      CurrentThread = KeGetCurrentThread();
      v20 = (void *)ObFastReplaceObject(*v16, 0LL);
      if ( v20 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v22, 0);
        if ( (v18[1] & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v18 + 1);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        ObfDereferenceObject(v20);
      }
    }
    ++v16;
    --v7;
  }
  while ( v7 );
  ZwClose(PspInitialSystemProcessHandle);
  PspInitialSystemProcessHandle = 0LL;
  v21 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
  if ( (unsigned __int64)v21 >= 2 )
  {
    ObfDereferenceObject(v21);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = 1LL;
  }
  return v0;
}
