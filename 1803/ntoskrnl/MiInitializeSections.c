/*
 * XREFs of MiInitializeSections @ 0x14061BF24
 * Callers:
 *     MiInitializePartition @ 0x14061BA7C (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14005C7F0 (KeInitializeSemaphore.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1456;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 56) = v2 + 48;
  *(_QWORD *)(v2 + 48) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  KeInitializeSemaphore((PRKSEMAPHORE)v2, 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1544) = a1 + 1536;
  *(_QWORD *)(a1 + 1536) = a1 + 1536;
  *(_QWORD *)(a1 + 1640) = a1 + 1632;
  *(_QWORD *)(a1 + 1632) = a1 + 1632;
  *(_QWORD *)(a1 + 1656) = a1 + 1648;
  *(_QWORD *)(a1 + 1648) = a1 + 1648;
  KeInitializeEvent((PRKEVENT)(a1 + 1336), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1672) = a1 + 1664;
  *(_QWORD *)(a1 + 1664) = a1 + 1664;
  KeInitializeEvent((PRKEVENT)(a1 + 1312), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1680), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1552), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 1736), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1760));
  *(_QWORD *)(a1 + 1400) = 1LL;
  *(_QWORD *)(a1 + 1368) = 0LL;
  *(_QWORD *)(a1 + 1408) = 0LL;
  *(_DWORD *)(a1 + 1440) = 0;
  v3 = *(_BYTE *)(a1 + 1447) & 0xFD;
  *(_QWORD *)(a1 + 1392) = a1;
  *(_BYTE *)(a1 + 1444) = -1;
  *(_BYTE *)(a1 + 1447) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1416), NotificationEvent, 0);
}
