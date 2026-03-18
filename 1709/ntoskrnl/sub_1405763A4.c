/*
 * XREFs of sub_1405763A4 @ 0x1405763A4
 * Callers:
 *     sub_14044AA3C @ 0x14044AA3C (sub_14044AA3C.c)
 *     sub_14044AC38 @ 0x14044AC38 (sub_14044AC38.c)
 *     WbFreeMemoryBlock @ 0x14057631C (WbFreeMemoryBlock.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 */

void __fastcall sub_1405763A4(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
