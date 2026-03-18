/*
 * XREFs of HvlSvmClearPrqStalled @ 0x14022AC10
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallpExtendedFastHypercall(65705LL, (__int64)v3, 8LL);
  return HvlpHvToNtStatus(v1);
}
