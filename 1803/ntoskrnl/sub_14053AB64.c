/*
 * XREFs of sub_14053AB64 @ 0x14053AB64
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlock @ 0x14048A758 (WbDecryptWarbirdEncryptionSegmentBlock.c)
 *     sub_14048A988 @ 0x14048A988 (sub_14048A988.c)
 *     WbFreeMemoryBlock @ 0x14053A648 (WbFreeMemoryBlock.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 */

void __fastcall sub_14053AB64(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
