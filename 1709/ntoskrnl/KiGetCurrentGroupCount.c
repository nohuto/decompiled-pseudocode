/*
 * XREFs of KiGetCurrentGroupCount @ 0x1401324A0
 * Callers:
 *     KiUpdateProcessorCount @ 0x140425510 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_14038A084;
}
