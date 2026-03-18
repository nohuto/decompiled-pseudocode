/*
 * XREFs of ExFreePool @ 0x1402B3E80
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     sub_1401755B0 @ 0x1401755B0 (sub_1401755B0.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140288C94 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlFreeAnsiString @ 0x1404DBD90 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1404DF5F0 (RtlOemStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1404DF8A0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x14056D7A0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14056D860 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14056D950 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14056DBB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x14056FC00 (RtlDowncaseUnicodeString.c)
 *     RtlFreeOemString @ 0x14059F100 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14071DC70 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14071DEF0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
