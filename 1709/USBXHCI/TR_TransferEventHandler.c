/*
 * XREFs of TR_TransferEventHandler @ 0x1C0023928
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C001B71C (Endpoint_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00248A4 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0024B9C (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002F2C0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C (Bulk_ProcessTransferEventWithED1.c)
 */

char __fastcall TR_TransferEventHandler(_DWORD *a1, __int64 a2)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 88LL))();
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3u) <= 1uLL )
    {
      return 0;
    }
    else if ( (a1[3] & 4) != 0 )
    {
      return Bulk_ProcessTransferEventWithED1(a1, 0LL);
    }
    else
    {
      return Bulk_ProcessTransferEventWithED0(a1, 0LL);
    }
  }
  else if ( (a1[3] & 4) != 0 )
  {
    return Control_ProcessTransferEventWithED1(a1, 0LL);
  }
  else
  {
    return Control_ProcessTransferEventWithED0(a1, 0LL);
  }
}
