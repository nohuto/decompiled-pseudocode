/*
 * XREFs of PopCreateKernelPowerRequest @ 0x140525380
 * Callers:
 *     PoRegisterSystemState @ 0x1402786C0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x1405253F0 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1408C7738 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140075AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x1405243F0 (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x140524F2C (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(_QWORD *a1, int *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  result = PopCreatePowerRequestObject(&v8, a2);
  if ( (int)result >= 0 )
  {
    v4 = (_QWORD *)v8;
    *(_DWORD *)(v8 + 20) = 18;
    PopAcquirePowerRequestPushLock(1);
    PopInsertPowerRequestObject(v4, 0);
    PopUmpoSendPowerRequestOverrideQuery((__int64)v4, v5, v6, v7);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, (__int64)v4);
    result = 0LL;
    *a1 = v4;
  }
  return result;
}
