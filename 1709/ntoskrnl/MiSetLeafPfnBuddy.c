/*
 * XREFs of MiSetLeafPfnBuddy @ 0x14022A97C
 * Callers:
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetLeafPfnBuddy(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFFFELL;
  *a1 ^= (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  return result;
}
