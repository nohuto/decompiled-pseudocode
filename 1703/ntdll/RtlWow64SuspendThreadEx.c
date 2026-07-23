/*
 * XREFs of RtlWow64SuspendThreadEx @ 0x1800DCF70
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800DCF60 (RtlWow64SuspendThread.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwSuspendThread @ 0x1800A88D0 (ZwSuspendThread.c)
 *     sub_1800DD168 @ 0x1800DD168 (sub_1800DD168.c)
 *     sub_1800DD1E4 @ 0x1800DD1E4 (sub_1800DD1E4.c)
 */

__int64 __fastcall RtlWow64SuspendThreadEx(HANDLE SourceHandle, ULONG *a2, char a3)
{
  NTSTATUS v5; // ebx
  void *v6; // rax
  ULONG Options; // [rsp+30h] [rbp-59h]
  HANDLE TargetHandle; // [rsp+68h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-19h] BYREF
  __int64 ProcessInformation; // [rsp+78h] [rbp-11h] BYREF
  __int64 v12[2]; // [rsp+88h] [rbp-1h] BYREF
  int ThreadInformation[14]; // [rsp+98h] [rbp+Fh] BYREF
  char v14; // [rsp+108h] [rbp+7Fh]

  TargetHandle = 0LL;
  Handle = 0LL;
  v5 = ZwSuspendThread(SourceHandle, a2);
  if ( v5 >= 0 )
  {
    v5 = sub_1800DD1E4(SourceHandle, (__int64)v12);
    if ( v5 < 0 )
      goto LABEL_15;
    if ( (HANDLE)v12[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (HANDLE)v12[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v5 = ZwQueryInformationProcess(0LL, ProcessWow64Information, &ProcessInformation, 8u, 0LL);
      if ( v5 < 0 )
        goto LABEL_15;
      if ( !ProcessInformation )
      {
LABEL_7:
        v5 = 0;
        goto LABEL_16;
      }
      v5 = sub_1800DD168(0LL);
      if ( v5 < 0 )
        goto LABEL_15;
      if ( !v14 )
        goto LABEL_7;
      v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, SourceHandle, 0LL, &TargetHandle, 0, 0, 2u);
      if ( v5 < 0 )
        goto LABEL_15;
      v6 = TargetHandle;
      if ( a3 )
        v6 = (void *)((unsigned __int64)TargetHandle | 1);
      v5 = sub_180052D68(0LL, 0LL, 6, 0, 0LL, 0LL, Options, sub_1800DD2F0, v6, &Handle, 0LL);
      if ( v5 < 0
        || (ZwWaitForSingleObject(Handle, 0, 0LL),
            ZwQueryInformationThread(Handle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL),
            v5 = ThreadInformation[0],
            ThreadInformation[0] < 0) )
      {
LABEL_15:
        ZwResumeThread(SourceHandle, 0LL);
      }
    }
  }
LABEL_16:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
