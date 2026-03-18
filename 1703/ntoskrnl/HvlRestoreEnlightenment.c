/*
 * XREFs of HvlRestoreEnlightenment @ 0x1401E4E84
 * Callers:
 *     PopHiberCheckResume @ 0x140409FA0 (PopHiberCheckResume.c)
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
