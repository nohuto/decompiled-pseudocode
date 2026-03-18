/*
 * XREFs of HvlRestoreEnlightenment @ 0x140226D18
 * Callers:
 *     PopHiberCheckResume @ 0x140475210 (PopHiberCheckResume.c)
 * Callees:
 *     <none>
 */

__int64 HvlRestoreEnlightenment()
{
  __int64 result; // rax

  result = (unsigned int)HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  return result;
}
