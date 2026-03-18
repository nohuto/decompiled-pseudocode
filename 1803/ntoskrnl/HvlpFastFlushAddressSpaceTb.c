/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x140159D18
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     HvlFlushAddressSpaceTb @ 0x140159CD8 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpPrepareFlushHeader @ 0x140159E8C (HvlpPrepareFlushHeader.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-48h]
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v6, a1, a2, a4, 2LL);
  LODWORD(v5) = 65538;
  return HvcallpExtendedFastHypercall(v5, v6, 24LL);
}
