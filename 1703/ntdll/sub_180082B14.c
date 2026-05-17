/*
 * XREFs of sub_180082B14 @ 0x180082B14
 * Callers:
 *     sub_180013438 @ 0x180013438 (sub_180013438.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_180082B14(_QWORD *a1)
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
