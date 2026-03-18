/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1405AE548
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405ADC7C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadNextEndEvent @ 0x1405C9FD8 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadGroupPolicy @ 0x1405CA4C0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1405CA514 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextContextProvider @ 0x1405CA6D0 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140705E00 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
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
