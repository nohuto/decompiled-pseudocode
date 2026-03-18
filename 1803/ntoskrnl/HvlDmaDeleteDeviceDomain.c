/*
 * XREFs of HvlDmaDeleteDeviceDomain @ 0x140228A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDeleteDeviceDomain(__int64 a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v4; // [rsp+40h] [rbp-20h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v4 = 0LL;
  LODWORD(v4) = *(_BYTE *)(a1 + 4) != 0;
  HIDWORD(v4) = *(_DWORD *)a1;
  v1 = HvcallpExtendedFastHypercall(65733LL, (__int64)v3, 24LL);
  return HvlpHvToNtStatus(v1);
}
