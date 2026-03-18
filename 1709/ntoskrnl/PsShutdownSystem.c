/*
 * XREFs of PsShutdownSystem @ 0x140718C64
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x140116B88 (SmIsCompressionProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     PsEnumProcesses @ 0x1404FD1C8 (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1407193A8 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // r15
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rbx
  int v6; // ebp
  __int64 v7; // rdi
  _DWORD *NextProcess; // rbx
  ULONG_PTR v9; // rcx
  int v10; // r14d
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rsi
  ULONG_PTR v14; // rcx
  volatile __int64 **v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  volatile __int64 *v18; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  void *v20; // r14
  void *v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF

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
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  while ( 1 )
  {
    v7 = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (NextProcess[435] & 0x1000) == 0
          && NextProcess != PsIdleProcess
          && NextProcess != *((_DWORD **)ServerSiloGlobals + 110)
          && !SmIsCompressionProcess(NextProcess) )
        {
          v10 = PsTerminateProcess(v9, 0xC00002EB);
          if ( (NextProcess[193] & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
          {
            ObfReferenceObject(NextProcess);
            Object[v7] = NextProcess;
            v7 = (unsigned int)(v7 + 1);
          }
        }
        NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v7 )
      {
        v11 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v12 = Object;
        v13 = (unsigned int)v7;
        do
        {
          ObfDereferenceObject(*v12++);
          --v13;
        }
        while ( v13 );
        if ( v11 == 258 )
          break;
      }
    }
    v6 = 0;
LABEL_42:
    if ( !(_DWORD)v7 )
      goto LABEL_26;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_42;
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v14 = *((_QWORD *)ServerSiloGlobals + 110);
    if ( v14 )
    {
      PsTerminateProcess(v14, 0xC00002EB);
      PspWaitForUsermodeExit(*((_QWORD *)ServerSiloGlobals + 110));
    }
  }
  v15 = (volatile __int64 **)&PspSystemDlls;
  v16 = 6LL;
  do
  {
    if ( *v15 )
    {
      v17 = *((_QWORD *)*v15 + 5);
      if ( v17 )
        MiUnmapViewOfSection((__int64)PsInitialSystemProcess, v17, 0);
      v18 = *v15;
      CurrentThread = KeGetCurrentThread();
      v20 = (void *)ObFastReplaceObject(*v15, 0LL);
      if ( v20 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v22, 0);
        if ( (v18[1] & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v18 + 1);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObject(v20);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v21 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
  if ( (unsigned __int64)v21 >= 2 )
  {
    ObfDereferenceObject(v21);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = 1LL;
  }
  return v0;
}
