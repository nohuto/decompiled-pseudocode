/*
 * XREFs of KeGetCurrentIrql @ 0x1400E2700
 * Callers:
 *     BgLibraryInitialize @ 0x1407D088C (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x1407D0994 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 *     BgDisplayString @ 0x1407D2DDC (BgDisplayString.c)
 *     BgFreeContext @ 0x1407D2E4C (BgFreeContext.c)
 *     BgGetContext @ 0x1407D2E90 (BgGetContext.c)
 *     BgLibraryDestroy @ 0x1407D2EDC (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
