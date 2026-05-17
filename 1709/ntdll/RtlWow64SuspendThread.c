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

__int64 __fastcall RtlWow64SuspendThread(__int64 a1)
{
  int v2; // edx
  int SharedInfoProcess; // ebx
  bool v5; // di
  NTSTATUS v6; // eax
  bool v7; // cl
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-89h]
  HANDLE Handle; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v11; // [rsp+68h] [rbp-51h] BYREF
  __int64 v12; // [rsp+70h] [rbp-49h] BYREF
  HANDLE v13; // [rsp+78h] [rbp-41h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v15[2]; // [rsp+88h] [rbp-31h] BYREF
  char v16; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v17[40]; // [rsp+A0h] [rbp-19h] BYREF
  int v18[14]; // [rsp+C8h] [rbp+Fh] BYREF
  char v19; // [rsp+130h] [rbp+77h] BYREF
  bool v20; // [rsp+138h] [rbp+7Fh]

  Handle = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  SharedInfoProcess = NtSuspendThread();
  if ( SharedInfoProcess < 0 )
    goto LABEL_9;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(a1, v2, (unsigned int)&v16, (unsigned int)&Handle, (__int64)v15);
  if ( SharedInfoProcess < 0 )
    goto LABEL_30;
  if ( (void *)v15[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (void *)v15[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_9;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(Handle, &v19, v17);
  if ( SharedInfoProcess < 0 )
  {
LABEL_30:
    ZwResumeThread(a1, 0LL);
    goto LABEL_9;
  }
  if ( !v19 || (v17[4] & 2) == 0 )
  {
    SharedInfoProcess = 0;
    goto LABEL_9;
  }
  v5 = 1;
  if ( (void *)v15[0] != NtCurrentTeb()->ClientId.UniqueProcess )
  {
    if ( Handle )
    {
      v6 = NtQueryInformationProcess(Handle, ProcessDebugPort, &ProcessInformation, 8u, 0LL);
      if ( v6 < 0 )
        goto LABEL_24;
      v7 = ProcessInformation != 0;
    }
    else
    {
      v7 = v20;
      v6 = -1073741811;
    }
    if ( v6 >= 0 && v7 )
    {
      v5 = 0;
      goto LABEL_25;
    }
LABEL_24:
    ZwQueryInformationThread(a1, 35LL, &v11);
    v5 = v11 <= 1;
  }
LABEL_25:
  SharedInfoProcess = ZwDuplicateObject(-1LL, a1, Handle, &v12, 1050626, 0, 0);
  if ( SharedInfoProcess < 0 )
    goto LABEL_30;
  v8 = v12;
  if ( v5 )
    v8 = v12 | 1;
  SharedInfoProcess = RtlpCreateUserThreadEx(
                        (__int64)Handle,
                        0LL,
                        6,
                        0,
                        0LL,
                        0LL,
                        v9,
                        (__int64)RtlpWow64SuspendWorker,
                        v8,
                        &v13,
                        0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_30;
  NtWaitForSingleObject(v13, 0, 0LL);
  ZwQueryInformationThread(v13, 0LL, v18);
  SharedInfoProcess = v18[0];
  if ( v18[0] < 0 )
    goto LABEL_30;
LABEL_9:
  if ( v12 )
    ZwDuplicateObject(Handle, v12, 0LL, 0LL, 0, 0, 3);
  if ( Handle )
    NtClose(Handle);
  if ( v13 )
    NtClose(v13);
  return (unsigned int)SharedInfoProcess;
}
