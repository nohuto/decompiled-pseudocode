/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C0090710
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E3664 (McTemplateK0qqq.c)
 */

char __fastcall EtwTraceFocusedProcessChange(GUID *Activity, __int64 a2)
{
  char result; // al
  struct _MCGEN_TRACE_CONTEXT *Arg1; // rcx
  unsigned int Arg2; // edx

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8000000000020000uLL) != 0 )
  {
    result = byte_1C0188DA8 - 1;
    if ( (unsigned __int8)(byte_1C0188DA8 - 1) > 2u && (qword_1C0188D90 & 0x8000000000020000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C0188D98 & 0x8000000000020000uLL) == qword_1C0188D98 )
      {
        Arg1 = 0LL;
        if ( Activity )
          Arg2 = *(_DWORD *)(*(_QWORD *)&Activity[25].Data1 + 56LL);
        else
          Arg2 = 0;
        if ( a2 )
          Arg1 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(*(_QWORD *)(a2 + 400) + 56LL);
        result = (char)Microsoft_Windows_Win32kEnableBits;
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
          return McTemplateK0qqq(Arg1, &FocusedProcessChangeEvent, Activity, gSessionId, (const unsigned int)Arg1, Arg2);
      }
    }
  }
  return result;
}
