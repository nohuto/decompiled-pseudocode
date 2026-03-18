/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x1406DF834
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1406DE840 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140021FE0 (PsGetProcessSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJobProcess @ 0x14054D334 (PspGetNextJobProcess.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 */

void *__fastcall PspTerminateSiloSubsystemProcesses(char *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  _KPROCESS *i; // r9
  unsigned int ProcessSessionId; // eax
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v7; // rbx
  void *result; // rax
  _KPROCESS *v9; // r8
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  BYTE4(v11) = 0;
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v11, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v7 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, v10, i);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (NextJobProcess[2].ActiveProcessors.Bitmap[0] & 0x10000000000LL) != 0
      || (NextJobProcess[1].DirectoryTableBase & 1) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)NextJobProcess);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess((__int64)a1, ProcessSessionId, v7);
    }
  }
  result = PsGetServerSiloGlobals((__int64)a1);
  v9 = (_KPROCESS *)*((_QWORD *)result + 110);
  if ( v9 )
    return (void *)PspShutdownCsrProcess((__int64)a1, **((_DWORD **)result + 134), v9);
  return result;
}
