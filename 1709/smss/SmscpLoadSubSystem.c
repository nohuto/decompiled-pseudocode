/*
 * XREFs of SmscpLoadSubSystem @ 0x140002490
 * Callers:
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 * Callees:
 *     SmExecPgmEx @ 0x1400023E4 (SmExecPgmEx.c)
 *     SmpExecuteImage @ 0x140002C6C (SmpExecuteImage.c)
 *     SmpEventWriteULONG @ 0x140002EC8 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002F14 (SmpEventWriteULONGString.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

__int64 __fastcall SmscpLoadSubSystem(int a1, int a2, int a3, __int64 a4, int a5)
{
  int v8; // r9d
  NTSTATUS v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  NTSTATUS v12; // eax
  _BYTE EventInformation[4]; // [rsp+48h] [rbp-41h] BYREF
  int v15; // [rsp+4Ch] [rbp-3Dh]
  HANDLE Object[3]; // [rsp+50h] [rbp-39h] BYREF
  __int128 ProcessParameters; // [rsp+68h] [rbp-21h] BYREF
  HANDLE ThreadHandle; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+B0h] [rbp+27h]

  LODWORD(ProcessParameters) = 0;
  memset_0((char *)&ProcessParameters + 8, 0, 0x60uLL);
  SmpEventWriteULONGString(&SmssEvt_LoadSubsystem_Start);
  if ( (a5 & 0x10) != 0 )
  {
    v9 = -1073741772;
  }
  else
  {
    v9 = SmpExecuteImage(a1, a2, a3, v8, 0LL, a5 | 0x20u, (PRTL_USER_PROCESS_PARAMETERS)&ProcessParameters);
    if ( v9 >= 0 )
    {
      v10 = v19;
      *((_QWORD *)SmscpSharedWindow + 1) = v19;
      if ( v20 == 1 )
        v11 = NtResumeThread(ThreadHandle, 0LL);
      else
        v11 = SmExecPgmEx(v10, &ProcessParameters);
      v9 = v11;
      if ( v11 < 0
        || (Object[0] = SmscpSubsystemRegistered,
            Object[1] = *((HANDLE *)&ProcessParameters + 1),
            v12 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL),
            v9 = v12,
            v12 < 0) )
      {
        NtTerminateProcess(*((HANDLE *)&ProcessParameters + 1), v9);
      }
      else if ( v12 != 1
             || (NtQueryEvent(SmscpSubsystemRegistered, EventBasicInformation, EventInformation, 8u, 0LL), v15) )
      {
        *((_QWORD *)SmscpSharedWindow + 1) = 0LL;
        NtSetInformationProcess(*((HANDLE *)&ProcessParameters + 1), (PROCESSINFOCLASS)68, 0LL, 0);
        v9 = 0;
      }
      else
      {
        v9 = -1073741823;
      }
    }
  }
  SmpEventWriteULONG(&SmssEvt_LoadSubsystem_Stop);
  return (unsigned int)v9;
}
