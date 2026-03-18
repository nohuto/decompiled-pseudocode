/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1401EBE4C
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1401EB808 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x1401EBDF8 (HvlpPrepareFlushHeader.c)
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
