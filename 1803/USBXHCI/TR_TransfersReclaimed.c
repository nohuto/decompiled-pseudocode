/*
 * XREFs of TR_TransfersReclaimed @ 0x1C0021310
 * Callers:
 *     Control_EP_ReclaimTransfers @ 0x1C00219F0 (Control_EP_ReclaimTransfers.c)
 *     Control_ProcessTransferCompletion @ 0x1C0021EC8 (Control_ProcessTransferCompletion.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C0026E14 (Isoch_ProcessTransferCompletion.c)
 *     Bulk_ProcessTransferCompletion @ 0x1C002CBD8 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_TransfersReclaimed(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v2 + 37)
    || (v3 = *(_QWORD *)(v2 + 136), _InterlockedIncrement((volatile signed __int32 *)(v3 + 20)) == *(_DWORD *)(v3 + 8)) )
  {
    ESM_AddEvent((PVOID)(v2 + 288));
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 56));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
           WdfDriverGlobals,
           v4,
           "Transfer Ring Tag",
           1260LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
}
