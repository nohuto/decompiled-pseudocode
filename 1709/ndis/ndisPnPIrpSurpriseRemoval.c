/*
 * XREFs of ndisPnPIrpSurpriseRemoval @ 0x1C00EB720
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0001ABC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AEE3C (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_qZ(0x29u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, 0x24u);
  v8 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 120) |= 4u;
  *(_DWORD *)(a2 + 124) = v8 & 0xFFFEFFEF | 0x10;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2)
    && *(_DWORD *)(a2 + 1520) == 1
    && (*(_DWORD *)(a2 + 124) & 0x4000) == 0 )
  {
    ndisDevicePnPEventNotifyMiniport((struct _NDIS_MINIPORT_BLOCK *)a2, 2u, 0LL, 0);
  }
  ndisReferenceMiniportNoCheck(a2);
  v9 = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a2 + 1520) = 5;
  if ( v9 > 6u || v9 == 6 && *(_BYTE *)(a2 + 33) >= 0x28u )
  {
    *(_QWORD *)(a2 + 5000) = 0LL;
    *(_QWORD *)(a2 + 5016) = ndisQueuedPnPIrpSurpriseRemoval;
    *(_QWORD *)(a2 + 5024) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 5000), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisPnPIrpSurpriseRemovalInner((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  if ( a3 )
    *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  result = 0LL;
  *a4 = 0;
  return result;
}
