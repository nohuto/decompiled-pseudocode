/*
 * XREFs of ZwQueryObject @ 0x1401A76C0
 * Callers:
 *     CmpNameFromAttributes @ 0x14049E868 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140581F48 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x140653784 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x1406FBAB4 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1407AF16C (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
