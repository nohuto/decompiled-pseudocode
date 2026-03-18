/*
 * XREFs of WdiUpdateSem @ 0x1402526B0
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x140705878 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
