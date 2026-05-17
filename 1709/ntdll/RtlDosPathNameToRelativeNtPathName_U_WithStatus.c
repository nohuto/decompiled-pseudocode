/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800325F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v8, a1);
  if ( (int)result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)v8, 0, a2, 0LL, a3, a4);
  return result;
}
