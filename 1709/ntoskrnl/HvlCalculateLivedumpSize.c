/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1401EF970
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x14042B67C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     HvlCalculateLivedumpBufferSize @ 0x1401F1470 (HvlCalculateLivedumpBufferSize.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1401F229C (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // r10

  if ( (HvlpRootFlags & 2) == 0 || !qword_1403866A8 || !HvlpHypervisorStatsPage )
    return 3221225659LL;
  result = HvlCalculateLivedumpBufferSize(*(_QWORD *)(HvlpHypervisorStatsPage + 24), a1);
  if ( (int)result >= 0 )
  {
    if ( VslVsmEnabled )
      return VslLiveDumpQuerySecondaryDataSize(v2);
    else
      *v2 = (unsigned __int64)(unsigned int)dword_1403866B8 << 12;
  }
  return result;
}
