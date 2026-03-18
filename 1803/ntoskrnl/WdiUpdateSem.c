/*
 * XREFs of WdiUpdateSem @ 0x1402ACDC0
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1407A10E8 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
