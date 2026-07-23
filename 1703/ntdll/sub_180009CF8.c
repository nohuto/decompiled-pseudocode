/*
 * XREFs of sub_180009CF8 @ 0x180009CF8
 * Callers:
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 * Callees:
 *     sub_180009D5C @ 0x180009D5C (sub_180009D5C.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 */

__int64 __fastcall sub_180009CF8(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = sub_180009D5C(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)(a3 ^ qword_18015BFA8 ^ *(_DWORD *)a3) + v6;
  *(_QWORD *)(a1 + 48) -= result;
  return result;
}
