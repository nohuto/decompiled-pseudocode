/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1401E72A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  unsigned int v1; // esi
  _DWORD *v3; // rbx
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = (_DWORD *)HvlpAcquireHypercallPage(v5, 1, 0LL, 32LL);
  memset(v3, 0, 0x20uLL);
  *v3 = a1;
  v3[1] = 65538;
  if ( (unsigned __int16)HvcallCodeVa() )
    v1 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v5);
  return v1;
}
