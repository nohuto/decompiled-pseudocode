/*
 * XREFs of sub_180023F18 @ 0x180023F18
 * Callers:
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180022160 @ 0x180022160 (sub_180022160.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     sub_180023F7C @ 0x180023F7C (sub_180023F7C.c)
 */

__int64 __fastcall sub_180023F18(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode(a1 + 16, (unsigned __int64)(a3 + 2));
  v6 = sub_180023F7C(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)((unsigned __int16)a3 ^ qword_18015A440 ^ *a3) + v6;
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
