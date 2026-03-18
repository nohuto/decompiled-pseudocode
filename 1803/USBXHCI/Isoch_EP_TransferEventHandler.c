/*
 * XREFs of Isoch_EP_TransferEventHandler @ 0x1C0025C90
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0026FC0 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8 (Isoch_ProcessTransferEventWithED1.c)
 */

__int64 __fastcall Isoch_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Isoch_ProcessTransferEventWithED1();
  else
    return Isoch_ProcessTransferEventWithED0();
}
