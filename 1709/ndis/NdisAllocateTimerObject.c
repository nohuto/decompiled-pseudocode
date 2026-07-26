/*
 * XREFs of NdisAllocateTimerObject @ 0x1C0023B70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

NDIS_STATUS __stdcall NdisAllocateTimerObject(
        NDIS_HANDLE NdisHandle,
        PNDIS_TIMER_CHARACTERISTICS TimerCharacteristics,
        PNDIS_HANDLE pTimerObject)
{
  NDIS_STATUS v3; // ebp
  char *PoolWithTag; // rax
  char *v8; // rdi
  struct _KDPC *v9; // rcx
  KIRQL v10; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v12; // rcx

  v3 = 0;
  *pTimerObject = 0LL;
  if ( TimerCharacteristics->Header.Type != 0x97 || TimerCharacteristics->Header.Size < 0x18u )
    return -1073676283;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, TimerCharacteristics->AllocationTag);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0xD0uLL);
  *((_QWORD *)v8 + 3) = NdisHandle;
  *((_DWORD *)v8 + 40) = TimerCharacteristics->AllocationTag;
  *((_QWORD *)v8 + 21) = TimerCharacteristics->TimerFunction;
  *((_QWORD *)v8 + 23) = TimerCharacteristics->FunctionContext;
  *((_QWORD *)v8 + 22) = TimerCharacteristics->FunctionContext;
  KeInitializeTimer((PKTIMER)(v8 + 32));
  v9 = (struct _KDPC *)(v8 + 96);
  if ( *(_BYTE *)NdisHandle == 17 )
  {
    *((_QWORD *)v8 + 24) = NdisHandle;
    KeInitializeDpc(v9, (PKDEFERRED_ROUTINE)ndisMTimerObjectDpc, v8);
  }
  else
  {
    KeInitializeDpc(v9, (PKDEFERRED_ROUTINE)TimerCharacteristics->TimerFunction, TimerCharacteristics->FunctionContext);
    KeSetImportanceDpc((PRKDPC)(v8 + 96), LowImportance);
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalTimerListLock);
  Flink = ndisGlobalTimerList.Flink;
  v12 = (_LIST_ENTRY *)(v8 + 8);
  if ( ndisGlobalTimerList.Flink->Blink != &ndisGlobalTimerList )
    __fastfail(3u);
  v12->Flink = ndisGlobalTimerList.Flink;
  *((_QWORD *)v8 + 2) = &ndisGlobalTimerList;
  Flink->Blink = v12;
  ndisGlobalTimerList.Flink = (_LIST_ENTRY *)(v8 + 8);
  KeReleaseSpinLock(&ndisGlobalTimerListLock, v10);
  *pTimerObject = v8;
  return v3;
}
