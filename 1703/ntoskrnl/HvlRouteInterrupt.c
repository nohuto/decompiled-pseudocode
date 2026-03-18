/*
 * XREFs of HvlRouteInterrupt @ 0x1401E4EA0
 * Callers:
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlRouteInterrupt(int a1)
{
  return HvlpInterruptCallback[a1]();
}
