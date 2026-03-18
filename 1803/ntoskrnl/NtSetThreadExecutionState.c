/*
 * XREFs of NtSetThreadExecutionState @ 0x140526F38
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14007687C (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x14007698C (PoCaptureReasonContext.c)
 *     PopGetLegacyPowerRequestFlags @ 0x1400774D4 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x140077528 (PopApplyLegacyPowerRequestFlags.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PopSystemRequiredSet @ 0x14016E84C (PopSystemRequiredSet.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopCreateUserPowerRequest @ 0x140524E58 (PopCreateUserPowerRequest.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140531AD4 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1405E9AC8 (PopDiagTraceSetThreadExecutionState.c)
 */

NTSTATUS __stdcall NtSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS UserPowerRequest; // ebx
  char LegacyPowerRequestFlags; // al
  unsigned int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _LIST_ENTRY *v13; // [rsp+30h] [rbp-28h] BYREF
  EXECUTION_STATE v14; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  P = 0LL;
  v13 = 0LL;
  LOBYTE(PreviousFlags) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)PreviousFlags )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (esFlags & 0x7FFFFFBC) != 0 || (esFlags & 0x40) != 0 && (esFlags & 0x80000000) == 0 )
    return -1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v13 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_11;
  UserPowerRequest = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, &P);
  if ( UserPowerRequest < 0 )
    return UserPowerRequest;
  UserPowerRequest = PopCreateUserPowerRequest((__int64 *)&v13, 0, (__int64)P);
  if ( UserPowerRequest >= 0 )
  {
    Blink = v13;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v13;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, esFlags, (int *)&v14);
    *v2 = v14;
    if ( (esFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, esFlags);
      if ( (esFlags & 1) != 0 )
      {
        PopAcquirePolicyLock();
        PopSystemRequiredSet();
        PopReleasePolicyLock();
      }
      if ( (esFlags & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower(KeGetCurrentThread()->ApcState.Process, 12LL, 3LL);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) )
        {
          LOBYTE(v12) = 1;
          PopNotifyConsoleUserPresent(v12, v11, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, esFlags, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( P )
    PoDestroyReasonContext(P);
  return UserPowerRequest;
}
