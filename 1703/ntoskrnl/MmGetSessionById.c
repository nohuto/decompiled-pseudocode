/*
 * XREFs of MmGetSessionById @ 0x140094460
 * Callers:
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     PopWatchdogWorker @ 0x1402350E0 (PopWatchdogWorker.c)
 *     PiUEventBroadcastEventWorker @ 0x140469170 (PiUEventBroadcastEventWorker.c)
 *     PsGetSiloBySessionId @ 0x1404C7990 (PsGetSiloBySessionId.c)
 *     PspAttachSession @ 0x1404C814C (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1404EFED4 (ExpWnfCaptureScopeInstanceId.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14069642C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406964B8 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1406D4648 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 * Callees:
 *     MiSelectSessionAttachProcess @ 0x140094590 (MiSelectSessionAttachProcess.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MmGetSessionById(int a1)
{
  __int64 v2; // rsi
  __int64 CurrentServerSilo; // rbx
  unsigned __int8 CurrentIrql; // r8
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v10; // [rsp+28h] [rbp-20h]
  unsigned __int8 v11; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v10 = (volatile signed __int64 *)&qword_14036CF80;
  v9 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v9, &qword_14036CF80);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&qword_14036CF80, (__int64)&v9) )
  {
    KxWaitForLockOwnerShip(&v9);
  }
  v5 = (__int64 *)qword_14036D040;
  if ( (__int64 *)qword_14036D040 != &qword_14036D040 )
  {
    while ( 1 )
    {
      v6 = v5 - 18;
      if ( (!CurrentServerSilo || v6[1022] == CurrentServerSilo) && *((_DWORD *)v6 + 2) == a1 )
        break;
      v5 = (__int64 *)*v5;
      if ( v5 == &qword_14036D040 )
        goto LABEL_10;
    }
    v2 = MiSelectSessionAttachProcess(v6);
  }
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v9, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(&v9);
  v7 = v9;
  if ( v9 )
    goto LABEL_15;
  if ( (__int64 *)_InterlockedCompareExchange64(v10, 0LL, (signed __int64)&v9) != &v9 )
  {
    v7 = KxWaitForLockChainValid(&v9);
LABEL_15:
    v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
  }
LABEL_13:
  __writecr8(v11);
  return v2;
}
