/*
 * XREFs of PnprInitiateReplaceOperation @ 0x140417290
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PnprCompleteWake @ 0x1401F9EA0 (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x1401FA43C (PnprQuiesce.c)
 *     PnprSwap @ 0x1401FA790 (PnprSwap.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     PnprWakeProcessors @ 0x14041876C (PnprWakeProcessors.c)
 *     PnprReplaceStart @ 0x1406A2F38 (PnprReplaceStart.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  _QWORD v21[6]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 10520), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 10544), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 10568), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 10592), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x51706E50u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 10744);
      if ( !v6 )
        v6 = 1667;
      v7 = *(_DWORD *)(PnprContext + 10748);
      *(_DWORD *)(PnprContext + 10744) = v6;
      if ( !v7 )
        v7 = 10;
LABEL_7:
      *(_DWORD *)(v4 + 10748) = v7;
      goto LABEL_39;
    }
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  }
  v5 = PnprReplaceStart();
  if ( v5 < 0 )
  {
    v4 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 10744);
    if ( !v8 )
      v8 = 1682;
    *(_DWORD *)(PnprContext + 10744) = v8;
    v9 = *(_DWORD *)(v4 + 10748);
    if ( !v9 )
      v9 = 1;
    *(_DWORD *)(v4 + 10748) = v9;
    goto LABEL_39;
  }
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
    {
      memset(v21, 0, 0x28uLL);
      v21[3] = 0LL;
      v21[0] = PnprStartMirroring;
      LODWORD(v21[4]) = 8;
      v21[1] = PnprEndMirroring;
      v21[2] = PnprMirrorPhysicalMemory;
      v10 = MmDuplicateMemory((__int64)v21);
      v4 = PnprContext;
      v5 = v10;
      if ( v10 == 1073742484 )
        v5 = 0;
      goto LABEL_39;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 10712))(*(_QWORD *)(PnprContext + 10640));
    if ( v5 < 0 )
    {
      v4 = PnprContext;
      v11 = *(_DWORD *)(PnprContext + 10744);
      if ( !v11 )
        v11 = 1750;
      *(_DWORD *)(PnprContext + 10744) = v11;
      v7 = *(_DWORD *)(v4 + 10748);
      if ( !v7 )
        v7 = 8;
      goto LABEL_7;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v5 = PnprQuiesce();
  if ( v5 < 0 )
  {
    v16 = PnprContext;
    v17 = *(_DWORD *)(PnprContext + 10744);
    if ( !v17 )
      v17 = 1783;
    *(_DWORD *)(PnprContext + 10744) = v17;
    v18 = *(_DWORD *)(v16 + 10748);
    if ( !v18 )
      v18 = 1;
    *(_DWORD *)(v16 + 10748) = v18;
  }
  else
  {
    v0 = 1;
    v5 = PnprSwap();
    if ( v5 < 0 )
    {
      ((void (__fastcall *)(__int64, _QWORD))off_14033B398[0])(3LL, *(_QWORD *)(PnprContext + 10632));
      v13 = PnprContext;
      v14 = *(_DWORD *)(PnprContext + 10744);
      if ( !v14 )
        v14 = 1773;
      *(_DWORD *)(PnprContext + 10744) = v14;
      v15 = *(_DWORD *)(v13 + 10748);
      if ( !v15 )
        v15 = 1;
      *(_DWORD *)(v13 + 10748) = v15;
    }
    PnprWakeProcessors();
  }
  __writecr8(CurrentIrql);
  v4 = PnprContext;
LABEL_39:
  if ( (*(_DWORD *)(v4 + 64) & 0x20) != 0 )
  {
    if ( !v0 )
      goto LABEL_45;
    PnprCompleteWake();
  }
  else
  {
    if ( !v2 )
      goto LABEL_45;
    KeSetEvent((PRKEVENT)(v4 + 10568), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 10592), Executive, 0, 0, 0LL);
  }
  v4 = PnprContext;
LABEL_45:
  if ( *(_QWORD *)(v4 + 10632) )
  {
    off_14033B3A0[0]();
    v4 = PnprContext;
  }
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(v4 + 10680))(*(_QWORD *)(v4 + 10640));
      if ( v5 >= 0 )
        return v19;
    }
  }
  return (unsigned int)v5;
}
