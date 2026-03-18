/*
 * XREFs of HvlpStartVirtualProcessor @ 0x1401E6868
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1401E6E00 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int128 v6; // xmm0
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = HvlpAcquireHypercallPage(v8, 1, 0LL, 240LL);
  *(_QWORD *)v5 = -1LL;
  *(_QWORD *)(v5 + 8) = a1;
  v5 += 16LL;
  *(_OWORD *)v5 = *a2;
  *(_OWORD *)(v5 + 16) = a2[1];
  *(_OWORD *)(v5 + 32) = a2[2];
  *(_OWORD *)(v5 + 48) = a2[3];
  *(_OWORD *)(v5 + 64) = a2[4];
  *(_OWORD *)(v5 + 80) = a2[5];
  *(_OWORD *)(v5 + 96) = a2[6];
  v5 += 128LL;
  v6 = a2[7];
  a2 += 8;
  *(_OWORD *)(v5 - 16) = v6;
  *(_OWORD *)v5 = *a2;
  *(_OWORD *)(v5 + 16) = a2[1];
  *(_OWORD *)(v5 + 32) = a2[2];
  *(_OWORD *)(v5 + 48) = a2[3];
  *(_OWORD *)(v5 + 64) = a2[4];
  *(_OWORD *)(v5 + 80) = a2[5];
  if ( (unsigned __int16)HvcallCodeVa() )
    v4 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v8);
  return v4;
}
