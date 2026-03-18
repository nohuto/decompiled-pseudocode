/*
 * XREFs of EtwTraceGreMovePointerEnd @ 0x1C00966C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E3664 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceGreMovePointerEnd(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *Arg2)
{
  ULONG result; // eax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqq(Arg0, &GreMovePointerEnd, Arg2, (const unsigned int)Arg0, Arg1, (const unsigned int)Arg2);
  return result;
}
