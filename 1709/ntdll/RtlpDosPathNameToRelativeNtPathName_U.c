/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C
 * Callers:
 *     LdrpMapResourceFile @ 0x180018AC4 (LdrpMapResourceFile.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180018ED0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180035AE0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180035B40 (RtlDosPathNameToNtPathName_U.c)
 *     EtwpCreateFile @ 0x180065084 (EtwpCreateFile.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CF760 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CF790 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0604 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v9, a2);
  if ( (int)result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned int)v9, 0, a3, 0LL, a4, a5);
  return result;
}
