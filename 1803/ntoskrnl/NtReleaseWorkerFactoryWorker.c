/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x140086160
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140087A0C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rdi
  volatile signed __int64 *v5; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // bl
  int v12; // ecx
  __int64 v13; // rax
  NTSTATUS v14; // ebp
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  PVOID v18; // rsi
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int64 *v22; // [rsp+48h] [rbp-30h]
  unsigned __int8 v23; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v4 = Object;
  v5 = (volatile signed __int64 *)*((_QWORD *)Object + 2);
  v22 = v5;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v23 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = SchedulerAssist[5];
      SchedulerAssist[5] = v19 + 1;
      if ( v19 == -1 )
      {
        v2 = *((unsigned __int8 *)SchedulerAssist + 27);
        if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)v2 )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v21, v5);
  }
  else
  {
    v9 = _InterlockedExchange64(v5, (__int64)&v21);
    if ( v9 )
      KxWaitForLockOwnerShip(&v21);
  }
  v10 = v4[2];
  v11 = 0;
  if ( *(_BYTE *)(v10 + 33) )
  {
    v14 = 128;
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 24);
    if ( v12 == -1 )
    {
      v14 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v10 + 24) = v12 + 1;
      v13 = v4[2];
      if ( !*(_BYTE *)(v13 + 32) )
      {
        *(_BYTE *)(v13 + 32) = 1;
        v11 = 1;
      }
      v14 = 0;
      if ( v11 && (*((_DWORD *)Object + 38) & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode(Object);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v21, retaddr, v2, v3);
  }
  else
  {
    _m_prefetchw(&v21);
    v15 = v21;
    if ( !v21 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v22, 0LL, (signed __int64)&v21) == &v21 )
        goto LABEL_16;
      v15 = KxWaitForLockChainValid(&v21, v9, v2, v3);
    }
    v21 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_16:
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v20 = v17[5] - 1;
      v17[5] = v20;
      if ( !v20 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
        KiPerformUnboostKick(v16);
    }
  }
  __writecr8(v23);
  v18 = Object;
  if ( v11 )
  {
    IoSetIoCompletionEx2(*(_QWORD *)(v4[2] + 8LL), 0, 0, 0, 0LL, 0, *(_QWORD *)(v4[2] + 16LL), 0);
    ExpWorkerFactoryCheckCreate(v18, 0LL);
  }
  ObfDereferenceObjectWithTag(v18, 0x746C6644u);
  return v14;
}
