/*
 * XREFs of PopCreateKernelPowerRequest @ 0x1405DBF54
 * Callers:
 *     PoRegisterSystemState @ 0x1402411B0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x1405DBED0 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x14084EDCC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400AFF9C (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404F1EC8 (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x1404F239C (PopInsertPowerRequestObject.c)
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
