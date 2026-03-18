/*
 * XREFs of TR_AttemptStateChange @ 0x1C0020004
 * Callers:
 *     Isoch_EP_StartMapping @ 0x1C0025B90 (Isoch_EP_StartMapping.c)
 *     Isoch_EP_StopMapping @ 0x1C0025C10 (Isoch_EP_StopMapping.c)
 *     Isoch_EvtDmaCallback @ 0x1C0025CD0 (Isoch_EvtDmaCallback.c)
 *     Isoch_MapTransfers @ 0x1C00263C0 (Isoch_MapTransfers.c)
 *     Isoch_MappingLoop @ 0x1C00264C4 (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C00275D8 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C002A050 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_EP_StartMapping @ 0x1C002BD10 (Bulk_EP_StartMapping.c)
 *     Bulk_EP_StopMapping @ 0x1C002BD90 (Bulk_EP_StopMapping.c)
 *     Bulk_EvtDmaCallback @ 0x1C002BE10 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapTransfers @ 0x1C002C548 (Bulk_MapTransfers.c)
 *     Bulk_MappingLoop @ 0x1C002C608 (Bulk_MappingLoop.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C002F8A0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_AttemptStateChange(__int64 a1, signed __int32 a2, __int32 a3)
{
  unsigned __int32 v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( a2 == 5 )
    v3 = _InterlockedExchange((volatile __int32 *)(a1 + 108), a3);
  else
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), a3, a2);
  if ( a2 == v3 || a2 == 5 )
  {
    if ( a3 )
      return v3;
    v4 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v4 + 37) )
      goto LABEL_12;
LABEL_13:
    ESM_AddEvent((PVOID)(v4 + 288));
    return v3;
  }
  if ( a2 != 3 || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) != 1 )
    return v3;
  v4 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v4 + 37) )
    goto LABEL_13;
LABEL_12:
  v5 = *(_QWORD *)(v4 + 136);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 20)) == *(_DWORD *)(v5 + 8) )
    goto LABEL_13;
  return v3;
}
