/*
 * XREFs of SetBitAbs @ 0x1C02C70B0
 * Callers:
 *     DoHorizDropout @ 0x1C02C69C4 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C6B58 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0334248 || a2 >= dword_1C033424C || a3 < dword_1C0334268 || a3 >= dword_1C0334264 )
    return 4866LL;
  *(_DWORD *)(a1 + dword_1C0334258 * (dword_1C0334264 - a3 - 1) + 4 * ((__int64)(a2 - dword_1C0334248) >> 5)) |= aulBitMask[(a2 - dword_1C0334248) & 0x1F];
  return 0LL;
}
