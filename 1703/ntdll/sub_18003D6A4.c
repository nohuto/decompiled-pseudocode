/*
 * XREFs of sub_18003D6A4 @ 0x18003D6A4
 * Callers:
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18003BB30 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18003C330 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     sub_1800537C0 @ 0x1800537C0 (sub_1800537C0.c)
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 * Callees:
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall sub_18003D6A4(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v9; // edx
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v10, a3);
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = a2;
    return sub_18003E060(0, v9, (unsigned int)v10, 0, a4, 0LL, a5, a6);
  }
  return result;
}
