/*
 * XREFs of sub_180076D50 @ 0x180076D50
 * Callers:
 *     sub_180076B90 @ 0x180076B90 (sub_180076B90.c)
 *     sub_1800CC838 @ 0x1800CC838 (sub_1800CC838.c)
 * Callees:
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 */

__int64 __fastcall sub_180076D50(
        char a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        _QWORD *a6)
{
  return sub_18003D190(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
