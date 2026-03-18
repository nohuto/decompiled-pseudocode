/*
 * XREFs of KiGetCurrentGroupCount @ 0x14003C98C
 * Callers:
 *     KiUpdateProcessorCount @ 0x140410E0C (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_14036E620;
}
