/*
 * XREFs of PopCreateUserPowerRequest @ 0x140524E58
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x1405251E0 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x140526F38 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140075AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x14007687C (SessionIsInteractive.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x1405243F0 (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x140524F2C (PopInsertPowerRequestObject.c)
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
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, (__int64)&v15, 0LL);
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
    PopDiagTracePowerRequestCreate(0, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
