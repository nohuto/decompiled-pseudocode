/*
 * XREFs of RtlWow64SuspendThread @ 0x18008F2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800645D8 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18008F3D0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64OpenThreadProcess @ 0x18008F448 (RtlpWow64OpenThreadProcess.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A0840 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x1800A0B00 (ZwResumeThread.c)
 *     NtSuspendThread @ 0x1800A36F0 (NtSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(HANDLE SourceHandle, ULONG *a2)
{
  NTSTATUS SharedInfoProcess; // ebx
  bool v5; // di
  void *v6; // rax
  ULONG Options; // [rsp+30h] [rbp-89h]
  unsigned int ThreadInformation; // [rsp+68h] [rbp-51h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-49h] BYREF
  HANDLE ThreadHandle; // [rsp+78h] [rbp-41h] BYREF
  __int64 v11[2]; // [rsp+88h] [rbp-31h] BYREF
  char v12; // [rsp+A4h] [rbp-15h]
  int v13[14]; // [rsp+C8h] [rbp+Fh] BYREF
  char v14; // [rsp+130h] [rbp+77h]

  TargetHandle = 0LL;
  ThreadHandle = 0LL;
  SharedInfoProcess = NtSuspendThread(SourceHandle, a2);
  if ( SharedInfoProcess >= 0 )
  {
    SharedInfoProcess = RtlpWow64OpenThreadProcess(SourceHandle, (__int64)v11);
    if ( SharedInfoProcess < 0 )
      goto LABEL_21;
    if ( (void *)v11[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (void *)v11[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      SharedInfoProcess = RtlWow64GetSharedInfoProcess(0LL);
      if ( SharedInfoProcess < 0 )
        goto LABEL_21;
      if ( !v14 || (v12 & 2) == 0 )
      {
        SharedInfoProcess = 0;
        goto LABEL_9;
      }
      v5 = 1;
      if ( (void *)v11[0] != NtCurrentTeb()->ClientId.UniqueProcess )
      {
        ZwQueryInformationThread(SourceHandle, ThreadSuspendCount, &ThreadInformation, 4u, 0LL);
        v5 = ThreadInformation <= 1;
      }
      SharedInfoProcess = ZwDuplicateObject(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            SourceHandle,
                            0LL,
                            &TargetHandle,
                            0x100802u,
                            0,
                            0);
      if ( SharedInfoProcess < 0 )
        goto LABEL_21;
      v6 = TargetHandle;
      if ( v5 )
        v6 = (void *)((unsigned __int64)TargetHandle | 1);
      SharedInfoProcess = RtlpCreateUserThreadEx(
                            0LL,
                            0LL,
                            6,
                            0,
                            0LL,
                            0LL,
                            Options,
                            RtlpWow64SuspendWorker,
                            v6,
                            &ThreadHandle,
                            0LL);
      if ( SharedInfoProcess < 0
        || (NtWaitForSingleObject(ThreadHandle, 0, 0LL),
            ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, v13, 0x30u, 0LL),
            SharedInfoProcess = v13[0],
            v13[0] < 0) )
      {
LABEL_21:
        ZwResumeThread(SourceHandle, 0LL);
      }
    }
  }
LABEL_9:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( ThreadHandle )
    NtClose(ThreadHandle);
  return (unsigned int)SharedInfoProcess;
}
