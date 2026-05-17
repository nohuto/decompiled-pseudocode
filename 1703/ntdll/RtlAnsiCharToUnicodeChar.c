/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180041790
 * Callers:
 *     toupper @ 0x18009B850 (toupper.c)
 *     sub_18009EE30 @ 0x18009EE30 (sub_18009EE30.c)
 *     sub_18009FC7C @ 0x18009FC7C (sub_18009FC7C.c)
 *     sub_1800A2284 @ 0x1800A2284 (sub_1800A2284.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180043840 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r9
  unsigned __int16 v3; // bx
  unsigned int v4; // esi
  __int64 result; // rax
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = 32;
  v6 = 32;
  v4 = (word_180159D80[*v1] != 0) + 1;
  if ( (int)RtlMultiByteToUnicodeN((unsigned int)&v6, 2, 0, (_DWORD)v1, v4) >= 0 )
    v3 = v6;
  result = v3;
  *a1 += v4;
  return result;
}
