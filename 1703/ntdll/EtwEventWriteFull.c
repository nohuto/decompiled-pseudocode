/*
 * XREFs of EtwEventWriteFull @ 0x180060390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 */

__int64 __fastcall EtwEventWriteFull(
        __int64 a1,
        __int128 *a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        __int128 *a5,
        int a6,
        __int64 a7)
{
  return sub_18005E120(a1, a2, 0LL, 0, a3, a4, a5, a6, a7);
}
