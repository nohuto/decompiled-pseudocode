/*
 * XREFs of MiInitializeSections @ 0x1405A1DA8
 * Callers:
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x140110510 (KeInitializeSemaphore.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  *(_QWORD *)(a1 + 1464) = a1 + 1456;
  *(_QWORD *)(a1 + 1456) = a1 + 1456;
  KeInitializeSemaphore((PRKSEMAPHORE)(a1 + 1424), 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1480) = a1 + 1472;
  *(_QWORD *)(a1 + 1472) = a1 + 1472;
  *(_QWORD *)(a1 + 1568) = a1 + 1560;
  *(_QWORD *)(a1 + 1560) = a1 + 1560;
  *(_QWORD *)(a1 + 1584) = a1 + 1576;
  *(_QWORD *)(a1 + 1576) = a1 + 1576;
  KeInitializeEvent((PRKEVENT)(a1 + 1392), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1600) = a1 + 1592;
  *(_QWORD *)(a1 + 1592) = a1 + 1592;
  KeInitializeEvent((PRKEVENT)(a1 + 1368), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1608), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1488), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 1664), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1696));
}
