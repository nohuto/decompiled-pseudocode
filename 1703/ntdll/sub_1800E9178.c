/*
 * XREFs of sub_1800E9178 @ 0x1800E9178
 * Callers:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E9178(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int8 v4; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && *(_BYTE *)(a1 + 13) <= 0xFu
        && (v3 = *(unsigned __int8 *)(a1 + 13), v2 >= 4 * v3 + 32)
        && *(_BYTE *)(a1 + 4 * v3 + 20) == 1
        && (v4 = *(_BYTE *)(a1 + 4 * v3 + 21), v4 <= 0xFu)
        && v2 >= 4 * v3 + 28 + 4 * (unsigned __int64)v4;
  return result;
}
