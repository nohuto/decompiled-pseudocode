/*
 * XREFs of WdiUpdateSem @ 0x140279AEC
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14073DDC8 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
