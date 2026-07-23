/*
 * XREFs of WmipQueryWmiRegInfo @ 0x140655A00
 * Callers:
 *     IoWMISystemControl @ 0x140589B0C (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &WmipRegistryPath;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
