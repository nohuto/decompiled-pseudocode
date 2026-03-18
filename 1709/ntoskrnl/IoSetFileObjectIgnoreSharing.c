/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x1406B7AC0
 * Callers:
 *     <none>
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x1401FA25C (IopSetFileObjectExtensionFlag.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, 1);
}
