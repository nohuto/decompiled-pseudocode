/*
 * XREFs of RtlWow64SuspendThread @ 0x180085460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800856A0 (RtlWow64GetSharedInfoProcess.c)
 *     sub_180085718 @ 0x180085718 (sub_180085718.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x18009B500 (ZwResumeThread.c)
 *     ZwSuspendThread @ 0x18009E130 (ZwSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(HANDLE SourceHandle, ULONG *a2)
{
  NTSTATUS SharedInfoProcess; // ebx
  ULONG Options; // [rsp+30h] [rbp-89h]
  unsigned int ThreadInformation; // [rsp+68h] [rbp-51h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-41h] BYREF
  __int64 v9[2]; // [rsp+88h] [rbp-31h] BYREF
  char v10; // [rsp+A4h] [rbp-15h]
  int v11[14]; // [rsp+C8h] [rbp+Fh] BYREF
  char v12; // [rsp+130h] [rbp+77h]

  TargetHandle = 0LL;
  Handle = 0LL;
  SharedInfoProcess = ZwSuspendThread(SourceHandle, a2);
  if ( SharedInfoProcess >= 0 )
  {
    SharedInfoProcess = sub_180085718(SourceHandle, (__int64)v9);
    if ( SharedInfoProcess < 0 )
      goto LABEL_14;
    if ( (HANDLE)v9[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (HANDLE)v9[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      SharedInfoProcess = RtlWow64GetSharedInfoProcess(0LL);
      if ( SharedInfoProcess < 0 )
        goto LABEL_14;
      if ( !v12
        || (v10 & 2) == 0
        || (HANDLE)v9[0] != NtCurrentTeb()->ClientId.UniqueProcess
        && (ZwQueryInformationThread(SourceHandle, ThreadSuspendCount, &ThreadInformation, 4u, 0LL),
            ThreadInformation > 1) )
      {
        SharedInfoProcess = 0;
        goto LABEL_15;
      }
      SharedInfoProcess = ZwDuplicateObject(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            SourceHandle,
                            0LL,
                            &TargetHandle,
                            0x100802u,
                            0,
                            0);
      if ( SharedInfoProcess < 0
        || (SharedInfoProcess = sub_1800060E8(
                                  0LL,
                                  0LL,
                                  6,
                                  0,
                                  0LL,
                                  0LL,
                                  Options,
                                  sub_1800D66F0,
                                  (PVOID)((unsigned __int64)TargetHandle | 1),
                                  &Handle,
                                  0LL),
            SharedInfoProcess < 0)
        || (ZwWaitForSingleObject(Handle, 0, 0LL),
            ZwQueryInformationThread(Handle, ThreadBasicInformation, v11, 0x30u, 0LL),
            SharedInfoProcess = v11[0],
            v11[0] < 0) )
      {
LABEL_14:
        ZwResumeThread(SourceHandle, 0LL);
      }
    }
  }
LABEL_15:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)SharedInfoProcess;
}
