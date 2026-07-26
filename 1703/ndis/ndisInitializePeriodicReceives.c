/*
 * XREFs of ndisInitializePeriodicReceives @ 0x1C0113E38
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C0014180 (NdisAllocateRWLock.c)
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001A000 (NdisAllocateNetBufferListPool.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0114DC4 (ndisUnloadPeriodicReceives.c)
 */

__int64 ndisInitializePeriodicReceives()
{
  unsigned int ProcessorNumberFromIndex; // edi
  PVOID PoolWithTag; // rax
  unsigned int v2; // ebx
  PVOID v3; // rax
  __int64 v4; // rbx
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rcx
  unsigned int v6; // eax
  unsigned int v7; // esi
  char *v8; // rbx
  PVOID v9; // rax
  __int64 v10; // rbx
  ULONG i; // esi
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rax
  SIZE_T v14; // rax
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-28h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)&Parameters.Header.Type = 0LL;
  *(_QWORD *)&Parameters.PoolTag = 0LL;
  ProcessorNumberFromIndex = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  ndisPerCpuPoisonPills = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_16;
  v2 = ndisMaxNumberOfProcessors;
  memset(PoolWithTag, 0, 32LL * ndisMaxNumberOfProcessors);
  v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v2, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.DeferredContext = v3;
  if ( !v3 )
    goto LABEL_16;
  v4 = ndisMaxNumberOfProcessors;
  memset(v3, 0, 8LL * ndisMaxNumberOfProcessors);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))ExAllocatePoolWithTag(
                                                                                            NonPagedPoolNx,
                                                                                            v4 << 6,
                                                                                            0x2020444Eu);
  DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
  if ( !WPP_MAIN_CB.Dpc.DeferredRoutine )
    goto LABEL_16;
  v6 = ndisMaxNumberOfProcessors;
  v7 = 0;
  if ( ndisMaxNumberOfProcessors )
  {
    while ( 1 )
    {
      v8 = (char *)DeferredRoutine + 64 * (unsigned __int64)v7;
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
      KeInitializeSpinLock((PKSPIN_LOCK)v8 + 2);
      *((_DWORD *)v8 + 6) = 0;
      KeInitializeSemaphore((PRKSEMAPHORE)v8 + 1, 0, 0x7FFFFFFF);
      v6 = ndisMaxNumberOfProcessors;
      if ( ++v7 >= ndisMaxNumberOfProcessors )
        break;
      DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
    }
  }
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v6, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)v9;
  if ( !v9 )
    goto LABEL_16;
  v10 = ndisMaxNumberOfProcessors;
  memset(v9, 0, 4LL * ndisMaxNumberOfProcessors);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 << 7, 0x2020444Eu);
  if ( !WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    goto LABEL_16;
  for ( i = 0; i < ndisNumberOfActiveProcessorsAtBoot; ++i )
  {
    v12 = (unsigned __int64)i << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(i, &ProcNumber);
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next + v12),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx((PKDPC)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[8] + v12), &ProcNumber);
  }
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)NdisAllocateRWLock(&ndisDummyObject);
  if ( !WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    || (Parameters.Header = (_NDIS_OBJECT_HEADER)1048960,
        *(_DWORD *)&Parameters.ProtocolId = 256,
        *(_QWORD *)&Parameters.PoolTag = 1953645646LL,
        (WPP_MAIN_CB.Dpc.SystemArgument1 = NdisAllocateNetBufferListPool(0LL, &Parameters)) == 0LL) )
  {
LABEL_16:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_15;
  }
  v13 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead,
    0LL,
    0LL,
    0x200u,
    ((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v14 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_15:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
