/*
 * XREFs of EtwTraceGreMovePointerBegin @ 0x1C008E750
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00DCC0C (Template_ddd.c)
 */

__int64 __fastcall EtwTraceGreMovePointerBegin(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_ddd(a1, (unsigned int)&GreMovePointerBegin, a3, a1, a2, a3);
  return result;
}
