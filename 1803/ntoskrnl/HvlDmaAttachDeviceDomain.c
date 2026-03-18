/*
 * XREFs of HvlDmaAttachDeviceDomain @ 0x1402288F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaAttachDeviceDomain(__int64 a1, __int64 a2)
{
  unsigned __int16 v5; // ax
  _QWORD v6[4]; // [rsp+30h] [rbp-30h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[0] = -1LL;
  if ( *(_BYTE *)(a2 + 4) )
    LODWORD(v6[2]) = v6[2] & 0xFFFFFFF0 | 1;
  else
    LODWORD(v6[2]) &= 0xFFFFFFF0;
  HIDWORD(v6[2]) = *(_DWORD *)a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v6[3] = v6[3] & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    LOWORD(v6[3]) = *(_WORD *)(a1 + 12);
    WORD1(v6[3]) = *(_WORD *)(a1 + 8);
    goto LABEL_10;
  }
  if ( *(_DWORD *)a1 != 4 )
    return 3221225659LL;
  if ( *(_QWORD *)(a1 + 8) > 0x3FFFFFFFFFFFFFFFuLL )
    return 3221225485LL;
  v6[3] = *(_QWORD *)(a1 + 8);
LABEL_10:
  while ( 1 )
  {
    v5 = HvcallpExtendedFastHypercall(65714LL, (__int64)v6, 32LL);
    if ( v5 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v5);
}
