/*
 * XREFs of PopSetSpecialRequest @ 0x1406C5970
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1404C7464 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x140072404 (PopDiagTracePowerRequestChange.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PsChargeProcessWakeCounter @ 0x1404C80E0 (PsChargeProcessWakeCounter.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, void *a3)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rbp
  __int64 v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = ObReferenceObjectByHandle(a3, 0x2000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v6 = PsChargeProcessWakeCounter((__int64)Object, 0, 3, a1);
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
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
