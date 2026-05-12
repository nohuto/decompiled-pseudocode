/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C00069A0
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
 *     RaidAdapterReleaseStartIoLock @ 0x1C001D280 (RaidAdapterReleaseStartIoLock.c)
 *     StorPortSynchronizeAccess @ 0x1C001D2E0 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C002DBEC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DCF4 (RaidAdapterRemoveNormalChildren.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // rdi
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
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24), a2);
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 664);
    if ( v6 )
      KeReleaseInterruptSpinLock(v6, a2);
  }
}
