/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x1401E8ADC
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1401E8100 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x1401E8410 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AD70 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpDetachRootSvmDevice(int a1)
{
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]

  v5 = 1;
  v3 = -1LL;
  v4 = a1;
  v1 = HvcallpExtendedFastHypercall(65667LL, (__int64)&v3, 16LL);
  return HvlpHvToNtStatus(v1);
}
