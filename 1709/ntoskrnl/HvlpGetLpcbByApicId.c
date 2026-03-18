/*
 * XREFs of HvlpGetLpcbByApicId @ 0x1401EA830
 * Callers:
 *     KiQueryProcessorNode @ 0x14013936C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x1401E9ED0 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x1406B31E4 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByApicId(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 30;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
