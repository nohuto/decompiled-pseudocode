/*
 * XREFs of PsInvokeWin32Callout @ 0x1404F9F70
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x140115D14 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 *     PspQueryProcessWin32TimersExpired @ 0x1402393F0 (PspQueryProcessWin32TimersExpired.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140239AB0 (PspSetProcessTimerDelayForWin32.c)
 *     ExpWin32OpenProcedure @ 0x140442160 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140442300 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x140442E30 (ExpWin32CloseProcedure.c)
 *     PfpQueryGpuUtilization @ 0x140446E28 (PfpQueryGpuUtilization.c)
 *     ExpWin32ParseProcedure @ 0x14044A0B0 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x14044BA10 (ExpWin32DeleteProcedure.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406E1890 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     MmSessionGetWin32Callouts @ 0x14008BBF0 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, int *a4)
{
  __int64 v4; // rbp
  int *v5; // r10
  _RTL_RUN_ONCE *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned int v10; // esi
  __int64 result; // rax
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  _RTL_RUN_ONCE *Win32Callouts; // rax
  int *v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return 3221225485LL;
      v17 = 0LL;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
      {
        SessionId = MmGetSessionId(Process);
        if ( *v15 == SessionId )
        {
          Win32Callouts = MmSessionGetWin32Callouts();
          return ExCallCallBack((signed __int64 *)Win32Callouts, v4, a2);
        }
      }
      v17 = v5;
    }
    result = ExCallSessionCallBack(v17, v4, a2, (int *)&v18);
    if ( (int)result >= 0 )
      return v18;
  }
  else
  {
    v7 = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v4, a2);
      ExDereferenceCallBackBlock((signed __int64 *)v7, v9);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v10;
  }
  return result;
}
