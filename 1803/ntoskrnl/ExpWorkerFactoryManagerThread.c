/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x140176D50
 * Callers:
 *     <none>
 * Callees:
 *     KeTimeOutQueueWaiters @ 0x140085270 (KeTimeOutQueueWaiters.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140085E00 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x140085E90 (KeRegisterObjectNotification.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rdi
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v4; // r8d
  unsigned int Blink; // eax
  char v6; // si
  __int64 v7; // r9
  PSLIST_ENTRY v8; // rdi
  PSLIST_ENTRY v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+48h] [rbp-18h] BYREF
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
      v8 = RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
      while ( v8 )
      {
        v9 = v8;
        v8 = v8->Next;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9[1].Next, &v13);
        *((_DWORD *)&v9[9].Next + 2) &= ~8u;
        LOBYTE(v10) = 1;
        ExpWorkerFactoryCheckCreate((char *)v9, (__int64)&v13, v10, v11);
        ObfDereferenceObjectWithTag(v9, 0x746C6644u);
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
    ExpWorkerFactoryCheckCreate((char *)&v1[-23].Blink, (__int64)&LockHandle, 0LL, v7);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  goto LABEL_12;
}
