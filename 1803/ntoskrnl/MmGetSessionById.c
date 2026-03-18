/*
 * XREFs of MmGetSessionById @ 0x1400E1680
 * Callers:
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     PopWatchdogWorker @ 0x1402801A0 (PopWatchdogWorker.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404F67F8 (ExpWnfCaptureScopeInstanceId.c)
 *     PsGetSiloBySessionId @ 0x1405019A0 (PsGetSiloBySessionId.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x140580258 (PspAttachSession.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1405E28F8 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x1405EA4F0 (PiUEventBroadcastEventWorker.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140728018 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407280A4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x14076D98C (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1407736B0 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1400E174C (MiSelectSessionAttachProcess.c)
 */

__int64 __fastcall MmGetSessionById(int a1)
{
  __int64 v2; // rbx
  __int64 ThreadServerSilo; // rdi
  __int64 *i; // rdx
  __int64 *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  for ( i = (__int64 *)qword_1403CC580; i != &qword_1403CC580; i = (__int64 *)*i )
  {
    v5 = i - 18;
    if ( (!ThreadServerSilo || v5[1038] == ThreadServerSilo) && *((_DWORD *)v5 + 2) == a1 )
    {
      v2 = MiSelectSessionAttachProcess(v5);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
