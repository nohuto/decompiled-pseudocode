/*
 * XREFs of IoQueryVolumeInformation @ 0x1404503F0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(FileObject, (__int64)FsInformation, (__int64)ReturnedLength, 0);
}
