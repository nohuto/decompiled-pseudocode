/*
 * XREFs of RaidUnitProcessAsyncNotification @ 0x1C003D38C
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall RaidUnitProcessAsyncNotification(__int64 a1, __int64 a2, PIO_WORKITEM *a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 Unit; // rax

  v5 = 0;
  Unit = RaidAdapterFindUnit(a1, a2, (__int64)a3, a4);
  if ( Unit && (*(_BYTE *)(Unit + 152) & 4) != 0 && (*(_DWORD *)(Unit + 1568) & 4) != 0 )
  {
    if ( a3 && *a3 )
      IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)RaUnitAsyncNotificationWorkItemRoutine, CriticalWorkQueue, a3);
    else
      return (unsigned int)-1056964602;
  }
  else
  {
    return (unsigned int)-1056964601;
  }
  return v5;
}
