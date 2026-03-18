/*
 * XREFs of AlpcpInitSystem @ 0x1405E99C8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400B4390 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideList @ 0x140146350 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleTable @ 0x14045DA4C (ExCreateHandleTable.c)
 *     NtQuerySystemInformation @ 0x1404C0C90 (NtQuerySystemInformation.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x1405E9CB4 (AlpcpInitializeMessageLog.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *PoolWithTag; // rax
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SystemInformation[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v7; // [rsp+D8h] [rbp-28h]
  int v8; // [rsp+E8h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_14036A198 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v5, 0, 0x78uLL);
    *((_QWORD *)&v5[3] + 1) = AlpcpOpenPort;
    LOWORD(v5[0]) = 120;
    *(_QWORD *)((char *)&v5[2] + 4) = 512LL;
    BYTE2(v5[0]) = BYTE2(v5[0]) & 0xCB | 0x10;
    *(_QWORD *)&v5[4] = AlpcpClosePort;
    *((_QWORD *)&v5[4] + 1) = AlpcpDeletePort;
    HIDWORD(v5[2]) = 504;
    DWORD2(v5[0]) = 128;
    *(__int128 *)((char *)v5 + 12) = AlpcpPortMapping;
    HIDWORD(v5[1]) = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, 249LL, &AlpcPortObjectType);
    if ( v2 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideListInternal(
        (__int64)AlpcpLookasides,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateMessageFunction,
        (void (__stdcall *)(PVOID))AlpcpFreeMessageFunction,
        0,
        840,
        1934453825,
        32,
        0);
      ExInitializePagedLookasideListInternal(
        (__int64)&unk_14039E540,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID))PspQueueApcSpecialApc,
        0,
        120,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_14039E5C0, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        AlpcpRegionGranularity = v8;
        AlpcpViewGranularity = v7;
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_14036A1E8 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_14036A1D8 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_14036A208 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_14036A1B8 = (__int64)&qword_14036A1B0;
      qword_14036A1B0 = (__int64)&qword_14036A1B0;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
