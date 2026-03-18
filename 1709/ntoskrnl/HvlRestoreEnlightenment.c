/*
 * XREFs of HvlRestoreEnlightenment @ 0x1401E9C28
 * Callers:
 *     PopHiberCheckResume @ 0x1404335B0 (PopHiberCheckResume.c)
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
