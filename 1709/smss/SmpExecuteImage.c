/*
 * XREFs of SmpExecuteImage @ 0x140002C6C
 * Callers:
 *     SmscpLoadSubSystem @ 0x140002490 (SmscpLoadSubSystem.c)
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 *     SmpInvokeAutoChk @ 0x140004E30 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x14001223C (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x140012EC0 (SmpStartServerSilo.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140002EC8 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140002F14 (SmpEventWriteULONGString.c)
 *     SmpSelectNodeNumber @ 0x140003024 (SmpSelectNodeNumber.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

__int64 __fastcall SmpExecuteImage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int16 a6,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  PRTL_USER_PROCESS_PARAMETERS v7; // rbx
  __int64 result; // rax
  __int16 v10; // si
  __int16 v11; // r14
  ULONG v12; // ecx
  int v13; // r14d
  int v14; // edi
  __int64 v15; // r8
  int UserProcess; // edi
  void *v17; // rcx
  _WORD v18[24]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+98h] [rbp-70h]
  _BYTE ProcessInformation[32]; // [rsp+A0h] [rbp-68h] BYREF
  char v21; // [rsp+D8h] [rbp-30h] BYREF
  int v22; // [rsp+190h] [rbp+88h] BYREF

  v22 = a4;
  v7 = (PRTL_USER_PROCESS_PARAMETERS)&v21;
  if ( ProcessParameters )
    v7 = ProcessParameters;
  result = RtlCreateProcessParametersEx(
             &ProcessParameters,
             a1,
             0LL,
             a2,
             a3,
             SmpDefaultEnvironment,
             0LL,
             0LL,
             0LL,
             0LL,
             1);
  if ( (int)result >= 0 )
  {
    v10 = a6;
    v11 = a6;
    v12 = SmpDebug;
    if ( (a6 & 1) != 0 )
      v12 = 1;
    ProcessParameters->DebugFlags = v12;
    v13 = v11 & 0x400;
    if ( v13 )
    {
      ProcessParameters->Flags |= 0x40000u;
      v14 = SmpSelectNodeNumber() + 1;
    }
    else
    {
      LOWORD(v14) = 0;
    }
    if ( (v10 & 0x1000) != 0 )
      ProcessParameters->Flags |= 0x400000u;
    if ( (v10 & 0x4000) != 0 )
      ProcessParameters->Flags |= 0x800000u;
    ProcessParameters->Flags |= 0x20000u;
    v7->MaximumLength = 104;
    SmpEventWriteULONGString(&SmssEvt_ExecuteImage_Start);
    memset_0(v18, 0, 0x38uLL);
    v18[0] = 1;
    LOBYTE(v15) = v13 != 0;
    v18[1] = v14;
    v19 = a5;
    UserProcess = RtlCreateUserProcessEx(a1, ProcessParameters, v15, v18, v7);
    RtlDestroyProcessParameters(ProcessParameters);
    if ( UserProcess >= 0 )
      NtQueryInformationProcess(*(HANDLE *)&v7->Flags, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
    if ( UserProcess < 0 )
      return (unsigned int)UserProcess;
    if ( (v10 & 0x2000) != 0 )
    {
      v17 = *(void **)&v7->Flags;
      v22 = 1;
      UserProcess = NtSetInformationProcess(v17, ProcessBreakOnTermination, &v22, 4u);
      if ( UserProcess < 0 )
        goto LABEL_29;
    }
    if ( (v10 & 0x20) == 0 )
    {
      if ( LODWORD(v7->CurrentDirectory.Handle) != 1 )
      {
        UserProcess = -1073741701;
LABEL_29:
        NtTerminateProcess(*(HANDLE *)&v7->Flags, UserProcess);
        NtWaitForSingleObject(*(HANDLE *)&v7->Flags, 0, 0LL);
        goto LABEL_26;
      }
      NtResumeThread(v7->ConsoleHandle, 0LL);
      if ( (v10 & 2) == 0 )
        NtWaitForSingleObject(v7->ConsoleHandle, 0, 0LL);
    }
    if ( (v10 & 0x20) != 0 )
      return (unsigned int)UserProcess;
LABEL_26:
    NtClose(v7->ConsoleHandle);
    NtClose(*(HANDLE *)&v7->Flags);
    return (unsigned int)UserProcess;
  }
  return result;
}
