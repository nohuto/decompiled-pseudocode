/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x140227908
 * Callers:
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     KiQueryProcessorNode @ 0x140176410 (KiQueryProcessorNode.c)
 *     HvlSharedIsr @ 0x140226D70 (HvlSharedIsr.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140227060 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140227200 (HvlQueryProcessorTopologyEx.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(int a1)
{
  int *result; // rax
  __int64 v2; // rdx
  unsigned int v3; // r8d

  result = HvlpLogicalProcessorRegions;
  v2 = 0LL;
  v3 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    while ( result[1] != a1 )
    {
      ++v3;
      result += 30;
      if ( v3 >= (unsigned int)HvlpLogicalProcessorCount )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( !a1 )
      return result;
    return (int *)v2;
  }
  return result;
}
