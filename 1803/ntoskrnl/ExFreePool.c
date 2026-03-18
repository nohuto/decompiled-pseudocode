/*
 * XREFs of ExFreePool @ 0x1402EA010
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     sub_14019FD30 @ 0x14019FD30 (sub_14019FD30.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1402BE134 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x14055E570 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14055EDE0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14055EED0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14055F150 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlOemStringToUnicodeString @ 0x1405DD0D0 (RtlOemStringToUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x140605CC0 (RtlUnicodeStringToOemString.c)
 *     RtlFreeOemString @ 0x140605E40 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407813F0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140781680 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
