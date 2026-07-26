/*
 * XREFs of ndisWdfPostReleaseHardware @ 0x1C00EE600
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisDereferenceDmaAdapter @ 0x1C00130C4 (ndisDereferenceDmaAdapter.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisWdfPostReleaseHardware(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 1608) = &Event;
  ndisDereferenceMiniport(a1, 0x1Eu, v2, v3);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 1608) = 0LL;
  if ( v4 && *(_DWORD *)(v4 + 72) == 1 && (*(_DWORD *)(a1 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v4 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a1 + 504));
    *(_DWORD *)(a1 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a1) )
  {
    ndisDeQueueMiniportOnDriver(a1, *(_QWORD *)(a1 + 3784));
    ndisDereferenceDriver(*(_QWORD *)(a1 + 3784), 0);
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C0098080);
      _InterlockedDecrement(&dword_1C0098070);
    }
  }
  return 0LL;
}
