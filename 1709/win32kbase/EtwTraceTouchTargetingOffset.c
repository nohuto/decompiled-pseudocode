/*
 * XREFs of EtwTraceTouchTargetingOffset @ 0x1C00E1760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0dddd @ 0x1C00E2780 (McTemplateK0dddd.c)
 */

__int64 __fastcall EtwTraceTouchTargetingOffset(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0dddd(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
