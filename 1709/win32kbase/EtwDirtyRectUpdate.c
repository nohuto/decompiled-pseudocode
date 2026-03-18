/*
 * XREFs of EtwDirtyRectUpdate @ 0x1C007D5B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq @ 0x1C00E3010 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall EtwDirtyRectUpdate(int a1, char a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pqqqq(a1, (unsigned int)&DirtyRectUpdate, a3, a1, a2, a3, a4, a5);
  return result;
}
