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

__int64 __fastcall RtlWow64SuspendThread(__int64 a1)
{
  int v2; // edx
  int SharedInfoProcess; // ebx
  int v4; // eax
  bool v5; // cl
  __int64 v7; // [rsp+30h] [rbp-89h]
  __int64 v8; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v9; // [rsp+68h] [rbp-51h] BYREF
  __int64 v10; // [rsp+70h] [rbp-49h] BYREF
  __int64 v11; // [rsp+78h] [rbp-41h] BYREF
  __int64 v12; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v13[2]; // [rsp+88h] [rbp-31h] BYREF
  char v14; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v15[40]; // [rsp+A0h] [rbp-19h] BYREF
  int v16[14]; // [rsp+C8h] [rbp+Fh] BYREF
  char v17; // [rsp+130h] [rbp+77h] BYREF
  bool v18; // [rsp+138h] [rbp+7Fh]

  v8 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  SharedInfoProcess = ZwSuspendThread();
  if ( SharedInfoProcess < 0 )
    goto LABEL_21;
  SharedInfoProcess = sub_180085718(a1, v2, (unsigned int)&v14, (unsigned int)&v8, (__int64)v13);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  if ( (HANDLE)v13[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (HANDLE)v13[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_21;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(v8, &v17, v15);
  if ( SharedInfoProcess < 0 )
  {
LABEL_20:
    ZwResumeThread(a1, 0LL);
    goto LABEL_21;
  }
  if ( !v17 || (v15[4] & 2) == 0 )
    goto LABEL_7;
  if ( (HANDLE)v13[0] != NtCurrentTeb()->ClientId.UniqueProcess )
  {
    if ( v8 )
    {
      v4 = ZwQueryInformationProcess(v8, 7LL, &v12);
      if ( v4 < 0 )
      {
LABEL_16:
        ZwQueryInformationThread(a1, 35LL, &v9, 4LL, 0LL);
        if ( v9 <= 1 )
          goto LABEL_17;
LABEL_7:
        SharedInfoProcess = 0;
        goto LABEL_21;
      }
      v5 = v12 != 0;
    }
    else
    {
      v5 = v18;
      v4 = -1073741811;
    }
    if ( v4 >= 0 && v5 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_17:
  SharedInfoProcess = ZwDuplicateObject(-1LL, a1, v8, &v10, 1050626, 0, 0);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  SharedInfoProcess = sub_1800060E8(v8, 0LL, 6, 0, 0LL, 0LL, v7, (__int64)sub_1800D66F0, v10 | 1, &v11, 0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  ZwWaitForSingleObject(v11, 0LL, 0LL);
  ZwQueryInformationThread(v11, 0LL, v16, 48LL, 0LL);
  SharedInfoProcess = v16[0];
  if ( v16[0] < 0 )
    goto LABEL_20;
LABEL_21:
  if ( v10 )
    ZwDuplicateObject(v8, v10, 0LL, 0LL, 0, 0, 3);
  if ( v8 )
    ZwClose(v8);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)SharedInfoProcess;
}
