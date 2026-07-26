/*
 * XREFs of ndisMCancelSendNetBufferListsOnMiniport @ 0x1C00554B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0011810 (ndisSetBusyAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 */

unsigned __int8 __fastcall ndisMCancelSendNetBufferListsOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  unsigned __int8 result; // al

  if ( !a1->SelectiveSuspend || (result = ndisSetBusyAsync(a1, 1u, NdisBusyCancelSend, a2, 0)) != 0 )
  {
    result = ((__int64 (__fastcall *)(void *, void *))a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
               a1->MiniportAdapterContext,
               a2);
    if ( a1->SelectiveSuspend )
      return ndisClearBusy(a1, 1LL, 53LL);
  }
  return result;
}
