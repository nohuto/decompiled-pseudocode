/*
 * XREFs of EtwEventWriteFull @ 0x1800884B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x180019F70 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteFull(
        __int64 a1,
        __int128 *a2,
        unsigned __int16 a3,
        _GUID *a4,
        __int128 *a5,
        int a6,
        __int64 a7)
{
  return EtwpEventWriteFull(a1, a2, 0LL, 0, a3, a4, a5, a6, a7);
}
