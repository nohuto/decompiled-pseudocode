/*
 * XREFs of KeGetCurrentIrql @ 0x140140410
 * Callers:
 *     BgFreeContext @ 0x140755034 (BgFreeContext.c)
 *     BgGetContext @ 0x14075540C (BgGetContext.c)
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x140756130 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x140758A34 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x140759CA0 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x140759D10 (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
