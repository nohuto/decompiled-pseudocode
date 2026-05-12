/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0006A30
 * Callers:
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009270 (RaidAdapterPostScatterGatherExecute.c)
 *     StorportTimerDpc @ 0x1C000E250 (StorportTimerDpc.c)
 *     RaidAdapterRestartAdapter @ 0x1C0010708 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C0011C4C (RaidAdapterStopAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014980 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014BE0 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C00158C8 (RaidAdapterInsertUnit.c)
 *     RaidAdapterStartMiniport @ 0x1C00195D8 (RaidAdapterStartMiniport.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C001D2AC (RaidAdapterAcquireStartIoLock.c)
 *     StorPortSynchronizeAccess @ 0x1C001D2E0 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C002DBEC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DCF4 (RaidAdapterRemoveNormalChildren.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // si
  unsigned int i; // ebx
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4449) )
  {
    v2 = *(_QWORD *)(a1 + 4432);
    v3 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 24));
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v2 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 48LL * i + 24));
    }
    return v3;
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 664);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
    else
      return 0;
  }
}
