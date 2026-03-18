/*
 * XREFs of GetBitAbs @ 0x1C02CCFA8
 * Callers:
 *     DoHorizDropout @ 0x1C02CCB94 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02CCD38 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0338B28 || a2 >= dword_1C0338B2C || a3 < dword_1C0338B34 || a3 >= dword_1C0338B30 )
    return 0LL;
  if ( a3 < dword_1C0338B44 && a3 >= dword_1C0338B48 )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0338B28) & 0x1F] & *(_DWORD *)(a1
                                                                                + dword_1C0338B38
                                                                                * (dword_1C0338B44 - a3 - 1)
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0338B28) >> 5)));
  if ( a3 == dword_1C0338B4C )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0338B28) & 0x1F] & *(_DWORD *)(qword_1C0338B50
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0338B28) >> 5)));
  else
    return 0LL;
}
