/*
 * XREFs of HvlSvmDetachPasidSpace @ 0x14022AE30
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpDetachRootSvmDevice @ 0x14022B568 (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDetachPasidSpace(unsigned int a1)
{
  unsigned __int16 v2; // ax
  int v3; // ebx
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a1;
  v2 = HvcallpExtendedFastHypercall(65699LL, (__int64)v6, 8LL);
  v3 = HvlpHvToNtStatus(v2);
  if ( (HvlpFlags & 2) != 0 )
  {
    v4 = HvlpDetachRootSvmDevice(a1);
    if ( v3 >= 0 && v4 < 0 )
      return (unsigned int)v4;
  }
  return (unsigned int)v3;
}
