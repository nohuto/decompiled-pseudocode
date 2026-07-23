/*
 * XREFs of ZwQueryAttributesFile @ 0x1401A7C60
 * Callers:
 *     BiDoesHiveExist @ 0x14060A1E8 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1406F7790 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x1407E21A4 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
