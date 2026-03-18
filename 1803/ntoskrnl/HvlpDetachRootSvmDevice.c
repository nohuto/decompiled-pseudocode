/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x14022B568
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x14022AB30 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x14022AE30 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpDetachRootSvmDevice(unsigned int a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 | 0x4000000000000000LL;
  v1 = HvcallpExtendedFastHypercall(65667LL, (__int64)v3, 16LL);
  return HvlpHvToNtStatus(v1);
}
