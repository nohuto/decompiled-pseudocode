/*
 * XREFs of EtwTraceCursorSize @ 0x1C00DFFA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E3664 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceCursorSize(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *Arg2)
{
  ULONG result; // eax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qqq(Arg0, &CursorSize, Arg2, (const unsigned int)Arg0, Arg1, (const unsigned int)Arg2);
  return result;
}
