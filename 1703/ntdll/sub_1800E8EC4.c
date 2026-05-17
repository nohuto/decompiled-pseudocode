/*
 * XREFs of sub_1800E8EC4 @ 0x1800E8EC4
 * Callers:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E8EC4(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  unsigned __int16 v4; // r8

  result = a1
        && (v3 = *(unsigned __int16 *)(a1 + 2), ((v3 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v3)
        && (unsigned int)v3 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 9) <= 0xFu
        && (v4 = 4 * (*(unsigned __int8 *)(a1 + 9) + 2), (int)(v3 - v4 - 8) >= 6)
        && *(_DWORD *)(v4 + a1 + 8) == 2020897377;
  return result;
}
