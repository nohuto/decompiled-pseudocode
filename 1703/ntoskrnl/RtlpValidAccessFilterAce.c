/*
 * XREFs of RtlpValidAccessFilterAce @ 0x1406E9260
 * Callers:
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidAccessFilterAce(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  unsigned __int16 v5; // r8

  result = a1
        && (v3 = *(unsigned __int16 *)(a1 + 2), ((v3 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v3)
        && (unsigned int)v3 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && (v4 = *(_BYTE *)(a1 + 9), v4 <= 0xFu)
        && (v5 = 4 * (v4 + 2), (int)(v3 - v5 - 8) >= 6)
        && *(_DWORD *)(v5 + a1 + 8) == 2020897377;
  return result;
}
