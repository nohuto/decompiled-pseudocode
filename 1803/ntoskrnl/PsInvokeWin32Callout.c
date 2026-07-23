/*
 * XREFs of PsInvokeWin32Callout @ 0x1404B6460
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x14006CCC8 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140284E10 (PspSetProcessTimerDelayForWin32.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PopInvokeWin32Callout @ 0x14051D0D8 (PopInvokeWin32Callout.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140565F94 (PsFreezeProcess.c)
 *     ExpWin32OpenProcedure @ 0x14056C9A0 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x14056D0B0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x14056D910 (ExpWin32CloseProcedure.c)
 *     PfpQueryGpuUtilization @ 0x140572420 (PfpQueryGpuUtilization.c)
 *     ExpWin32ParseProcedure @ 0x1405735C0 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x14057AD40 (ExpWin32DeleteProcedure.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x14077BBE0 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x14003E9E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r10
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
  __int64 v17; // rcx
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
        SessionId = MmGetSessionId((__int64)Process);
        if ( *v15 == SessionId )
        {
          Win32Callouts = MmSessionGetWin32Callouts();
          return ExCallCallBack((signed __int64 *)Win32Callouts, v4, a2);
        }
      }
      v17 = v5;
    }
    result = ExCallSessionCallBack(v17, v4, a2, &v18);
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
