/*
 * XREFs of EtwTraceBeginPointerFrameBuildPartial @ 0x1C00D98A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00DCC0C (Template_ddd.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameBuildPartial(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&BeginPointerFrameBuildPartial, a3, 0, a1, a2);
  return result;
}
