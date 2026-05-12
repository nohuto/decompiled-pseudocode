/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0006EEC
 * Callers:
 *     StorportTimerDpc @ 0x1C0001120 (StorportTimerDpc.c)
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0007C9C (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A670 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterStopAdapter @ 0x1C000ECCC (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C000ED54 (RaidAdapterRestartAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00134B0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0013708 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0014750 (RaidAdapterInsertUnit.c)
 *     RaidAdapterReInitialize @ 0x1C0027198 (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0027368 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C0029188 (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C00312A0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  __int64 v3; // rsi
  unsigned int i; // edi
  struct _KINTERRUPT *v6; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 664);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
