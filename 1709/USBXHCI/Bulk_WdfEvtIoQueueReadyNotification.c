/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x1C0031DD0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C002EA78 (Bulk_MapTransfers.c)
 */

void __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  KIRQL v3; // si
  char v4; // di
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = 0;
  if ( KeGetCurrentIrql() )
  {
    v4 = 0;
  }
  else
  {
    v3 = KfRaiseIrql(2u);
    v4 = 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x200) != 0 )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\bulk.c",
      1027);
    goto LABEL_10;
  }
  v5 = TR_AttemptStateChange(a2, 2, 3);
  v7 = a2;
  if ( v5 != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 340), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) != 2 )
      goto LABEL_10;
    v7 = a2;
  }
  LOBYTE(v6) = v4;
  Bulk_MapTransfers(v7, v6);
LABEL_10:
  if ( v4 )
    KeLowerIrql(v3);
}
