/*
 * XREFs of RaidUnitAllocateResources @ 0x1C0016F34
 * Callers:
 *     RaidCreateUnit @ 0x1C0016DBC (RaidCreateUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     StorCreateEventQueue @ 0x1C0017248 (StorCreateEventQueue.c)
 *     RaidUnitFreeResources @ 0x1C001827C (RaidUnitFreeResources.c)
 *     RaidInitializeDeviceQueue @ 0x1C001C370 (RaidInitializeDeviceQueue.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaInitializeTagList @ 0x1C0062C68 (RaInitializeTagList.c)
 */

__int64 __fastcall RaidUnitAllocateResources(__int64 a1)
{
  __int64 v1; // r14
  int EventQueue; // ebx
  __int64 v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v10; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  PIO_WORKITEM v20; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax
  SIZE_T v23; // rbx
  PVOID Pool; // rax
  int v25; // ebp
  unsigned int v26; // edi
  unsigned int v27; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1440) = -1;
  *(_DWORD *)(a1 + 680) = 1;
  KeInitializeEvent((PRKEVENT)(a1 + 168), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(a1 + 952), RaidUnitRestartQueueDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeDpc((PRKDPC)(a1 + 760), RaidUnitPendingDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeTimer((PKTIMER)(a1 + 696));
  KeInitializeTimer((PKTIMER)(a1 + 824));
  KeInitializeDpc((PRKDPC)(a1 + 888), (PKDEFERRED_ROUTINE)RaidUnitPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
  KeSetCoalescableTimer((PKTIMER)(a1 + 696), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 760));
  EventQueue = StorCreateEventQueue(a1 + 208);
  if ( EventQueue < 0 )
    goto LABEL_25;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    LOBYTE(v4) = *(_BYTE *)(v4 + 524) & 0x10;
  if ( (_BYTE)v4 )
    **(_DWORD **)(a1 + 208) |= 5u;
  v5 = (_QWORD *)(a1 + 256);
  EventQueue = RaInitializeTagList(a1 + 256, (unsigned int)(*(_DWORD *)(v1 + 512) + 1), *(_QWORD *)(a1 + 8));
  if ( EventQueue < 0 )
    goto LABEL_25;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 32));
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1536));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(unsigned int *)(v1 + 512);
  v8 = *(_QWORD *)(a1 + 24) + 768LL;
  *(_DWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 384) = v6;
  *(_QWORD *)(a1 + 392) = RaUnitStartIo;
  RaidInitializeDeviceQueue(a1 + 400, v8, v7);
  if ( *(_DWORD *)(v1 + 440) )
  {
    v23 = *(unsigned int *)(v1 + 440);
    Pool = RaidAllocatePool(NonPagedPoolNx, v23, 0x45556152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 16) = Pool;
    if ( !Pool )
    {
      EventQueue = -1073741801;
      goto LABEL_25;
    }
    memset(Pool, 0, v23);
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v10 )
  {
    v25 = 0;
    v26 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v27 = 0;
      if ( v26 )
        break;
LABEL_31:
      if ( ++v25 == 10 )
      {
        v11 = -1;
        goto LABEL_10;
      }
    }
    while ( 1 )
    {
      v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)v27 << 6)));
      if ( v10 )
        break;
      if ( ++v27 >= v26 )
        goto LABEL_31;
    }
  }
  v11 = *((_DWORD *)&v10->Next + 2);
LABEL_10:
  if ( v11 != -1 )
  {
    *(_DWORD *)(a1 + 1440) = v11;
    v12 = *(_QWORD *)(a1 + 24);
    v13 = ((*(_DWORD *)(v12 + 444) + 7) & 0xFFFFFFF8) + 1216;
    if ( *(_BYTE *)(v1 + 402) != 1 )
      v13 = ((*(_DWORD *)(v12 + 444) + 7) & 0xFFFFFFF8) + 1072;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              v13,
                              ((*(_DWORD *)(v12 + 444) + 7) & 0xFFFFFFF8) + 1072,
                              (_QWORD *)v1);
    v16 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      *(_QWORD *)(a1 + 1456) = ContiguousIoResources + 16;
      *(_QWORD *)(a1 + 1464) = ContiguousIoResources + 816;
      *(_QWORD *)(a1 + 1448) = ContiguousIoResources + 1072;
      RaidZeroXrb(ContiguousIoResources + 16, v15, 0, 0LL);
      if ( *(_BYTE *)(v1 + 402) == 1 )
      {
        *(_DWORD *)(v16 + 760) = 144;
        *(_QWORD *)(v16 + 776) = v16 + ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1072LL;
      }
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      *(_QWORD *)(a1 + 1592) = WorkItem;
      if ( WorkItem )
      {
        v18 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        *(_QWORD *)(a1 + 1608) = v18;
        if ( v18 )
        {
          v19 = *(struct _DEVICE_OBJECT **)(a1 + 8);
          *(_QWORD *)(a1 + 1616) = 0LL;
          *(_DWORD *)(a1 + 1624) = 0;
          v20 = IoAllocateWorkItem(v19);
          *(_QWORD *)(a1 + 1632) = v20;
          if ( v20 )
          {
            CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u);
            *(_QWORD *)(a1 + 1480) = CacheAwareRundownProtection;
            if ( CacheAwareRundownProtection )
            {
              ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
              return 0LL;
            }
          }
        }
      }
    }
  }
  EventQueue = -1073741670;
LABEL_25:
  RaidUnitFreeResources(a1);
  return (unsigned int)EventQueue;
}
