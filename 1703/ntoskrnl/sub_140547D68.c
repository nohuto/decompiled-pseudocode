/*
 * XREFs of sub_140547D68 @ 0x140547D68
 * Callers:
 *     sub_140547A4C @ 0x140547A4C (sub_140547A4C.c)
 *     sub_140547C50 @ 0x140547C50 (sub_140547C50.c)
 *     WbFreeMemoryBlock @ 0x140548FA4 (WbFreeMemoryBlock.c)
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 */

void __fastcall sub_140547D68(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
