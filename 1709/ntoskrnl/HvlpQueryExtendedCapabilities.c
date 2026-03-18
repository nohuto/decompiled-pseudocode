/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x1401EF360
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1401EEFA8 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
