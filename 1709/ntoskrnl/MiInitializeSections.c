/*
 * XREFs of MiInitializeSections @ 0x1405B353C
 * Callers:
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x140025A40 (KeInitializeSemaphore.c)
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1448;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 56) = v2 + 48;
  *(_QWORD *)(v2 + 48) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  KeInitializeSemaphore((PRKSEMAPHORE)v2, 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1536) = a1 + 1528;
  *(_QWORD *)(a1 + 1528) = a1 + 1528;
  *(_QWORD *)(a1 + 1632) = a1 + 1624;
  *(_QWORD *)(a1 + 1624) = a1 + 1624;
  *(_QWORD *)(a1 + 1648) = a1 + 1640;
  *(_QWORD *)(a1 + 1640) = a1 + 1640;
  KeInitializeEvent((PRKEVENT)(a1 + 1328), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1664) = a1 + 1656;
  *(_QWORD *)(a1 + 1656) = a1 + 1656;
  KeInitializeEvent((PRKEVENT)(a1 + 1304), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1672), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1544), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 1728), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1760));
  *(_QWORD *)(a1 + 1392) = 1LL;
  *(_QWORD *)(a1 + 1360) = 0LL;
  *(_QWORD *)(a1 + 1400) = 0LL;
  *(_DWORD *)(a1 + 1432) = 0;
  v3 = *(_BYTE *)(a1 + 1439) & 0xFD;
  *(_QWORD *)(a1 + 1384) = a1;
  *(_BYTE *)(a1 + 1436) = -1;
  *(_BYTE *)(a1 + 1439) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1408), NotificationEvent, 0);
}
