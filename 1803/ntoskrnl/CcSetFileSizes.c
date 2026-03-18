/*
 * XREFs of CcSetFileSizes @ 0x1400D2770
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
