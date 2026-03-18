/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x1401EBA50
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1401EB808 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AD70 (HvcallpExtendedFastHypercall.c)
 *     HvlpPrepareFlushHeader @ 0x1401EBDF8 (HvlpPrepareFlushHeader.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-48h]
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v6, a1, 0LL, a4, 2LL);
  LODWORD(v5) = 65538;
  return HvcallpExtendedFastHypercall(v5, (__int64)v6, 24LL);
}
