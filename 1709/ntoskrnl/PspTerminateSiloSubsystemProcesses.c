/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x140715CA8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140714CB0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessSessionId @ 0x1400AE9F0 (PsGetProcessSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 */

void *__fastcall PspTerminateSiloSubsystemProcesses(char *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  _KPROCESS *i; // r9
  int v5; // edx
  unsigned int ProcessSessionId; // eax
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v8; // rbx
  void *result; // rax
  _KPROCESS *v10; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  BYTE4(v12) = 0;
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v12, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, v11, i);
    v8 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    v5 = HIDWORD(NextJobProcess[2].ActiveProcessors.Bitmap[0]);
    if ( ((v5 & 0x40) != 0 || (NextJobProcess[1].DirectoryTableBase & 1) == 0) && (v5 & 0x1000) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)NextJobProcess);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess((__int64)a1, ProcessSessionId, v8);
    }
  }
  result = PsGetServerSiloGlobals((__int64)a1);
  v10 = (_KPROCESS *)*((_QWORD *)result + 110);
  if ( v10 )
    return (void *)PspShutdownCsrProcess((__int64)a1, **((_DWORD **)result + 138), v10);
  return result;
}
