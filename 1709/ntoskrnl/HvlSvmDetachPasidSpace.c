/*
 * XREFs of HvlSvmDetachPasidSpace @ 0x1401ED600
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     HvlpDetachRootSvmDevice @ 0x1401EDCCC (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDetachPasidSpace(unsigned int a1)
{
  unsigned __int16 v2; // ax
  int v3; // ebx
  int v4; // eax
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 0;
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
