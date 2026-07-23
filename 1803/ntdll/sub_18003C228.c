/*
 * XREFs of sub_18003C228 @ 0x18003C228
 * Callers:
 *     sub_1800092CC @ 0x1800092CC (sub_1800092CC.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18003FA70 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18003FB00 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800C90A0 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800C90D0 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 * Callees:
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall sub_18003C228(int a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5)
{
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return sub_18003D190(a1, (unsigned int)&DestinationString, 0, a3, 0LL, a4, a5);
  return result;
}
