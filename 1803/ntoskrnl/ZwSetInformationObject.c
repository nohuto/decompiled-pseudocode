/*
 * XREFs of ZwSetInformationObject @ 0x1401A8040
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectHandle, *(_QWORD *)&ObjectInformationClass, ObjectInformation);
}
