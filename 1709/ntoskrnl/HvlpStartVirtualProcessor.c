/*
 * XREFs of HvlpStartVirtualProcessor @ 0x1401EB6EC
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1401EC1A0 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF

  v4 = HvlpAcquireHypercallPage(v8, 1, 0LL, 240LL);
  *(_QWORD *)v4 = -1LL;
  *(_QWORD *)(v4 + 8) = a1;
  v4 += 16LL;
  *(_OWORD *)v4 = *a2;
  *(_OWORD *)(v4 + 16) = a2[1];
  *(_OWORD *)(v4 + 32) = a2[2];
  *(_OWORD *)(v4 + 48) = a2[3];
  *(_OWORD *)(v4 + 64) = a2[4];
  *(_OWORD *)(v4 + 80) = a2[5];
  *(_OWORD *)(v4 + 96) = a2[6];
  v4 += 128LL;
  v5 = a2[7];
  a2 += 8;
  *(_OWORD *)(v4 - 16) = v5;
  *(_OWORD *)v4 = *a2;
  *(_OWORD *)(v4 + 16) = a2[1];
  *(_OWORD *)(v4 + 32) = a2[2];
  *(_OWORD *)(v4 + 48) = a2[3];
  *(_OWORD *)(v4 + 64) = a2[4];
  *(_OWORD *)(v4 + 80) = a2[5];
  v6 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v8);
  return v6;
}
