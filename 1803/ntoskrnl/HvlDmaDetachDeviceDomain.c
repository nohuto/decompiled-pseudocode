/*
 * XREFs of HvlDmaDetachDeviceDomain @ 0x140228AB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDetachDeviceDomain(unsigned __int64 a1)
{
  unsigned __int16 v2; // ax
  _QWORD v3[14]; // [rsp+30h] [rbp-88h] BYREF

  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    return 3221225485LL;
  v3[1] = a1 & 0x3FFFFFFFFFFFFFFFLL;
  v3[0] = -1LL;
  v2 = HvcallpExtendedFastHypercall(65732LL, (__int64)v3, 16LL);
  return HvlpHvToNtStatus(v2);
}
