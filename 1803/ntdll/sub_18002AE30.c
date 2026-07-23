/*
 * XREFs of sub_18002AE30 @ 0x18002AE30
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_180060B10 @ 0x180060B10 (sub_180060B10.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     sub_180061A7C @ 0x180061A7C (sub_180061A7C.c)
 *     sub_18007488C @ 0x18007488C (sub_18007488C.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 * Callees:
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 */

__int64 __fastcall sub_18002AE30(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return sub_180011A6C(a1, result);
  return result;
}
