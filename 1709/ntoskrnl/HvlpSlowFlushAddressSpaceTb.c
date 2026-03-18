/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1401F0DA0
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14014110C (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x140141280 (HvlpPrepareFlushHeader.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rax
  PHYSICAL_ADDRESS v7[3]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[48]; // [rsp+40h] [rbp-48h] BYREF

  v5 = (_QWORD *)HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 24LL);
  HvlpPrepareFlushHeader(v5, a1, 0LL, a3);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v7);
}
