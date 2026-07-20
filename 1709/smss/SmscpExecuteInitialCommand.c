/*
 * XREFs of SmscpExecuteInitialCommand @ 0x140002340
 * Callers:
 *     SmscMain @ 0x140002038 (SmscMain.c)
 * Callees:
 *     SmExecPgmEx @ 0x1400023E4 (SmExecPgmEx.c)
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

__int64 __fastcall SmscpExecuteInitialCommand(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed __int32 v7[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v8; // [rsp+30h] [rbp-78h] BYREF
  HANDLE ProcessHandle[13]; // [rsp+38h] [rbp-70h] BYREF

  v8 = 0;
  memset_0(ProcessHandle, 0, 0x60uLL);
  result = SmpExecuteCommand(a3, (PRTL_USER_PROCESS_PARAMETERS)&v8);
  if ( (int)result < 0 )
  {
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v7, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1063;
    *((_DWORD *)SmscpSharedWindow + 1) = result;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
  }
  else
  {
    *(_DWORD *)SmscpSharedWindow = 2;
    result = SmExecPgmEx(v5, &v8);
    v6 = result;
    if ( (int)result < 0 )
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v7, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 1088;
      *((_DWORD *)SmscpSharedWindow + 1) = result;
      *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
      NtTerminateProcess(ProcessHandle[0], result);
      return v6;
    }
  }
  return result;
}
