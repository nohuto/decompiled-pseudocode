/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C00D9DA0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000) != 0 )
    return TemplateEventDescriptor(a1, &EdgyDetectionStart, &W32kControlGuid);
  return result;
}
