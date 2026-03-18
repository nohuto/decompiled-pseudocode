/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1C000E55C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetInkProcessorIsInkDevice(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  if ( (int)IsInkProcessorIsInkDeviceSupported() < 0 )
    return 0LL;
  else
    return InkProcessorIsInkDevice(a1, a2, a3, 0LL);
}
