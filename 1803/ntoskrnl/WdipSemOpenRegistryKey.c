/*
 * XREFs of WdipSemOpenRegistryKey @ 0x14063A4B4
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14063935C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1406393B0 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140639574 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14063986C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140639ECC (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A1848 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
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
