/*
 * XREFs of ZwQueryObject @ 0x14017E140
 * Callers:
 *     CmpAddToHiveFileList @ 0x1404CBF94 (CmpAddToHiveFileList.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     CmpCmdRenameHive @ 0x14066959C (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x140710810 (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass, ObjectInformation);
}
