/*
 * XREFs of HvlDmaDetachDeviceDomain @ 0x1401EB9C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDetachDeviceDomain(int a1)
{
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v5 = 1;
  v3 = -1LL;
  v4 = a1;
  v1 = HvcallpExtendedFastHypercall(65732LL, (__int64)&v3, 16LL);
  return HvlpHvToNtStatus(v1);
}
