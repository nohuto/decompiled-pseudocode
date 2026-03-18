/*
 * XREFs of SetBitAbs @ 0x1C02CD2B8
 * Callers:
 *     DoHorizDropout @ 0x1C02CCB94 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02CCD38 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0338B28 || a2 >= dword_1C0338B2C || a3 < dword_1C0338B48 || a3 >= dword_1C0338B44 )
    return 4866LL;
  *(_DWORD *)(a1 + dword_1C0338B38 * (dword_1C0338B44 - a3 - 1) + 4 * ((__int64)(a2 - dword_1C0338B28) >> 5)) |= aulBitMask[(a2 - dword_1C0338B28) & 0x1F];
  return 0LL;
}
