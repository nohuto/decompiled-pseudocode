/*
 * XREFs of MmGetSessionById @ 0x140089C70
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     PopWatchdogWorker @ 0x14024A230 (PopWatchdogWorker.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     PspAttachSession @ 0x1404F0128 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1404F0184 (ExCallSessionCallBack.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502F44 (ExpWnfCaptureScopeInstanceId.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     PsGetSiloBySessionId @ 0x140528750 (PsGetSiloBySessionId.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x14059F660 (PiUEventBroadcastEventWorker.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1406C1FE4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406C2070 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x140709D98 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x140089D00 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmGetSessionById(int a1)
{
  __int64 v2; // rbx
  __int64 CurrentServerSilo; // rdi
  __int64 *i; // rdx
  __int64 *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  for ( i = (__int64 *)qword_140389300; i != &qword_140389300; i = (__int64 *)*i )
  {
    v5 = i - 18;
    if ( (!CurrentServerSilo || v5[1022] == CurrentServerSilo) && *((_DWORD *)v5 + 2) == a1 )
    {
      v2 = MiSelectSessionAttachProcess();
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
