/*
 * XREFs of HvlLpReadCpuid @ 0x1401E6F80
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v11; // rbx
  _DWORD *v12; // r14
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-68h] BYREF
  PHYSICAL_ADDRESS v15[3]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0;
  v11 = HvlpAcquireHypercallPage(v14, 1, 0LL, 16LL);
  v12 = (_DWORD *)HvlpAcquireHypercallPage(v15, 2, 0LL, 16LL);
  *(_DWORD *)v11 = a1;
  *(_DWORD *)(v11 + 4) = 0x10000;
  *(_QWORD *)(v11 + 8) = a2;
  if ( (unsigned __int16)HvcallCodeVa() )
    v6 = -1073741823;
  *a3 = *v12;
  *a4 = v12[1];
  *a5 = v12[2];
  *a6 = v12[3];
  HvlpReleaseHypercallPage((__int64)v14);
  HvlpReleaseHypercallPage((__int64)v15);
  return v6;
}
