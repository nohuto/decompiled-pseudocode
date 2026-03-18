/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14022EE04
 * Callers:
 *     HvlpGetPageList @ 0x14022EC2C (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14022EF18 (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+40h] [rbp-48h] BYREF

  v3 = (_QWORD *)HvlpAcquireHypercallPage(v5, 1, (__int64)v6, 24LL);
  v3[1] = -1LL;
  *v3 = a2;
  v3[2] = 1LL;
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v5);
}
