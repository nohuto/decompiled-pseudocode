/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x14022E7DC
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     HvlFlushAddressSpaceTb @ 0x140159CD8 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x140159E8C (HvlpPrepareFlushHeader.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = (_QWORD *)HvlpAcquireHypercallPage(v8, 1, (__int64)&v9, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v8);
}
