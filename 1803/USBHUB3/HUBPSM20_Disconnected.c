/*
 * XREFs of HUBPSM20_Disconnected @ 0x1C000E920
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach @ 0x1C002BCF8 (HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach.c)
 */

__int64 __fastcall HUBPSM20_Disconnected(__int64 a1)
{
  HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
