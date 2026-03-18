/*
 * XREFs of EtwTraceFocusChange @ 0x1C0090490
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qq @ 0x1C00E2A1C (McTemplateK0qq.c)
 */

void __fastcall EtwTraceFocusChange(PETHREAD *a1, __int64 a2, const GUID *a3)
{
  unsigned int Arg1; // ebx
  unsigned int ThreadId; // esi

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8000000000002000uLL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x8000000000002000uLL) != 0
    && (qword_1C0188D98 & 0x8000000000002000uLL) == qword_1C0188D98 )
  {
    Arg1 = 0;
    if ( gptiForeground || a1 )
    {
      ThreadId = 0;
      if ( gptiForeground )
        ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)gptiForeground);
      if ( a1 )
        Arg1 = (unsigned int)PsGetThreadId(*a1);
      if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        McTemplateK0qq(
          (PMCGEN_TRACE_CONTEXT)(unsigned int)Microsoft_Windows_Win32kEnableBits,
          &FocusEvent,
          a3,
          ThreadId,
          Arg1);
    }
  }
}
