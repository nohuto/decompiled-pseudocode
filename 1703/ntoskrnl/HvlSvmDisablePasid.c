/*
 * XREFs of HvlSvmDisablePasid @ 0x1401E8490
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AD70 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmDisablePasid(int a1, int a2)
{
  unsigned __int16 v2; // ax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v2 = HvcallpExtendedFastHypercall(65701LL, (__int64)v4, 8LL);
  return HvlpHvToNtStatus(v2);
}
