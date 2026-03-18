/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1406D7318
 * Callers:
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
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
