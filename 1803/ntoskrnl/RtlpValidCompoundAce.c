/*
 * XREFs of RtlpValidCompoundAce @ 0x1407849C0
 * Callers:
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int8 v8; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && (v3 = *(_BYTE *)(a1 + 13), v3 <= 0xFu)
        && (v4 = v3, v5 = 4 * (unsigned int)v3 + 8, v6 = (unsigned int)v5, v2 >= v5 + 24)
        && (v7 = (unsigned int)(4 * v4 + 8), *(_BYTE *)(v7 + a1 + 12) == 1)
        && (v8 = *(_BYTE *)(v7 + a1 + 13), v8 <= 0xFu)
        && v2 >= (unsigned __int64)(4 * (unsigned int)v8 + 8) + v6 + 12;
  return result;
}
