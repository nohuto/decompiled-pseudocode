/*
 * XREFs of EnableHalftone @ 0x1C0121490
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0121508 (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0327AD8 = EngCreateSemaphore();
  if ( !qword_1C0327AD8 )
    return 0LL;
  Src = 0LL;
  qword_1C0327AFC = 0LL;
  dword_1C0327AF8 = 0;
  qword_1C0327AC8 = EngCreateSemaphore();
  if ( !qword_1C0327AC8 )
    return 0LL;
  word_1C0327B04 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0327B06 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
