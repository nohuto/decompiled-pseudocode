/*
 * XREFs of sub_1800404E8 @ 0x1800404E8
 * Callers:
 *     sub_18002C268 @ 0x18002C268 (sub_18002C268.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18003EEE0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_1800404E8(_UNICODE_STRING *a1)
{
  __int64 result; // rax
  ULONG HashValue; // [rsp+38h] [rbp+10h] BYREF

  HashValue = 0;
  RtlHashUnicodeString(a1, 1u, 0, &HashValue);
  result = HashValue;
  if ( !HashValue )
    return 0x80000000LL;
  return result;
}
