/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C000648C
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A340 (RaidAdapterPostScatterGatherExecute.c)
 *     StorportTimerDpc @ 0x1C000CB60 (StorportTimerDpc.c)
 *     RaidAdapterStartMiniport @ 0x1C000FE20 (RaidAdapterStartMiniport.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011A08 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C0012070 (RaidAdapterStopAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014790 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C001547C (RaidAdapterInsertUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C001E314 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReInitialize @ 0x1C002CC6C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002CD74 (RaidAdapterRemoveNormalChildren.c)
 *     StorPortSynchronizeAccess @ 0x1C0033550 (StorPortSynchronizeAccess.c)
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
