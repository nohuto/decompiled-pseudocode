/*
 * XREFs of EtwTraceDwmManipulationFrameRouted @ 0x1C00E0070
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qq @ 0x1C00E2A1C (McTemplateK0qq.c)
 */

ULONG __fastcall EtwTraceDwmManipulationFrameRouted(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *a3)
{
  ULONG result; // eax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qq(Arg0, &DwmManipulationFrameRouted, a3, (const unsigned int)Arg0, Arg1);
  return result;
}
