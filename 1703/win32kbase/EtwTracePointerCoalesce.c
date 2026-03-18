/*
 * XREFs of EtwTracePointerCoalesce @ 0x1C00DA1C0
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011BD68 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     Template_hhq @ 0x1C00DC090 (Template_hhq.c)
 */

__int64 __fastcall EtwTracePointerCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return Template_hhq(a1, (unsigned int)&PointerDelegateCoalesce, a3, (unsigned __int16)a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return Template_hhq(a1, (unsigned int)&PointerCoalesce, 0, (unsigned __int16)a1, a2, 0);
  }
  return result;
}
