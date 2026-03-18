/*
 * XREFs of NtIsUILanguageComitted @ 0x14045C1AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  return PsUILanguageComitted == 0 ? 0xC0000034 : 0;
}
