/*
 * XREFs of NtSetThreadExecutionState @ 0x140459BC0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLegacyPowerRequestFlags @ 0x140039288 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1400392E0 (PopApplyLegacyPowerRequestFlags.c)
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 *     SessionIsInteractive @ 0x140072D94 (SessionIsInteractive.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     PopSystemRequiredSet @ 0x14014B898 (PopSystemRequiredSet.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 *     PopNotifyConsoleUserPresent @ 0x140575AAC (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x140575C14 (PopDiagTraceSetThreadExecutionState.c)
 */

NTSTATUS __stdcall NtSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS v7; // ebx
  char LegacyPowerRequestFlags; // al
  unsigned int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _LIST_ENTRY *v13; // [rsp+30h] [rbp-28h] BYREF
  EXECUTION_STATE v14; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  v15 = 0LL;
  v13 = 0LL;
  LOBYTE(PreviousFlags) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)PreviousFlags )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (esFlags & 0x7FFFFFBC) != 0 || (esFlags & 0x80000040) == 0x40 )
    return -1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v13 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_11;
  v7 = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, &v15);
  if ( v7 < 0 )
    return v7;
  v7 = PopCreateUserPowerRequest(&v13, 0LL, v15);
  if ( v7 >= 0 )
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
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
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
  if ( v15 )
    PoDestroyReasonContext(v15);
  return v7;
}
