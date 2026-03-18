/*
 * XREFs of ExSwapinWorkerThreads @ 0x14075E51C
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 *     ExShutdownSystem @ 0x14043A73C (ExShutdownSystem.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     KeSetKernelStackSwapEnable @ 0x140060E90 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     PsGetNextPartitionUnsafe @ 0x14011C07C (PsGetNextPartitionUnsafe.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x14071AF64 (PsReferencePartitionSystemProcess.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *i; // rcx
  struct _KTHREAD *j; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v5; // rbx
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v7; // rdi
  signed __int32 v8[8]; // [rsp+0h] [rbp-C8h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v10[96]; // [rsp+60h] [rbp-68h] BYREF
  BOOLEAN Enable; // [rsp+D0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+10h] BYREF

  Enable = a1;
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v8, 0);
  for ( i = 0LL; ; i = v7 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(i);
    v7 = NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (int)PsReferencePartitionSystemProcess((__int64)NextPartitionUnsafe, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = v5 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)Object, j);
        v5 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) & 1) != 0 )
        {
          if ( NextProcessThread == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc(
              (__int64)v10,
              (__int64)NextProcessThread,
              0,
              (__int64)ExpSetSwappingKernelApc,
              0LL,
              0LL,
              0,
              (__int64)&Enable);
            if ( KeInsertQueueApc((__int64)v10, (__int64)&Event, 0LL, 3u) )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
