/*
 * XREFs of HvlSvmEnablePasid @ 0x1401E84E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AD70 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSvmEnablePasid(int a1, int a2)
{
  unsigned __int16 v2; // ax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  while ( 1 )
  {
    v2 = HvcallpExtendedFastHypercall(65700LL, (__int64)v4, 8LL);
    if ( (HvlpFlags & 2) == 0 || v2 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
