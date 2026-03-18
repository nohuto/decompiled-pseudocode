/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x1401E9A4C
 * Callers:
 *     PopDiagComputeEarlyHiberStats @ 0x140438F48 (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 *v3; // rsi
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-878h] BYREF
  PHYSICAL_ADDRESS v5[3]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v6[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v7[2064]; // [rsp+70h] [rbp-828h] BYREF

  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)v6, 8LL);
  v3 = (__int64 *)HvlpAcquireHypercallPage(v5, 2, (__int64)v7, 1032LL);
  *v2 = 9;
  if ( !(unsigned __int16)HvcallCodeVa() )
    v1 = *v3;
  HvlpReleaseHypercallPage((__int64)v4);
  HvlpReleaseHypercallPage((__int64)v5);
  return v1;
}
