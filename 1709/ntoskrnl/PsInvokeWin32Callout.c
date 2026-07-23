/*
 * XREFs of PsInvokeWin32Callout @ 0x1404D24E0
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x1400BB8D4 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14024EA7C (PspSetProcessTimerDelayForWin32.c)
 *     PfpQueryGpuUtilization @ 0x14044832C (PfpQueryGpuUtilization.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     ExpWin32OpenProcedure @ 0x1404D5050 (ExpWin32OpenProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1404D5120 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1404D51E0 (ExpWin32OkayToCloseProcedure.c)
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14057D084 (PsFreezeProcess.c)
 *     ExpWin32DeleteProcedure @ 0x14057D800 (ExpWin32DeleteProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1405852D0 (ExpWin32ParseProcedure.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140717BC0 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x1400A54D0 (MmSessionGetWin32Callouts.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1404D25EC (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x1404F0184 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  int v7; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v10; // r9
  _RTL_RUN_ONCE *v11; // rbp
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rsi
  int v14; // ebx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  if ( !a3 )
  {
    Win32Callouts = MmSessionGetWin32Callouts();
    return (unsigned int)ExCallCallBack(Win32Callouts, v4, a2);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return (unsigned int)-1073741811;
    v17 = 0LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      SessionId = MmGetSessionId((__int64)Process);
      if ( *v10 == SessionId )
      {
        v11 = MmSessionGetWin32Callouts();
        v12 = ExReferenceCallBackBlock((signed __int64 *)v11);
        v13 = v12;
        if ( v12 )
        {
          v14 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v12[1].Count)(v12[2].Count, v4, a2);
          ExDereferenceCallBackBlock((signed __int64 *)v11, v13);
          return (unsigned int)v14;
        }
        return (unsigned int)-1073741811;
      }
    }
    v17 = v5;
  }
  v14 = ExCallSessionCallBack(v17, v4, a2, &v18);
  if ( v14 >= 0 )
    return v18;
  return (unsigned int)v14;
}
