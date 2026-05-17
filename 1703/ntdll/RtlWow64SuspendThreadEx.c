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

__int64 __fastcall RtlWow64SuspendThreadEx(int a1, __int64 a2, char a3)
{
  int v5; // edx
  int InformationProcess; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-59h]
  __int64 v10; // [rsp+60h] [rbp-29h] BYREF
  __int64 v11; // [rsp+68h] [rbp-21h]
  _QWORD v12[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v13; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v14[2]; // [rsp+88h] [rbp-1h] BYREF
  int v15; // [rsp+98h] [rbp+Fh]
  char v16; // [rsp+108h] [rbp+7Fh] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12[0] = 0LL;
  InformationProcess = ZwSuspendThread();
  if ( InformationProcess >= 0 )
  {
    InformationProcess = sub_1800DD1E4(a1, v5, (unsigned int)&v13, (unsigned int)&v10, (__int64)v14);
    if ( InformationProcess < 0 )
      goto LABEL_15;
    if ( (HANDLE)v14[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (HANDLE)v14[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      InformationProcess = ZwQueryInformationProcess();
      if ( InformationProcess < 0 )
        goto LABEL_15;
      if ( !v12[1] )
      {
LABEL_7:
        InformationProcess = 0;
        goto LABEL_16;
      }
      InformationProcess = sub_1800DD168(v10, v13, &v16);
      if ( InformationProcess < 0 )
        goto LABEL_15;
      if ( !v16 )
        goto LABEL_7;
      LODWORD(v9) = 2;
      InformationProcess = ZwDuplicateObject();
      if ( InformationProcess < 0 )
        goto LABEL_15;
      v7 = v11;
      if ( a3 )
        v7 = v11 | 1;
      InformationProcess = sub_180052D68(v10, 0LL, 6, 0, 0LL, 0LL, v9, (__int64)sub_1800DD2F0, v7, v12, 0LL);
      if ( InformationProcess < 0
        || (ZwWaitForSingleObject(), ZwQueryInformationThread(), InformationProcess = v15, v15 < 0) )
      {
LABEL_15:
        ZwResumeThread();
      }
    }
  }
LABEL_16:
  if ( v11 )
    ZwDuplicateObject();
  if ( v10 )
    ZwClose();
  if ( v12[0] )
    ZwClose();
  return (unsigned int)InformationProcess;
}
