/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C0023648
 * Callers:
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0024060 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0024180 (Control_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C00241F0 (Control_EP_StartMapping.c)
 *     Control_WdfEvtRequestCancel @ 0x1C00269F0 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0026B50 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0027F90 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C0028090 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C002BE74 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002BF2C (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002C420 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002C660 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C002E080 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C002E1D0 (Bulk_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0031CF0 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C0031EA0 (Bulk_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(_QWORD *a1)
{
  if ( *(_BYTE *)(a1[5] + 441LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
             WdfDriverGlobals,
             a1[11]);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(WdfDriverGlobals, a1[10]);
}
