/*
 * XREFs of sub_18009A104 @ 0x18009A104
 * Callers:
 *     _snprintf @ 0x18008BF80 (_snprintf.c)
 *     _snwprintf @ 0x18008C030 (_snwprintf.c)
 *     swprintf @ 0x18008C660 (swprintf.c)
 *     sub_18008C738 @ 0x18008C738 (sub_18008C738.c)
 *     sub_18008C85C @ 0x18008C85C (sub_18008C85C.c)
 *     sub_18008C918 @ 0x18008C918 (sub_18008C918.c)
 *     sub_18008C9E8 @ 0x18008C9E8 (sub_18008C9E8.c)
 *     sprintf @ 0x18008F710 (sprintf.c)
 *     sub_180091E94 @ 0x180091E94 (sub_180091E94.c)
 *     sub_180097858 @ 0x180097858 (sub_180097858.c)
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 *     sub_180098760 @ 0x180098760 (sub_180098760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009A104(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFFFFFLL;
}
