/*
 * XREFs of EtwTraceCursorSize @ 0x1C00D9C30
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00DCC0C (Template_ddd.c)
 */

__int64 __fastcall EtwTraceCursorSize(int a1, char a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_ddd(a1, (unsigned int)&CursorSize, a3, a1, a2, a3);
  return result;
}
