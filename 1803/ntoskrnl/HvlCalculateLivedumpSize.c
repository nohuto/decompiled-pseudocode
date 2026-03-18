/*
 * XREFs of HvlCalculateLivedumpSize @ 0x14022C980
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x14048217C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     HvlCalculateLivedumpBufferSize @ 0x14022EFEC (HvlCalculateLivedumpBufferSize.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14022FDBC (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // r10

  if ( (HvlpRootFlags & 2) == 0 || !qword_1403C9BC8 || !HvlpHypervisorStatsPage )
    return 3221225659LL;
  result = HvlCalculateLivedumpBufferSize(*(_QWORD *)(HvlpHypervisorStatsPage + 24), a1);
  if ( (int)result >= 0 )
  {
    if ( VslVsmEnabled )
      return VslLiveDumpQuerySecondaryDataSize(v2);
    else
      *v2 = (unsigned __int64)(unsigned int)dword_1403C9BD8 << 12;
  }
  return result;
}
