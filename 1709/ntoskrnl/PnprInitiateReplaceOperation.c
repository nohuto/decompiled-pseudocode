/*
 * XREFs of PnprInitiateReplaceOperation @ 0x14042C2C0
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnprCompleteWake @ 0x1401FFC10 (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x14020017C (PnprQuiesce.c)
 *     PnprSwap @ 0x1402004A8 (PnprSwap.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnprWakeProcessors @ 0x14042D77C (PnprWakeProcessors.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     PnprReplaceStart @ 0x1406CD7DC (PnprReplaceStart.c)
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
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  _QWORD v23[6]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 20760), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20784), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20808), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20832), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x51706E50u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 20984);
      if ( !v6 )
        v6 = 1667;
      v7 = *(_DWORD *)(PnprContext + 20988);
      *(_DWORD *)(PnprContext + 20984) = v6;
      if ( !v7 )
        v7 = 10;
      *(_DWORD *)(v4 + 20988) = v7;
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
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 20984);
    if ( !v9 )
      v9 = 1682;
    *(_DWORD *)(PnprContext + 20984) = v9;
    v10 = *(_DWORD *)(v8 + 20988);
    if ( !v10 )
      v10 = 1;
    *(_DWORD *)(v8 + 20988) = v10;
    goto LABEL_39;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_25;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    memset(v23, 0, 0x28uLL);
    v23[3] = 0LL;
    v23[0] = PnprStartMirroring;
    LODWORD(v23[4]) = 8;
    v23[1] = PnprEndMirroring;
    v23[2] = PnprMirrorPhysicalMemory;
    v5 = MmDuplicateMemory(v23);
    if ( v5 == 1073742484 )
      v5 = 0;
    goto LABEL_39;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 20952))(*(_QWORD *)(PnprContext + 20880));
  if ( v5 < 0 )
  {
    v11 = PnprContext;
    v12 = *(_DWORD *)(PnprContext + 20984);
    if ( !v12 )
      v12 = 1750;
    *(_DWORD *)(PnprContext + 20984) = v12;
    v13 = *(_DWORD *)(v11 + 20988);
    if ( !v13 )
      v13 = 8;
    *(_DWORD *)(v11 + 20988) = v13;
  }
  else
  {
LABEL_25:
    CurrentIrql = KeGetCurrentIrql();
    v5 = PnprQuiesce();
    if ( v5 < 0 )
    {
      v18 = PnprContext;
      v19 = *(_DWORD *)(PnprContext + 20984);
      if ( !v19 )
        v19 = 1783;
      *(_DWORD *)(PnprContext + 20984) = v19;
      v20 = *(_DWORD *)(v18 + 20988);
      if ( !v20 )
        v20 = 1;
      *(_DWORD *)(v18 + 20988) = v20;
    }
    else
    {
      v0 = 1;
      v5 = PnprSwap();
      if ( v5 < 0 )
      {
        ((void (__fastcall *)(__int64, _QWORD))off_1403533C8[0])(3LL, *(_QWORD *)(PnprContext + 20872));
        v15 = PnprContext;
        v16 = *(_DWORD *)(PnprContext + 20984);
        if ( !v16 )
          v16 = 1773;
        *(_DWORD *)(PnprContext + 20984) = v16;
        v17 = *(_DWORD *)(v15 + 20988);
        if ( !v17 )
          v17 = 1;
        *(_DWORD *)(v15 + 20988) = v17;
      }
      PnprWakeProcessors();
    }
    __writecr8(CurrentIrql);
  }
LABEL_39:
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( v0 )
      PnprCompleteWake();
  }
  else if ( v2 )
  {
    KeSetEvent((PRKEVENT)(PnprContext + 20808), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 20832), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)(PnprContext + 20872) )
    off_1403533D0[0]();
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 20920))(*(_QWORD *)(PnprContext + 20880));
      if ( v5 >= 0 )
        return v21;
    }
  }
  return (unsigned int)v5;
}
