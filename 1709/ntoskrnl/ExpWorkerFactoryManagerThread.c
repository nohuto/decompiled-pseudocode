/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x140145860
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400B252C (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1400B2AC0 (KeTimeOutQueueWaiters.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rdi
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v4; // r8d
  unsigned int Blink; // eax
  char v6; // si
  PSLIST_ENTRY v7; // rdi
  PSLIST_ENTRY v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+48h] [rbp-18h] BYREF
  PLIST_ENTRY EntryArray; // [rsp+88h] [rbp+28h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      KeRemoveQueueEx(&ExpWorkerFactoryManagerQueue, 0, 0, 0LL, &EntryArray, 1u);
      v1 = EntryArray;
      if ( EntryArray != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryThreadCreationState = 0;
      v7 = RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
      while ( v7 )
      {
        v8 = v7;
        v7 = v7->Next;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8[1].Next, &v10);
        *((_DWORD *)&v8[9].Next + 2) &= ~8u;
        ExpWorkerFactoryCheckCreate(v8, &v10, 1);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( !LODWORD(EntryArray[3].Flink) )
      break;
    v2 = EntryArray - 19;
    Flink = EntryArray[-18].Flink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
    if ( !LODWORD(v2[9].Flink) )
    {
      v4 = (unsigned int)v2[8].Flink;
      Blink = (unsigned int)v2[7].Blink;
      if ( v4 > Blink )
        KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v2[7].Flink, v4 - Blink);
    }
    if ( BYTE1(Flink[2].Flink) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeRegisterObjectNotification((__int64)&v2[10].Blink, (__int64)&ExpWorkerFactoryManagerQueue, (__int64)v1);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v6 )
LABEL_12:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  v2 = (PLIST_ENTRY)((char *)EntryArray - 360);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)EntryArray[-22].Blink, &LockHandle);
  LODWORD(v2[9].Blink) &= ~0x400u;
  if ( ((__int64)v2[9].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(&v1[-23].Blink) )
  {
    ExpWorkerFactoryCheckCreate(&v1[-23].Blink, &LockHandle, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  goto LABEL_12;
}
