/*
 * XREFs of PopSetSpecialRequest @ 0x1406F5C08
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1404F1B94 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400B50DC (PopDiagTracePowerRequestChange.c)
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PsChargeProcessWakeCounter @ 0x140599290 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, void *a3)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rbp
  unsigned __int64 v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = ObReferenceObjectByHandle(a3, 0x2000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
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
        PsReleaseProcessWakeCounter(v6);
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
