/*
 * XREFs of CmpCallCallBacks @ 0x1404E3414
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _SLIST_ENTRY *a6)
{
  return CmpCallCallBacksEx(a1, a2, 0LL, 1, a4, a5, a6);
}
