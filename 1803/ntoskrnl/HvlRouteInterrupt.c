/*
 * XREFs of HvlRouteInterrupt @ 0x140226D30
 * Callers:
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvlDummyInterruptCallback @ 0x140226850 (HvlDummyInterruptCallback.c)
 */

__int64 __fastcall HvlRouteInterrupt(int a1)
{
  return HvlpInterruptCallback[a1]();
}
