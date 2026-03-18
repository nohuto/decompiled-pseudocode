/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1405AA988
 * Callers:
 *     WdipSemLoadNextContextProvider @ 0x1405A9B4C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1405A9DC4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadConfigInfo @ 0x1405AAF2C (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadGroupPolicy @ 0x1405AB02C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14073F4D4 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
