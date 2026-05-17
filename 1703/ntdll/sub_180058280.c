/*
 * XREFs of sub_180058280 @ 0x180058280
 * Callers:
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     RtlDoesFileExists_U @ 0x18008ACE0 (RtlDoesFileExists_U.c)
 *     RtlDosSearchPath_U @ 0x18008DA50 (RtlDosSearchPath_U.c)
 *     sub_1800D4C84 @ 0x1800D4C84 (sub_1800D4C84.c)
 * Callees:
 *     sub_18003D528 @ 0x18003D528 (sub_18003D528.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall sub_180058280(__int64 a1, char a2)
{
  int v3; // edx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v5, a1) < 0 )
    return 0;
  LOBYTE(v3) = a2;
  return sub_18003D528((int)v5, v3);
}
