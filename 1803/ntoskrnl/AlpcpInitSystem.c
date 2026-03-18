/*
 * XREFs of AlpcpInitSystem @ 0x14064F384
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400C7700 (ExInitializePagedLookasideListInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ExInitializeNPagedLookasideList @ 0x14014B650 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleTable @ 0x140553220 (ExCreateHandleTable.c)
 *     NtQuerySystemInformation @ 0x1405AE710 (NtQuerySystemInformation.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x14064F66C (AlpcpInitializeMessageLog.c)
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
    qword_1403AD238 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v5, 0, 0x78uLL);
    *((_QWORD *)&v5[3] + 1) = AlpcpOpenPort;
    LOWORD(v5[0]) = 120;
    *(_QWORD *)&v5[4] = AlpcpClosePort;
    *(_QWORD *)((char *)&v5[2] + 4) = 512LL;
    *((_QWORD *)&v5[4] + 1) = AlpcpDeletePort;
    HIDWORD(v5[2]) = 504;
    DWORD2(v5[0]) = 128;
    BYTE2(v5[0]) = BYTE2(v5[0]) & 0xCB | 0x10;
    *(__int128 *)((char *)v5 + 12) = AlpcpPortMapping;
    HIDWORD(v5[1]) = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, (__int16 *)0xF9, &AlpcPortObjectType);
    if ( v2 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideListInternal(
        (__int64)&AlpcpLookasides,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateMessageFunction,
        (void (__stdcall *)(PVOID))AlpcpFreeMessageFunction,
        0,
        840,
        1934453825,
        32,
        0);
      ExInitializePagedLookasideListInternal(
        (__int64)&unk_1403E2480,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID))PspQueueApcSpecialApc,
        0,
        120,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_1403E2500, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
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
        qword_1403AD2C8 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_1403AD2D8 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_1403AD2A8 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_1403AD258 = (__int64)&qword_1403AD250;
      qword_1403AD250 = (__int64)&qword_1403AD250;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
