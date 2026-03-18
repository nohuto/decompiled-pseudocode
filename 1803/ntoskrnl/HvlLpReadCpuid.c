/*
 * XREFs of HvlLpReadCpuid @ 0x1402299D0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r14
  __int16 v13; // ax
  PHYSICAL_ADDRESS v15[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v16[3]; // [rsp+40h] [rbp-38h] BYREF

  v10 = (_DWORD *)HvlpAcquireHypercallPage(v15, 1, 0LL, 16LL);
  v11 = HvlpAcquireHypercallPage(v16, 2, 0LL, 16LL);
  v10[3] = 0;
  v12 = (_DWORD *)v11;
  *v10 = a1;
  v10[1] = 0x10000;
  v10[2] = a2;
  v13 = HvcallCodeVa();
  *a3 = *v12;
  *a4 = v12[1];
  LODWORD(v10) = v13 != 0 ? 0xC0000001 : 0;
  *a5 = v12[2];
  *a6 = v12[3];
  HvlpReleaseHypercallPage((__int64)v15);
  HvlpReleaseHypercallPage((__int64)v16);
  return (unsigned int)v10;
}
