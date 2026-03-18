/*
 * XREFs of CcFlushCacheToLsn @ 0x140130990
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 */

__int64 __fastcall CcFlushCacheToLsn(__int64 a1, __int64 a2, int *a3)
{
  return CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}
