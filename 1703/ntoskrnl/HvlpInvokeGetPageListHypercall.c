/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x1401EC488
 * Callers:
 *     HvlpGetPageList @ 0x1401EC2A8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401EC59C (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
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
