/*
 * XREFs of NtCreateJobObject @ 0x14050B45C
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ExCreateHandleEx @ 0x140507F60 (ExCreateHandleEx.c)
 *     PspIoRateEntryInitialize @ 0x14050B788 (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x14050B934 (PspUnlockJobListExclusive.c)
 *     EtwTraceJob @ 0x1407458D4 (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // di
  __int64 v8; // rcx
  unsigned int v9; // ebx
  char v10; // r15
  NTSTATUS inserted; // edi
  size_t v12; // r8
  PRKEVENT v13; // rbx
  struct _KEVENT *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  __int64 Handle; // rax
  __int64 v18; // [rsp+20h] [rbp-88h]
  PRKEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int Flink; // [rsp+C8h] [rbp+20h]

  Event = 0LL;
  v20 = 0LL;
  Flink = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)JobHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *JobHandle = 0LL;
  v9 = 1568;
  v10 = PoEnergyEstimationEnabled();
  if ( v10 )
    v9 = 2000;
  inserted = ObCreateObjectEx(
               PreviousMode,
               PsJobType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v18,
               v9,
               0,
               v9,
               &Event,
               0LL);
  if ( inserted < 0 )
  {
    v13 = Event;
  }
  else
  {
    v12 = v9;
    v13 = Event;
    memset(Event, 0, v12);
    *(_QWORD *)&v13[45].Header.Lock = v13;
    *(_QWORD *)&v13[2].Header.Lock = (char *)v13 + 40;
    v13[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v13[1].Header.WaitListHead.Blink;
    v13[44].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v13[44];
    *(_QWORD *)&v13[44].Header.Lock = v13 + 44;
    v13[43].Header.WaitListHead.Blink = &v13[43].Header.WaitListHead;
    v13[43].Header.WaitListHead.Flink = &v13[43].Header.WaitListHead;
    v13[45].Header.WaitListHead.Blink = &v13[45].Header.WaitListHead;
    v13[45].Header.WaitListHead.Flink = &v13[45].Header.WaitListHead;
    KeInitializeEvent(v13, NotificationEvent, 0);
    *(_QWORD *)&v13[43].Header.Lock = 0LL;
    v13[11].Header.LockNV = 1310721;
    v13[11].Header.SignalState = 0;
    memset(&v13[11].Header.WaitListHead, 0, 0xA0uLL);
    v13[25].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1310721;
    memset(&v13[26], 0, 0xA0uLL);
    *(_QWORD *)&v13[53].Header.Lock = (char *)v13 + 1264;
    v13[52].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v13[52].Header.WaitListHead.Blink;
    v13[53].Header.WaitListHead.Flink = 0LL;
    if ( v10 )
      v13[54].Header.WaitListHead.Blink = &v13[65].Header.WaitListHead;
    v13[20].Header.LockNV = -1;
    HIDWORD(v13[36].Header.WaitListHead.Flink) = 16382;
    v13[62].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1;
    HIDWORD(v13[35].Header.WaitListHead.Flink) = 10;
    v13[20].Header.SignalState = 5;
    ExInitializeResourceLite((PERESOURCE)&v13[2].Header.WaitListHead);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
    v14 = v13 + 1;
    v15 = (struct _LIST_ENTRY *)qword_1407F3318;
    if ( *(__int64 **)qword_1407F3318 != &PspJobList )
      __fastfail(3u);
    *(_QWORD *)&v14->Header.Lock = &PspJobList;
    v13[1].Header.WaitListHead.Flink = v15;
    v15->Flink = (struct _LIST_ENTRY *)v14;
    qword_1407F3318 = (__int64)&v13[1];
    PspUnlockJobListExclusive(CurrentThread);
    LODWORD(v13[54].Header.WaitListHead.Flink) |= 0x200000u;
    Flink = (unsigned int)v13[54].Header.WaitListHead.Flink;
    while ( 1 )
    {
      inserted = ExUuidCreate((UUID *)&v13[51]);
      if ( inserted != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( inserted == 1073872982 )
      inserted = 0;
    if ( inserted >= 0 )
    {
      Handle = ExCreateHandleEx(PspUniqueJobIdTable, (__int64)v13, 0, 0, 0LL);
      if ( Handle )
        HIDWORD(v13[50].Header.WaitListHead.Blink) = Handle;
      else
        inserted = -1073741670;
    }
    PspIoRateEntryInitialize(&v13[57].Header.WaitListHead.Blink);
    v13[60].Header.WaitListHead.Flink = 0LL;
    v13[60].Header.WaitListHead.Blink = 0LL;
    v13[62].Header.WaitListHead.Flink = 0LL;
    if ( inserted < 0 )
    {
      ObfDereferenceObject(v13);
    }
    else
    {
      inserted = ObInsertObjectEx(v13, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v20);
      if ( inserted >= 0 )
      {
        *JobHandle = (HANDLE)v20;
        goto LABEL_22;
      }
    }
    v13 = 0LL;
  }
LABEL_22:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(v13, Flink, (unsigned int)inserted, 1824LL);
  return inserted;
}
