/*
 * XREFs of IoWMIWriteEvent @ 0x140148670
 * Callers:
 *     PpmFireWmiEvent @ 0x1402344AC (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x140234540 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExInterlockedInsertTailList @ 0x1400225E0 (ExInterlockedInsertTailList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByProviderId @ 0x14006E818 (WmipDoFindRegEntryByProviderId.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIWriteEvent(PVOID WnodeEventItem)
{
  NTSTATUS v1; // edi
  int v3; // ebx
  _LIST_ENTRY *PoolWithTag; // rbp
  int v5; // ebx
  KIRQL v6; // r14
  _DWORD *RegEntryByProviderId; // rax
  struct _LIST_ENTRY *v8; // rbx
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ebx
  unsigned __int16 v12; // cx

  v1 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v3 = *((_DWORD *)WnodeEventItem + 11);
  if ( (v3 & 0x60000) != 0 )
  {
    v10 = *(_DWORD *)WnodeEventItem;
    v11 = v3 & 0x20000;
    v12 = *((_WORD *)WnodeEventItem + 4);
    if ( (unsigned int)v10 < 0x30 )
      return -1073741789;
    if ( v11 )
    {
      if ( (unsigned int)v10 > 0xFFFF )
        return -2147483643;
    }
    else if ( v10 < 0 )
    {
      return -2147483643;
    }
    result = EtwTraceEvent(v12, WnodeEventItem, 48LL, 3222536192LL, 0);
    if ( v11 )
      return result;
  }
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77696D57u);
  if ( !PoolWithTag )
    return -1073741670;
  v5 = *((_DWORD *)WnodeEventItem + 1);
  v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(v5);
  v8 = (struct _LIST_ENTRY *)RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement(RegEntryByProviderId + 12);
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v6);
  *((_DWORD *)WnodeEventItem + 10) = *((_DWORD *)WnodeEventItem + 2);
  PoolWithTag[1].Flink = v8;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)WnodeEventItem;
  ExInterlockedInsertTailList(&WmipNPEvent, PoolWithTag, &WmipNPNotificationSpinlock);
  if ( _InterlockedIncrement(&WmipEventWorkItems) == 1 )
    ExQueueWorkItem(&WmipEventWorkQueueItem, DelayedWorkQueue);
  return v1;
}
