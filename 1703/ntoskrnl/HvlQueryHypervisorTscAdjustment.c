/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x14013890C
 * Callers:
 *     PopDiagComputeEarlyHiberStats @ 0x14040A6BC (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 *v3; // rsi
  _BYTE v4[24]; // [rsp+20h] [rbp-878h] BYREF
  _BYTE v5[24]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v6[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v7[2064]; // [rsp+70h] [rbp-828h] BYREF

  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1LL, v6, 8LL);
  v3 = (__int64 *)HvlpAcquireHypercallPage(v5, 2LL, v7, 1032LL);
  *v2 = 9;
  if ( !(unsigned __int16)HvcallCodeVa() )
    v1 = *v3;
  HvlpReleaseHypercallPage(v4);
  HvlpReleaseHypercallPage(v5);
  return v1;
}
