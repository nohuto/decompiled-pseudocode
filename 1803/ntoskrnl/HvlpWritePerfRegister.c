/*
 * XREFs of HvlpWritePerfRegister @ 0x1401A571C
 * Callers:
 *     HvlWritePerfIoPort @ 0x1401A5530 (HvlWritePerfIoPort.c)
 *     HvlWritePerfMsr @ 0x1401A55A0 (HvlWritePerfMsr.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpWritePerfRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v8; // ax
  _QWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  LODWORD(v10[0]) = a1;
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v8 = HvcallpExtendedFastHypercall(65563LL, v10, 32LL);
  return HvlpHvToNtStatus(v8);
}
