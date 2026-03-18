/*
 * XREFs of CcSetFileSizes @ 0x140131EB0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
