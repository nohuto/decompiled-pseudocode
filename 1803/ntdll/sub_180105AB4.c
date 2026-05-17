/*
 * XREFs of sub_180105AB4 @ 0x180105AB4
 * Callers:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 * Callees:
 *     sub_180002300 @ 0x180002300 (sub_180002300.c)
 *     sub_1800111DC @ 0x1800111DC (sub_1800111DC.c)
 */

__int64 __fastcall sub_180105AB4(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2 & *(_QWORD *)a1;
  v5 = v2 + 32 * ((unsigned __int64)(unsigned int)(*(_DWORD *)a2 - v2) >> *(_BYTE *)(a1 + 8));
  v6 = sub_1800111DC(a1, v5, *a2, v2, &v8);
  return sub_180002300((__int64 *)a1, (__int64 *)a2, v6, *(unsigned int *)(v5 + 4), v8);
}
