/*
 * XREFs of NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C0012768 (ndisRemoveMiniportFromGlobalList.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00B1DD0 (ndisPnPRemoveDeviceEx.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 */

void __fastcall NdisLWMUninitializeNetworkInterface(__int64 P)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x93u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, P);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(P + 120) & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 4uLL, P, 0LL);
  ndisReferenceMiniportNoCheck(P, 0x69u);
  ndisLogMiniportEvent(P, 0x23u);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(P + 1608) = &Event;
  ndisPnPRemoveDeviceEx((struct _NDIS_MINIPORT_BLOCK *)P);
  ndisDereferenceMiniport(P, 0x69u, v2, v3);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(P + 1608) = 0LL;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)P) )
  {
    ndisDeQueueMiniportOnDriver(P, *(_QWORD *)(P + 3784));
    ndisDereferenceDriver(*(_QWORD *)(P + 3784), 0);
    if ( (*(_DWORD *)(P + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C0098080);
      _InterlockedDecrement(&dword_1C0098070);
    }
  }
  ndisRemoveMiniportFromGlobalList((struct _NDIS_MINIPORT_BLOCK *)P);
  ndisMDeleteMiniportBlockOnRemove((char *)P);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x94u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, P);
}
