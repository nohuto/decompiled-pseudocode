/*
 * XREFs of HvlpCommitLpIndices @ 0x14017AD2C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x140156B30 (HvcallInitiateHypercall.c)
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
