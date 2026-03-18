/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1C0004CD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStop(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0(a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
