/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x1C002F8A0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     TR_AttemptStateChange @ 0x1C0020004 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C002C548 (Bulk_MapTransfers.c)
 */

void __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  KIRQL v3; // si
  unsigned __int8 CurrentIrql; // di
  bool v5; // zf
  bool v6; // bp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    v3 = KfRaiseIrql(2u);
    v5 = 1;
  }
  v6 = v5;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 56) + 1352LL) )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\bulk.c",
      1025);
    goto LABEL_9;
  }
  v7 = TR_AttemptStateChange(a2, 2, 3);
  v9 = a2;
  if ( v7 != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 340), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) != 2 )
      goto LABEL_9;
    v9 = a2;
  }
  LOBYTE(v8) = v6;
  Bulk_MapTransfers(v9, v8);
LABEL_9:
  if ( !CurrentIrql )
    KeLowerIrql(v3);
}
