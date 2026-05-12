/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C000629C
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A340 (RaidAdapterPostScatterGatherExecute.c)
 *     StorportTimerDpc @ 0x1C000CB60 (StorportTimerDpc.c)
 *     RaidAdapterStartMiniport @ 0x1C000FE20 (RaidAdapterStartMiniport.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0010038 (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011A08 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C0012070 (RaidAdapterStopAdapter.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014790 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C001547C (RaidAdapterInsertUnit.c)
 *     RaidAdapterReInitialize @ 0x1C002CC6C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002CD74 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002F960 (RaidpAdapterTimerDpcRoutine.c)
 *     StorPortSynchronizeAccess @ 0x1C0033550 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v5 = (PKINTERRUPT *)(48LL * v4 + v3 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v5, *(_BYTE *)v3);
          v5 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    v6 = *(struct _KINTERRUPT **)(v3 + 24);
    goto LABEL_7;
  }
  v6 = *(struct _KINTERRUPT **)(a1 + 664);
  if ( v6 )
LABEL_7:
    KeReleaseInterruptSpinLock(v6, a2);
}
