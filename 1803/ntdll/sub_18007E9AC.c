/*
 * XREFs of sub_18007E9AC @ 0x18007E9AC
 * Callers:
 *     sub_1800583B8 @ 0x1800583B8 (sub_1800583B8.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_18007E9AC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  ZwClose(a1[4]);
  v2 = a1[3];
  a1[12] = 0LL;
  result = ZwClose(v2);
  a1[4] = 0LL;
  a1[3] = 0LL;
  return result;
}
