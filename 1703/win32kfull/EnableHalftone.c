/*
 * XREFs of EnableHalftone @ 0x1C0117B70
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0117BE8 (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C032C838 = EngCreateSemaphore();
  if ( !qword_1C032C838 )
    return 0LL;
  Src = 0LL;
  qword_1C032C85C = 0LL;
  dword_1C032C858 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C032C864 = 0;
  qword_1C032C830 = EngCreateSemaphore();
  if ( !qword_1C032C830 )
    return 0LL;
  word_1C032C866 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
