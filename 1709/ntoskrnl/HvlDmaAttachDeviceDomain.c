/*
 * XREFs of HvlDmaAttachDeviceDomain @ 0x1401EB880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaAttachDeviceDomain(unsigned int a1, int a2)
{
  unsigned __int16 v4; // ax
  _QWORD v6[4]; // [rsp+30h] [rbp-30h] BYREF

  memset(v6, 0, sizeof(v6));
  LODWORD(v6[2]) = 0;
  v6[0] = -1LL;
  HIDWORD(v6[2]) = a2;
  v6[3] = a1 | 0x100000000LL;
  while ( 1 )
  {
    v4 = HvcallpExtendedFastHypercall(65714LL, (__int64)v6, 32LL);
    if ( v4 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
