/*
 * XREFs of HvlRouteInterrupt @ 0x1401E9C40
 * Callers:
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlDummyInterruptCallback @ 0x1401E96E0 (HvlDummyInterruptCallback.c)
 */

__int64 __fastcall HvlRouteInterrupt(int a1)
{
  return HvlpInterruptCallback[a1]();
}
