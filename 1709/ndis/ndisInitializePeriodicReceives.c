/*
 * XREFs of ndisInitializePeriodicReceives @ 0x1C011C448
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C00033B0 (NdisAllocateRWLock.c)
 *     ndisConfigurePeriodicReceives @ 0x1C0010DD4 (ndisConfigurePeriodicReceives.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001AC70 (NdisAllocateNetBufferListPool.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisUnloadPeriodicReceives @ 0x1C011DE44 (ndisUnloadPeriodicReceives.c)
 */

__int64 ndisInitializePeriodicReceives()
{
  unsigned int ProcessorNumberFromIndex; // esi
  PVOID PoolWithTag; // rax
  unsigned int v2; // ebx
  PVOID v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int i; // edi
  char *v7; // rbx
  PVOID v8; // rax
  __int64 v9; // rbx
  ULONG j; // r14d
  unsigned __int64 v11; // rdi
  struct _KDPC *v12; // rbx
  SIZE_T v13; // rax
  SIZE_T v14; // rax
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-28h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)&Parameters.Header.Type = 0LL;
  *(_QWORD *)&Parameters.PoolTag = 0LL;
  ProcessorNumberFromIndex = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_15;
  v2 = ndisMaxNumberOfProcessors;
  memset(PoolWithTag, 0, 32LL * ndisMaxNumberOfProcessors);
  v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v2, 0x2020444Eu);
  qword_1C0097F48 = v3;
  if ( !v3 )
    goto LABEL_15;
  v4 = ndisMaxNumberOfProcessors;
  memset(v3, 0, 8LL * ndisMaxNumberOfProcessors);
  qword_1C0097F40 = ExAllocatePoolWithTag(NonPagedPoolNx, v4 << 6, 0x2020444Eu);
  if ( !qword_1C0097F40 )
    goto LABEL_15;
  v5 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    v7 = (char *)qword_1C0097F40 + 64 * (unsigned __int64)i;
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    KeInitializeSpinLock((PKSPIN_LOCK)v7 + 2);
    *((_DWORD *)v7 + 6) = 0;
    KeInitializeSemaphore((PRKSEMAPHORE)v7 + 1, 0, 0x7FFFFFFF);
    v5 = ndisMaxNumberOfProcessors;
  }
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v5, 0x2020444Eu);
  qword_1C0097F38 = v8;
  if ( !v8 )
    goto LABEL_15;
  v9 = ndisMaxNumberOfProcessors;
  memset(v8, 0, 4LL * ndisMaxNumberOfProcessors);
  qword_1C0097F30 = ExAllocatePoolWithTag(NonPagedPoolNx, v9 << 7, 0x2020444Eu);
  if ( !qword_1C0097F30 )
    goto LABEL_15;
  for ( j = 0; j < ndisNumberOfActiveProcessorsAtBoot; ++j )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(j, &ProcNumber);
    v11 = (unsigned __int64)j << 7;
    v12 = (struct _KDPC *)((char *)qword_1C0097F30 + v11);
    KeInitializeTimer((PKTIMER)((char *)qword_1C0097F30 + v11));
    KeInitializeDpc(v12 + 1, (PKDEFERRED_ROUTINE)ndisPeriodicReceivesTimer, 0LL);
    KeSetImportanceDpc(v12 + 1, LowImportance);
    KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C0097F30 + v11 + 64), &ProcNumber);
  }
  Lock = NdisAllocateRWLock(&ndisDummyObject);
  if ( !Lock
    || (Parameters.Header = (_NDIS_OBJECT_HEADER)1048960,
        *(_DWORD *)&Parameters.ProtocolId = 256,
        *(_QWORD *)&Parameters.PoolTag = 1953645646LL,
        (PoolHandle = NdisAllocateNetBufferListPool(0LL, &Parameters)) == 0LL) )
  {
LABEL_15:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_14;
  }
  v13 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v14 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &stru_1C0098000,
    0LL,
    0LL,
    0x200u,
    ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  ndisPeriodicReceives = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_14:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
