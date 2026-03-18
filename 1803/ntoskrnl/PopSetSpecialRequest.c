/*
 * XREFs of PopSetSpecialRequest @ 0x14075D828
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140523D80 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400765E8 (PopDiagTracePowerRequestChange.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PsChargeProcessWakeCounter @ 0x14057FFB0 (PsChargeProcessWakeCounter.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, ULONG_PTR a3)
{
  int v4; // ebx
  PVOID v5; // rbp
  unsigned __int64 v6; // rsi
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = ObpReferenceObjectByHandleWithTag(a3, 0x2000, (__int64)PsProcessType, 1, 0x72506F50u, &Object, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v6 = PsChargeProcessWakeCounter((__int64)Object, 0, 3u, a1);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 96) )
      {
        v4 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v6;
        *(_QWORD *)(a1 + 96) = v5;
        v6 = 0LL;
        ++*(_DWORD *)(a1 + 44);
        PopDiagTracePowerRequestChange(a1);
        v4 = 0;
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      if ( v6 )
        PsReleaseProcessWakeCounter(v6, a1);
      ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
