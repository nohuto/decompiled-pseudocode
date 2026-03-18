/*
 * XREFs of EtwTraceDockState @ 0x1C00E0040
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E271C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceDockState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    return McTemplateK0q(a1, &SystemDockState, a3, (unsigned int)a1);
  return result;
}
