/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x18003BB30
 * Callers:
 *     sub_1800E3538 @ 0x1800E3538 (sub_1800E3538.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
 * Callees:
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(int a1, int a2, __int64 a3, __int64 a4)
{
  return (int)sub_18003D6A4(a1, 0, a1, a2, a3, a4) >= 0;
}
