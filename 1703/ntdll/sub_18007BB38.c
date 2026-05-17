/*
 * XREFs of sub_18007BB38 @ 0x18007BB38
 * Callers:
 *     sub_18007BA64 @ 0x18007BA64 (sub_18007BA64.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18007BB38(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= 4 * (unsigned int)(unsigned __int8)a1[1] + 8 && RtlValidSid(a1);
}
