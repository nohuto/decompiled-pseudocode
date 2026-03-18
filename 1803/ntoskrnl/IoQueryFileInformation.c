/*
 * XREFs of IoQueryFileInformation @ 0x140583630
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
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
           (struct _IRP *)FileInformation,
           ReturnedLength,
           1);
}
