/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x140779E3C
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessSessionId @ 0x14006CE20 (PsGetProcessSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     PspGetNextJobProcess @ 0x14052F0B0 (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 */

void *__fastcall PspTerminateSiloSubsystemProcesses(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  _KPROCESS *i; // r9
  int v5; // edx
  unsigned int ProcessSessionId; // eax
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v8; // rbx
  void *result; // rax
  __int64 v10; // rcx
  _KPROCESS *v11; // r8
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  BYTE4(v13) = 0;
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v13, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, v12, i);
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
  v11 = (_KPROCESS *)*((_QWORD *)result + 110);
  if ( v11 )
    return (void *)PspShutdownCsrProcess(v10, **((_DWORD **)result + 138), v11);
  return result;
}
