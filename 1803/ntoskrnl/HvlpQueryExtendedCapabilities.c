/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x14022E3AC
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall HvlpQueryExtendedCapabilities(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int16 v3; // bx
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF

  v2 = (_QWORD *)HvlpAcquireHypercallPage(v5, 2, (__int64)&v6, 8LL);
  v3 = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v5);
  if ( v3 )
    return 0;
  *a1 = *v2;
  return 1;
}
