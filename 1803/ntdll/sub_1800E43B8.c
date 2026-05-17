/*
 * XREFs of sub_1800E43B8 @ 0x1800E43B8
 * Callers:
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E43B8(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rax

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && *(_BYTE *)(a1 + 13) <= 0xFu
        && (v3 = *(unsigned __int8 *)(a1 + 13), v2 >= (unsigned __int64)(unsigned int)(4 * v3 + 8) + 24)
        && (v4 = (unsigned int)(4 * v3 + 8), *(_BYTE *)(v4 + a1 + 12) == 1)
        && *(_BYTE *)(v4 + a1 + 13) <= 0xFu
        && v2 >= 4 * (unsigned int)*(unsigned __int8 *)(v4 + a1 + 13)
               + 8
               + (unsigned __int64)(unsigned int)(4 * v3 + 8)
               + 12;
  return result;
}
