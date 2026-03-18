/*
 * XREFs of PopCreateKernelPowerRequest @ 0x1404C7330
 * Callers:
 *     PoRegisterSystemState @ 0x14022DBD0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x1404C73E0 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140825090 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400717EC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopCreatePowerRequestObject @ 0x1404C614C (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x1404C739C (PopInsertPowerRequestObject.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(__int64 *a1, int *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  result = PopCreatePowerRequestObject(&v8, a2);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    *(_DWORD *)(v8 + 20) = 18;
    PopAcquirePowerRequestPushLock(1);
    PopInsertPowerRequestObject(v4, 0LL);
    PopUmpoSendPowerRequestOverrideQuery(v4, v5, v6, v7);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, v4);
    result = 0LL;
    *a1 = v4;
  }
  return result;
}
