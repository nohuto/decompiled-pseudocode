/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180089700
 * Callers:
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     sub_1800474C8 @ 0x1800474C8 (sub_1800474C8.c)
 *     RtlOemStringToUnicodeString @ 0x18007C750 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180089730 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(PCSTR *a1)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, a1[1], *(unsigned __int16 *)a1);
  return BytesInUnicodeString + 2;
}
