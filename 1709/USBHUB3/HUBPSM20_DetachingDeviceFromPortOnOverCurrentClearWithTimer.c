/*
 * XREFs of HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C000E920
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000DC20 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMISC_DetachDevice @ 0x1C0029008 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMISC_DetachDevice(v1);
  HUBMUX_ReleaseInterruptReference(v1);
  return 3013LL;
}
