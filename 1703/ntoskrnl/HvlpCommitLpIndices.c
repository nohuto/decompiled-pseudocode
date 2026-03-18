/*
 * XREFs of HvlpCommitLpIndices @ 0x14017B4BC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140155358 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpCommitLpIndices()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v1 = (_DWORD *)HvlpAcquireHypercallPage(v3, 1LL, 0LL, 8LL);
  v1[1] = HvlpActiveProcessorCount;
  *v1 = 5;
  if ( (unsigned __int16)HvcallCodeVa() )
    v0 = -1073741823;
  HvlpReleaseHypercallPage(v3);
  return v0;
}
