/*
 * XREFs of HvlSvmSetPasidAddressSpace @ 0x1401EDAF0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmSetPasidAddressSpace(int a1, int a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v5[1] = a1;
  v5[0] = a2;
  v6 = a3;
  while ( 1 )
  {
    v3 = HvcallpExtendedFastHypercall(65695LL, (__int64)v5, 16LL);
    if ( (HvlpFlags & 2) == 0 || v3 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}
