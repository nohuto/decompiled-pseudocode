/*
 * XREFs of sub_180095A28 @ 0x180095A28
 * Callers:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_1800F0CC0 @ 0x1800F0CC0 (sub_1800F0CC0.c)
 * Callees:
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 *     sub_1801005E0 @ 0x1801005E0 (sub_1801005E0.c)
 */

__int64 __fastcall sub_180095A28(int a1, PVOID a2, unsigned __int64 a3, int a4)
{
  unsigned __int16 v4; // cx

  if ( a1 && (v4 = a1 - 1, v4 < 2u) )
    return ((__int64 (__fastcall *)(PVOID, unsigned __int64, int))funcs_180095A64[v4])(a2, a3, a4);
  else
    return 3221225473LL;
}
