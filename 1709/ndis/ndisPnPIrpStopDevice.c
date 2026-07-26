/*
 * XREFs of ndisPnPIrpStopDevice @ 0x1C00EB574
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0001ABC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FF048 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_qZ(0x2Cu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
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
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_(0x4Fu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
  ndisPnPRemoveDevice(a2);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_(0x50u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
  if ( *(_QWORD *)(a2 + 1608) )
  {
    ndisDereferenceMiniport(a2, 0x1Cu);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 1608) = 0LL;
  }
  v7 = *(_QWORD *)(a2 + 504);
  if ( v7 && *(_DWORD *)(v7 + 72) == 1 && (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v7 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, *(_QWORD *)(a2 + 3784));
    ndisDereferenceDriver(*(_QWORD *)(a2 + 3784), 0);
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C0097388);
      _InterlockedDecrement(&dword_1C0097378);
    }
  }
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
