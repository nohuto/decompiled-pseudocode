/*
 * XREFs of NtCreateJobObject @ 0x14052FF14
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     PspUnlockJobListExclusive @ 0x14052FD2C (PspUnlockJobListExclusive.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     PspIoRateEntryInitialize @ 0x140530244 (PspIoRateEntryInitialize.c)
 *     EtwTraceJob @ 0x1407A7840 (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v6; // si
  __int64 v7; // rcx
  unsigned int v8; // ebx
  char v9; // r12
  NTSTATUS inserted; // esi
  size_t v11; // r8
  PRKEVENT v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KEVENT *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  __int64 Handle; // rax
  PRKEVENT v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-88h]
  PRKEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int Flink; // [rsp+C8h] [rbp+20h]

  v3 = (int)ObjectAttributes;
  Event = 0LL;
  v22 = 0LL;
  Flink = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->gap0[10];
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *JobHandle = 0LL;
  v8 = 1568;
  v9 = PoEnergyEstimationEnabled();
  if ( v9 )
    v8 = 2000;
  inserted = ObCreateObjectEx(v6, PsJobType, v3, v6, v20, v8, 0, v8, &Event, 0LL);
  if ( inserted < 0 )
  {
    v12 = Event;
  }
  else
  {
    v11 = v8;
    v12 = Event;
    memset(Event, 0, v11);
    *(_QWORD *)&v12[45].Header.Lock = v12;
    *(_QWORD *)&v12[2].Header.Lock = (char *)v12 + 40;
    v12[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[1].Header.WaitListHead.Blink;
    v12[44].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[44];
    *(_QWORD *)&v12[44].Header.Lock = v12 + 44;
    v12[43].Header.WaitListHead.Blink = &v12[43].Header.WaitListHead;
    v12[43].Header.WaitListHead.Flink = &v12[43].Header.WaitListHead;
    v12[45].Header.WaitListHead.Blink = &v12[45].Header.WaitListHead;
    v12[45].Header.WaitListHead.Flink = &v12[45].Header.WaitListHead;
    KeInitializeEvent(v12, NotificationEvent, 0);
    *(_QWORD *)&v12[43].Header.Lock = 0LL;
    *(_QWORD *)&v12[11].Header.Lock = 1310721LL;
    memset(&v12[11].Header.WaitListHead, 0, 0xA0uLL);
    v12[25].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1310721;
    memset(&v12[26], 0, 0xA0uLL);
    *(_QWORD *)&v12[53].Header.Lock = (char *)v12 + 1264;
    v12[52].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[52].Header.WaitListHead.Blink;
    v12[53].Header.WaitListHead.Flink = 0LL;
    if ( v9 )
      v12[54].Header.WaitListHead.Blink = &v12[65].Header.WaitListHead;
    v12[20].Header.LockNV = -1;
    HIDWORD(v12[36].Header.WaitListHead.Flink) = 16382;
    v12[62].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1;
    HIDWORD(v12[35].Header.WaitListHead.Flink) = 10;
    v12[20].Header.SignalState = 5;
    ExInitializeResourceLite((PERESOURCE)&v12[2].Header.WaitListHead);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
    v15 = v12 + 1;
    v16 = (struct _LIST_ENTRY *)qword_140861320;
    if ( *(__int64 **)qword_140861320 != &PspJobList )
      __fastfail(3u);
    *(_QWORD *)&v15->Header.Lock = &PspJobList;
    v12[1].Header.WaitListHead.Flink = v16;
    v16->Flink = (struct _LIST_ENTRY *)v15;
    qword_140861320 = (__int64)&v12[1];
    PspUnlockJobListExclusive((__int64)CurrentThread, (__int64)&PspJobList, v13, v14);
    LODWORD(v12[54].Header.WaitListHead.Flink) |= 0x200000u;
    Flink = (unsigned int)v12[54].Header.WaitListHead.Flink;
    while ( 1 )
    {
      inserted = ExUuidCreate((UUID *)&v12[51]);
      if ( inserted != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( inserted == 1073872982 )
      inserted = 0;
    if ( inserted >= 0 )
    {
      Handle = ExCreateHandleEx(PspUniqueJobIdTable, (__int64)v12, 0, 0, 0LL);
      if ( Handle )
        HIDWORD(v12[50].Header.WaitListHead.Blink) = Handle;
      else
        inserted = -1073741670;
    }
    PspIoRateEntryInitialize(&v12[57].Header.WaitListHead.Blink);
    v12[60].Header.WaitListHead.Flink = 0LL;
    v12[60].Header.WaitListHead.Blink = 0LL;
    v12[62].Header.WaitListHead.Flink = 0LL;
    v18 = v12;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(v12);
      inserted = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, &v22);
      if ( inserted >= 0 )
      {
        *JobHandle = (HANDLE)v22;
        goto LABEL_22;
      }
      v18 = v12;
    }
    ObfDereferenceObject(v18);
    v12 = 0LL;
  }
LABEL_22:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(v12, Flink, (unsigned int)inserted, 1824LL);
  if ( v12 )
    ObfDereferenceObject(v12);
  return inserted;
}
