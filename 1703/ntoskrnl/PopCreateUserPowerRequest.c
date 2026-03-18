/*
 * XREFs of PopCreateUserPowerRequest @ 0x1404C78BC
 * Callers:
 *     NtSetThreadExecutionState @ 0x140459BC0 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1404C7E70 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400717EC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x140072D94 (SessionIsInteractive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     PopCreatePowerRequestObject @ 0x1404C614C (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x1404C739C (PopInsertPowerRequestObject.c)
 *     PsQueryProcessAttributes @ 0x1404F7258 (PsQueryProcessAttributes.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v14, 0LL);
    if ( v14 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v15, (int *)a3);
  if ( (int)result >= 0 )
  {
    v9 = v15;
    *(_BYTE *)(v15 + 104) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 96) = Process;
    SessionId = MmGetSessionIdEx(*(struct _KPROCESS **)(a3 + 8));
    if ( a2 )
      *(_DWORD *)(v9 + 20) = 8;
    else
      *(_DWORD *)(v9 + 20) = SessionIsInteractive(SessionId) ? 63 : 30;
    PopAcquirePowerRequestPushLock(1);
    PopInsertPowerRequestObject((_QWORD *)v9, a2);
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v11, v12, v13);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
