/*
 * XREFs of sub_18009C404 @ 0x18009C404
 * Callers:
 *     _snprintf @ 0x180096D10 (_snprintf.c)
 *     _snwprintf @ 0x180096DC0 (_snwprintf.c)
 *     sub_18009742C @ 0x18009742C (sub_18009742C.c)
 *     sub_1800974E8 @ 0x1800974E8 (sub_1800974E8.c)
 *     sub_1800975B8 @ 0x1800975B8 (sub_1800975B8.c)
 *     sprintf @ 0x18009A3A0 (sprintf.c)
 *     swprintf @ 0x18009B2B0 (swprintf.c)
 *     sub_18009B8F8 @ 0x18009B8F8 (sub_18009B8F8.c)
 *     sub_18009CC60 @ 0x18009CC60 (sub_18009CC60.c)
 *     sub_1800A23A4 @ 0x1800A23A4 (sub_1800A23A4.c)
 *     sub_1800A247C @ 0x1800A247C (sub_1800A247C.c)
 *     sub_1800A3190 @ 0x1800A3190 (sub_1800A3190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009C404(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFFFFFLL;
}
