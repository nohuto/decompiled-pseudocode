/*
 * XREFs of sub_18004F794 @ 0x18004F794
 * Callers:
 *     RtlDoesFileExists_U @ 0x18004C990 (RtlDoesFileExists_U.c)
 *     sub_18004E6B0 @ 0x18004E6B0 (sub_18004E6B0.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 *     sub_180089248 @ 0x180089248 (sub_180089248.c)
 * Callees:
 *     sub_18003C82C @ 0x18003C82C (sub_18003C82C.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall sub_18004F794(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 && sub_18003C82C((int)&DestinationString, a2);
}
