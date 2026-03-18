/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C0020F04
 * Callers:
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C00218D0 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C00219F0 (Control_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C0021A60 (Control_EP_StartMapping.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0024210 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0024370 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0025A00 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C0025B00 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C0029904 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00299BC (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0029ED0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002A110 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C002BB30 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C002BC80 (Bulk_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C002F7C0 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C002F970 (Bulk_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 280) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 88));
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 896))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 80));
}
