/*
 * XREFs of KiGetCurrentGroupCount @ 0x1400D2E9C
 * Callers:
 *     KiUpdateProcessorCount @ 0x14047BC08 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_1403CDEC4;
}
