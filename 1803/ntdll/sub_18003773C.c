/*
 * XREFs of sub_18003773C @ 0x18003773C
 * Callers:
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18003773C(__int64 a1)
{
  unsigned __int64 v1; // rdx
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 9) <= 0xFu
        && v1 >= (unsigned __int64)(4 * (unsigned int)*(unsigned __int8 *)(a1 + 9) + 8) + 8;
  return result;
}
