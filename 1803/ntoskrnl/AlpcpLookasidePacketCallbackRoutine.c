/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x1400F3D30
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400B89E0 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v5; // ebp
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  void *v16; // rdi
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int64 *v20; // [rsp+48h] [rbp-30h]
  unsigned __int8 v21; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v2 = a2[2];
  v5 = 0;
  do
  {
    v6 = 0LL;
    v20 = (volatile signed __int64 *)v2;
    v19 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v21 = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[5];
        SchedulerAssist[5] = v17 + 1;
        if ( v17 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v19, v2);
    }
    else
    {
      v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&v19);
      if ( v10 )
        KxWaitForLockOwnerShip((__int64)&v19, v10);
    }
    v11 = *(_DWORD *)(v2 + 16);
    if ( v11 )
    {
      *(_DWORD *)(v2 + 16) = v11 - 1;
    }
    else
    {
      v12 = *(_DWORD *)(v2 + 20);
      if ( v12 )
      {
        *(_DWORD *)(v2 + 20) = v12 - 1;
        v6 = -1LL;
      }
      else
      {
        --*(_DWORD *)(v2 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v5 = 1;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v19, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(&v19);
    v13 = v19;
    if ( v19 )
      goto LABEL_22;
    if ( (__int64 *)_InterlockedCompareExchange64(v20, 0LL, (signed __int64)&v19) != &v19 )
    {
      v13 = KxWaitForLockChainValid(&v19);
LABEL_22:
      v19 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
    }
LABEL_14:
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v18 = v15[5] - 1;
        v15[5] = v18;
        if ( !v18 && !*((_BYTE *)v15 + 25) && !*((_BYTE *)v15 + 27) )
          KiPerformUnboostKick(v14);
      }
    }
    __writecr8(v21);
    if ( !a1 )
      goto LABEL_16;
  }
  while ( !(unsigned __int8)ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 1953261124LL) );
  v16 = *(void **)(v2 + 40);
  IoSetIoCompletionEx2((__int64)v16, *(_QWORD *)(v2 + 48), v6, 0, 0LL, 0, a1, 0);
  ObfDereferenceObjectWithTag(v16, 0x746C6644u);
LABEL_16:
  if ( v5 )
    AlpcpDeferredFreeCompletionPacketLookaside((_QWORD *)v2);
}
