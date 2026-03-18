/*
 * XREFs of EtwTraceRitDisEngaged @ 0x1C009C250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceRitDisEngaged(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0(a1, &RitDisEngaged, &W32kControlGuid);
  return result;
}
