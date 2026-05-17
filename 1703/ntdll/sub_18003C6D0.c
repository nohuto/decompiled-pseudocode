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

__int64 __fastcall sub_18003C6D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  LOBYTE(a2) = 1;
  RtlHashUnicodeString(a1, a2, 0LL, &v3);
  return v3;
}
