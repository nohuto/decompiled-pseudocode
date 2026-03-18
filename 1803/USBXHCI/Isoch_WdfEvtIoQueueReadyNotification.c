/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x1C002A050
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     TR_AttemptStateChange @ 0x1C0020004 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C00263C0 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  bool v4; // zf
  bool v5; // si
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx

  CurrentIrql = KeGetCurrentIrql();
  v4 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    KfRaiseIrql(2u);
    v4 = 1;
  }
  v5 = v4;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 56) + 1352LL) )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      2891);
    goto LABEL_9;
  }
  v6 = TR_AttemptStateChange(a2, 2, 3);
  v8 = a2;
  if ( v6 != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) != 2 )
      goto LABEL_9;
    v8 = a2;
  }
  LOBYTE(v7) = v5;
  Isoch_MapTransfers(v8, v7);
LABEL_9:
  if ( !CurrentIrql )
    KeLowerIrql(0);
}
