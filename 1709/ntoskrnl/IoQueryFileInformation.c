/*
 * XREFs of IoQueryFileInformation @ 0x140597960
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           FileObject,
           FileInformationClass,
           Length,
           0,
           (__int64)FileInformation,
           ReturnedLength,
           1);
}
