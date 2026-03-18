/*
 * XREFs of HvlResetCoverageVector @ 0x140226C68
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1407C685C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-8F8h] BYREF
  PHYSICAL_ADDRESS v3[3]; // [rsp+40h] [rbp-8D8h] BYREF
  _BYTE v4[144]; // [rsp+60h] [rbp-8B8h] BYREF
  _BYTE v5[2064]; // [rsp+F0h] [rbp-828h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v2, 1, (__int64)v5, 1032LL);
  HvlpAcquireHypercallPage(v3, 2, (__int64)v4, 72LL);
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallCodeVa() == 0;
  HvlpReleaseHypercallPage((__int64)v2);
  HvlpReleaseHypercallPage((__int64)v3);
  return (char)v0;
}
