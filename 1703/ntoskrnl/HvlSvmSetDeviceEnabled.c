/*
 * XREFs of HvlSvmSetDeviceEnabled @ 0x1401E8860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AD70 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x1401EA4A4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmSetDeviceEnabled(int a1, unsigned __int8 a2)
{
  unsigned __int16 v2; // ax
  _DWORD v4[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h]

  v4[1] = 1;
  v4[0] = a1;
  v6 = a2;
  v5 = 1LL;
  v2 = HvcallpExtendedFastHypercall(196779LL, (__int64)v4, 24LL);
  return HvlpHvToNtStatus(v2);
}
