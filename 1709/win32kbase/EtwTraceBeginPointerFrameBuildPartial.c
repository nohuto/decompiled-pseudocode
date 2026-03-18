/*
 * XREFs of EtwTraceBeginPointerFrameBuildPartial @ 0x1C00DFC00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E3664 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceBeginPointerFrameBuildPartial(
        struct _MCGEN_TRACE_CONTEXT *Arg1,
        unsigned int Arg2,
        const GUID *a3)
{
  ULONG result; // eax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq(Arg1, &BeginPointerFrameBuildPartial, a3, 0, (const unsigned int)Arg1, Arg2);
  return result;
}
