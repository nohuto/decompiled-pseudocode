/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1401EC520
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  _DWORD *v2; // rbx
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, 0LL, 32LL);
  memset(v2, 0, 0x20uLL);
  *v2 = a1;
  v2[1] = 65538;
  LODWORD(v2) = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v4);
  return (unsigned int)v2;
}
