/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x18003FB00
 * Callers:
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 * Callees:
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)sub_18003C228(0, a1, a2, a3, a4) >= 0;
}
