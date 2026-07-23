/*
 * XREFs of sub_18003C6D0 @ 0x18003C6D0
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18003A99C @ 0x18003A99C (sub_18003A99C.c)
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 *     sub_18004C728 @ 0x18004C728 (sub_18004C728.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x180040070 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_18003C6D0(_UNICODE_STRING *a1)
{
  ULONG HashValue; // [rsp+38h] [rbp+10h] BYREF

  HashValue = 0;
  RtlHashUnicodeString(a1, 1u, 0, &HashValue);
  return HashValue;
}
