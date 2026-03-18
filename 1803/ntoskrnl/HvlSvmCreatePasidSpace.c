/*
 * XREFs of HvlSvmCreatePasidSpace @ 0x14022AC70
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmCreatePasidSpace(int a1, int a2)
{
  unsigned __int16 v2; // ax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  while ( 1 )
  {
    v2 = HvcallpExtendedFastHypercall(65693LL, (__int64)v4, 8LL);
    if ( (HvlpFlags & 2) == 0 || v2 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
