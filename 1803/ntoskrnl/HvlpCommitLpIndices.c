/*
 * XREFs of HvlpCommitLpIndices @ 0x1401A55CC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017692C (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14015D800 (HvcallInitiateHypercall.c)
 */

__int64 HvlpCommitLpIndices()
{
  _DWORD *v0; // rax
  unsigned int v1; // ebx
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-28h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v3, 1, 0LL, 8LL);
  v0[1] = HvlpActiveProcessorCount;
  *v0 = 5;
  v1 = (unsigned __int16)HvcallInitiateHypercall() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v3);
  return v1;
}
