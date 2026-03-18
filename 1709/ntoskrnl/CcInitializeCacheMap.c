/*
 * XREFs of CcInitializeCacheMap @ 0x14012FD10
 * Callers:
 *     <none>
 * Callees:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  CcInitializeCacheMapEx(FileObject, (__m128i *)FileSizes, PinAccess, (__int64)Callbacks, (__int64)LazyWriteContext, 0);
}
