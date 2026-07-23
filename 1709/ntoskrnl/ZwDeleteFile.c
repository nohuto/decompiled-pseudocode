/*
 * XREFs of ZwDeleteFile @ 0x14017F220
 * Callers:
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     NtEnableLastKnownGood @ 0x1405E7AE0 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
