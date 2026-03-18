/*
 * XREFs of PspNotifyServerSiloCreation @ 0x1407198B4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x14024DA6C (PspGetServerSiloStatePointer.c)
 *     PspInvokeCreateCallback @ 0x1405DEA64 (PspInvokeCreateCallback.c)
 *     PspGetNextMonitor @ 0x140719784 (PspGetNextMonitor.c)
 *     EtwTraceJobServerSiloStateChange @ 0x140745B74 (EtwTraceJobServerSiloStateChange.c)
 */

__int64 __fastcall PspNotifyServerSiloCreation(__int64 a1)
{
  char v2; // di
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v5; // r14
  __int64 *NextMonitor; // rbx
  unsigned int v7; // ebx

  v2 = 0;
  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = (_DWORD *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( *v5 )
    __fastfail(5u);
  NextMonitor = PspGetNextMonitor(0LL);
  if ( !NextMonitor )
    goto LABEL_10;
  do
  {
    if ( NextMonitor[3] && (int)PspInvokeCreateCallback(a1, (__int64)NextMonitor) < 0 )
      v2 = 1;
    NextMonitor = PspGetNextMonitor((__int64 **)NextMonitor);
  }
  while ( NextMonitor );
  if ( v2 )
  {
    v7 = -1073741248;
  }
  else
  {
LABEL_10:
    *v5 = 1;
    EtwTraceJobServerSiloStateChange(a1, 1LL);
    v7 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
