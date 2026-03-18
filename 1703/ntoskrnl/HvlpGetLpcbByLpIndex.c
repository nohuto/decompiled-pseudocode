/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1401E5A0C
 * Callers:
 *     KiQueryProcessorNode @ 0x140155188 (KiQueryProcessorNode.c)
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1401E5120 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1401E52B0 (HvlQueryProcessorTopologyEx.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[1] != a1 )
  {
    ++v2;
    result += 28;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
