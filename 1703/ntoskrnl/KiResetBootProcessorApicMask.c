/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1406AC078
 * Callers:
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(KiProcessorBlock[0] + 142);
  *(_DWORD *)(KiProcessorBlock[0] + 220) = ~(*(unsigned __int8 *)(KiProcessorBlock[0] + 142)
                                           * *(unsigned __int8 *)(KiProcessorBlock[0] + 143)
                                           - 1);
  return result;
}
