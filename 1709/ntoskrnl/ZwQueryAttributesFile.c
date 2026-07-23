/*
 * XREFs of ZwQueryAttributesFile @ 0x14017E060
 * Callers:
 *     BiDoesHiveExist @ 0x1405B19AC (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140694600 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140779538 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
