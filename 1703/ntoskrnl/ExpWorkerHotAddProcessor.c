/*
 * XREFs of ExpWorkerHotAddProcessor @ 0x14041B120
 * Callers:
 *     <none>
 * Callees:
 *     KeSelectIdealProcessor @ 0x1400654C0 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140443AF4 (KeSynchronizeWithDynamicProcessors.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x140567898 (ExpCreateSystemThreadForNode.c)
 */

void __fastcall ExpWorkerHotAddProcessor(__int64 *P)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // r9
  HANDLE v5; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = P[4];
  if ( *(_QWORD *)(v2 + 136) && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 2092), 0) )
  {
    KeQueryNodeActiveAffinity(*(_WORD *)(v2 + 146), &Affinity, 0LL);
    v3 = KeSelectIdealProcessor(v2, (__int64)&Affinity, 0LL);
    v4 = *(unsigned __int16 *)(v2 + 146);
    *(_DWORD *)(v2 + 2088) = v3;
    if ( (int)ExpCreateSystemThreadForNode(&Handle, v2, &ExpWorkerThreadBalanceManager, v4) < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v2 + 2092), 0);
      *P = 0LL;
      P[2] = (__int64)ExpWorkerHotAddProcessor;
      P[3] = (__int64)P;
      ExQueueWorkItemEx(P, 1u, 0);
      return;
    }
    ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    *(_QWORD *)(v2 + 2080) = Object;
    ZwClose(v5);
  }
  ExFreePoolWithTag(P, 0);
}
