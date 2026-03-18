/*
 * XREFs of HvlpGetLpcbByApicId @ 0x1402278D8
 * Callers:
 *     KiQueryProcessorNode @ 0x140176410 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x14017692C (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x140226F70 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140717D50 (HvlpEnableRootVirtualProcessor.c)
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
