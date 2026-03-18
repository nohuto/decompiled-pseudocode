/*
 * XREFs of EtwTraceEndPointerFrameMessageGeneration @ 0x1C00E0250
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E3664 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameMessageGeneration(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *a3)
{
  ULONG result; // eax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq(Arg0, &EndPointerFrameMessageGeneration, a3, (const unsigned int)Arg0, Arg1, 0);
  return result;
}
