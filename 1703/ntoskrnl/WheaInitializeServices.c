/*
 * XREFs of WheaInitializeServices @ 0x140820954
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_1403877F0;
  v1 = 14LL;
  do
  {
    *(v0 - 2) = 0LL;
    *v0 = PsGetHostSilo;
    v0[1] = xHalPciEarlyRestore;
    v0[2] = (__int64 (*)())WheapDefaultErrSrcCreateRecord;
    v0[3] = PsGetHostSilo;
    v0 += 6;
    --v1;
  }
  while ( v1 );
  WheapDispatchPtr.Dpc.DpcData = 0LL;
  qword_140387A98 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.Queue.Wcb.CurrentIrp = &WheapDispatchPtr.Queue.Wcb.DeviceObject;
  WheapDispatchPtr.Queue.Wcb.DeviceObject = &WheapDispatchPtr.Queue.Wcb.DeviceObject;
  WheapDispatchPtr.Dpc.ProcessorHistory = (KAFFINITY)WheapDeferredRecoveryServiceDpcRoutine;
  WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)WheapDeferredRecoveryServiceWorker;
  WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey = 1;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = 0LL;
  LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters) = 1;
  BYTE2(WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters) = 6;
  *(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1) = 0;
  *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement = 0LL;
  *(_DWORD *)&WheapDispatchPtr.DeviceQueue.Busy = 275;
  WheapDispatchPtr.Dpc.DeferredRoutine = 0LL;
  WheapDispatchPtr.Dpc.SystemArgument2 = 0LL;
  WheapDispatchPtr.Dpc.DpcListEntry.Next = 0LL;
  WheapDispatchPtr.DeviceQueue.Lock = 0LL;
  *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
