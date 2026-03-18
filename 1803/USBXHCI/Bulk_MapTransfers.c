/*
 * XREFs of Bulk_MapTransfers @ 0x1C002C548
 * Callers:
 *     Bulk_CommonBufferCallback @ 0x1C002B370 (Bulk_CommonBufferCallback.c)
 *     Bulk_EP_StartMapping @ 0x1C002BD10 (Bulk_EP_StartMapping.c)
 *     Bulk_EvtDmaCallback @ 0x1C002BE10 (Bulk_EvtDmaCallback.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C002F8A0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x1C0020004 (TR_AttemptStateChange.c)
 *     Bulk_MappingLoop @ 0x1C002C608 (Bulk_MappingLoop.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1, __int64 a2)
{
  char v2; // si
  int i; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = a2;
  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = *(_QWORD *)(a1 + 56);
      LODWORD(v9) = i;
      LODWORD(v8) = *(_DWORD *)(v5 + 144);
      LODWORD(v7) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        5u,
        0xEu,
        0x24u,
        (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
        v7,
        v8,
        v9);
    }
    LOBYTE(a2) = v2;
    result = Bulk_MappingLoop(a1, a2);
    if ( *(_DWORD *)(a1 + 108) != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 340) )
      break;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
