/*
 * XREFs of sub_180037780 @ 0x180037780
 * Callers:
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180037780(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
