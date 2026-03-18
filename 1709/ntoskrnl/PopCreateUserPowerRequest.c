/*
 * XREFs of PopCreateUserPowerRequest @ 0x1404F1DF4
 * Callers:
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1404F1D38 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400AFF9C (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     SessionIsInteractive @ 0x1400B5200 (SessionIsInteractive.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404F1EC8 (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x1404F239C (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v15, 0LL);
    if ( v15 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v16, (int *)a3);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    *(_BYTE *)(v16 + 104) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 96) = Process;
    SessionId = MmGetSessionIdEx(*(_QWORD *)(a3 + 8));
    if ( a2 )
      *(_DWORD *)(v9 + 20) = 8;
    else
      *(_DWORD *)(v9 + 20) = SessionIsInteractive(SessionId) != 0 ? 63 : 30;
    PopAcquirePowerRequestPushLock(1);
    LOBYTE(v11) = a2;
    PopInsertPowerRequestObject(v9, v11);
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v12, v13, v14);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
