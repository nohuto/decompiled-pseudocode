/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18003D9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // edx
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v9, a1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = 1;
    return sub_18003E060(0, v8, (unsigned int)v9, 0, a2, 0LL, a3, a4);
  }
  return result;
}
