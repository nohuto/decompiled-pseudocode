/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0006D1C
 * Callers:
 *     StorportTimerDpc @ 0x1C0001120 (StorportTimerDpc.c)
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007C70 (RaidAdapterReleaseStartIoLock.c)
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

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct _KINTERRUPT *v5; // rcx
  PKINTERRUPT *v6; // r14

  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v6 = (PKINTERRUPT *)(48LL * v4 + v3 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v6, *(_BYTE *)v3);
          v6 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    v5 = *(struct _KINTERRUPT **)(v3 + 24);
    goto LABEL_5;
  }
  v5 = *(struct _KINTERRUPT **)(a1 + 664);
  if ( v5 )
LABEL_5:
    KeReleaseInterruptSpinLock(v5, a2);
}
