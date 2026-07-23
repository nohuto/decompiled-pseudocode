/*
 * XREFs of ZwQueryAttributesFile @ 0x14017E6E0
 * Callers:
 *     BiDoesHiveExist @ 0x14058D340 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140669F1C (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14073529C (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
