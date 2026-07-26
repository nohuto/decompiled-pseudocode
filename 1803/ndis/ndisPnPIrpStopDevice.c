/*
 * XREFs of ndisPnPIrpStopDevice @ 0x1C00EE11C
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00127CC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferenceDmaAdapter @ 0x1C00130C4 (ndisDereferenceDmaAdapter.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0099610 >= 4u )
    WPP_SF_qZ(0x2Cu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, 0x27u);
  ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 5);
  *(_DWORD *)(a2 + 124) &= ~0x10000u;
  *(_DWORD *)(a2 + 1520) = 3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(a2 + 1520) = 3;
  *(_QWORD *)(a2 + 1608) = &Event;
  ndisReferenceMiniport(a2);
  *(_DWORD *)(a2 + 124) |= 0x10u;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x53u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  ndisPnPRemoveDevice((NDIS_HANDLE)a2);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x54u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  if ( *(_QWORD *)(a2 + 1608) )
  {
    ndisDereferenceMiniport(a2, 0x1Cu, v7, v8);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 1608) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 504);
  if ( v9 && *(_DWORD *)(v9 + 72) == 1 && (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v9 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, *(_QWORD *)(a2 + 3784));
    ndisDereferenceDriver(*(_QWORD *)(a2 + 3784), 0);
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C0098080);
      _InterlockedDecrement(&dword_1C0098070);
    }
  }
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
