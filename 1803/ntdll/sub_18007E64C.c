/*
 * XREFs of sub_18007E64C @ 0x18007E64C
 * Callers:
 *     sub_18007E578 @ 0x18007E578 (sub_18007E578.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18007E64C(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= 4 * (unsigned int)(unsigned __int8)a1[1] + 8 && RtlValidSid(a1);
}
