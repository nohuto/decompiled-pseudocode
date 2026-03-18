/*
 * XREFs of ZwDeleteFile @ 0x14017F880
 * Callers:
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1, v2);
}
