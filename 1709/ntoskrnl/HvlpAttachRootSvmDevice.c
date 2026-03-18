/*
 * XREFs of HvlpAttachRootSvmDevice @ 0x1401EDC10
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1401ED300 (HvlSvmAttachPasidSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAttachRootSvmDevice(unsigned int a1, int a2)
{
  unsigned __int16 v4; // ax
  _QWORD v6[4]; // [rsp+30h] [rbp-30h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[0] = -1LL;
  LODWORD(v6[2]) |= 7u;
  v6[1] = a1 | 0x100000000LL;
  HIDWORD(v6[2]) = a1;
  LODWORD(v6[3]) = a2;
  while ( 1 )
  {
    v4 = HvcallpExtendedFastHypercall(65666LL, (__int64)v6, 32LL);
    if ( v4 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
