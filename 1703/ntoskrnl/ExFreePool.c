/*
 * XREFs of ExFreePool @ 0x140286A00
 * Callers:
 *     sub_140175E30 @ 0x140175E30 (sub_140175E30.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14025F0DC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlUnicodeStringToOemString @ 0x140433750 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140433810 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x140433900 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140433B50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x14043C330 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404C17D0 (RtlDuplicateUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1404ED8E0 (RtlFreeAnsiString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x140573F70 (RtlOemStringToUnicodeString.c)
 *     RtlFreeOemString @ 0x140586090 (RtlFreeOemString.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1406E5750 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406E59E0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     KiFilterFiberContext @ 0x1407DCB40 (KiFilterFiberContext.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreePool(PVOID P)
{
  ExFreePoolWithTag(P, 0);
}
