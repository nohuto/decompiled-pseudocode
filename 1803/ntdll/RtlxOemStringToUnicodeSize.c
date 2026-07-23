/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800E51A0
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 *     RtlOemStringToUnicodeString @ 0x1800796B0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180083760 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(PCSTR *a1)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, a1[1], *(unsigned __int16 *)a1);
  return BytesInUnicodeString + 2;
}
