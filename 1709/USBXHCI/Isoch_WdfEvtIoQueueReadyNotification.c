/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x1C002C5A0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C0028964 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // di
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( KeGetCurrentIrql() )
  {
    v3 = 0;
  }
  else
  {
    KfRaiseIrql(2u);
    v3 = 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x200) != 0 )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      2891);
    goto LABEL_10;
  }
  v4 = TR_AttemptStateChange(a2, 2, 3);
  v6 = a2;
  if ( v4 != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) != 2 )
      goto LABEL_10;
    v6 = a2;
  }
  LOBYTE(v5) = v3;
  Isoch_MapTransfers(v6, v5);
LABEL_10:
  if ( v3 )
    KeLowerIrql(0);
}
