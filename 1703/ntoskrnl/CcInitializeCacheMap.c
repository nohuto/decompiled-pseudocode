/*
 * XREFs of CcInitializeCacheMap @ 0x14003B600
 * Callers:
 *     <none>
 * Callees:
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  CcInitializeCacheMapEx(FileObject, (__int64)LazyWriteContext, 0);
}
