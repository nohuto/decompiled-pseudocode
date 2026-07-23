/*
 * XREFs of ZwSetInformationObject @ 0x14017EAC0
 * Callers:
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectHandle);
}
