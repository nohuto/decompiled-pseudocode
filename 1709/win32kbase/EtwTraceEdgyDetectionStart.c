/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C00E00D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x1000000) != 0 )
    return McTemplateK0(a1, &EdgyDetectionStart, &W32kControlGuid);
  return result;
}
