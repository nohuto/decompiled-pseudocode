/*
 * XREFs of ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C007A190
 * Callers:
 *     <none>
 * Callees:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 */

void __fastcall ndisEmulateRSSv1Dpc(
        struct _KDPC *Dpc,
        struct _NDIS_MINIPORT_BLOCK *DeferredContext,
        __int64 SystemArgument1,
        _DWORD *SystemArgument2)
{
  SystemArgument2[16] = ndisSynchronousOidRequest(0LL, DeferredContext, SystemArgument1, SystemArgument1);
  if ( _InterlockedExchangeAdd(&DeferredContext->RssV2CompletionCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&DeferredContext->RssV2CompletionEvent, 0, 0);
}
