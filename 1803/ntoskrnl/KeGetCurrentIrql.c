/*
 * XREFs of KeGetCurrentIrql @ 0x14002E450
 * Callers:
 *     BgFreeContext @ 0x14083B034 (BgFreeContext.c)
 *     BgGetContext @ 0x14083B1C4 (BgGetContext.c)
 *     BgDisplayFade @ 0x14083B49C (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x14083B9D0 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x14083CF88 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x14083F84C (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14083F8BC (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
