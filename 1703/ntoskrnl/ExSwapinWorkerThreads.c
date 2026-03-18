/*
 * XREFs of ExSwapinWorkerThreads @ 0x1405778AC
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 *     ExShutdownSystem @ 0x14041A7C8 (ExShutdownSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x140051240 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v2; // rdi
  struct _KTHREAD *i; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v5; // rbx
  signed __int32 v6[8]; // [rsp+0h] [rbp-C8h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v8[96]; // [rsp+60h] [rbp-68h] BYREF
  BOOLEAN Enable; // [rsp+D0h] [rbp+8h] BYREF

  Enable = a1;
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = PsInitialSystemProcess;
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v6, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)v2, i);
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
          (__int64)v8,
          (__int64)NextProcessThread,
          0,
          (__int64)ExpSetSwappingKernelApc,
          0LL,
          0LL,
          0,
          (__int64)&Enable);
        if ( (unsigned __int8)KeInsertQueueApc((__int64)v8, (__int64)&Event, 0LL, 3) )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          KeResetEvent(&Event);
        }
      }
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
