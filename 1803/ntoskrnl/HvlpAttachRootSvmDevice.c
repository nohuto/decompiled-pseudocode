/*
 * XREFs of HvlpAttachRootSvmDevice @ 0x14022B4A4
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x14022AB30 (HvlSvmAttachPasidSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAttachRootSvmDevice(unsigned int a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  _QWORD v6[6]; // [rsp+30h] [rbp-40h] BYREF

  v3 = a1;
  memset(v6, 0, 0x28uLL);
  v6[0] = -1LL;
  LODWORD(v6[2]) |= 7u;
  v6[1] = (unsigned int)v3 | 0x4000000000000000LL;
  v6[3] = v3;
  LODWORD(v6[4]) = a2;
  while ( 1 )
  {
    v4 = HvcallpExtendedFastHypercall(65666LL, (__int64)v6, 40LL);
    if ( v4 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
