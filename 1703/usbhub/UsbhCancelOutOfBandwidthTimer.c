/*
 * XREFs of UsbhCancelOutOfBandwidthTimer @ 0x1C002104C
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0020630 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 */

void __fastcall UsbhCancelOutOfBandwidthTimer(__int64 a1, unsigned __int16 a2)
{
  __int64 PortData; // rax

  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
    Log(a1, 8, 1869567096, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), 0LL));
}
