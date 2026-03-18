/*
 * XREFs of KdpDeleteBreakpoint @ 0x14078C828
 * Callers:
 *     KdpRestoreBreakPointEx @ 0x14078A6E0 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x14078B818 (KdpWriteBreakPointEx.c)
 *     KdpDeleteBreakpointRange @ 0x14078C88C (KdpDeleteBreakpointRange.c)
 * Callees:
 *     KdpLowWriteContent @ 0x14078CA10 (KdpLowWriteContent.c)
 */

char __fastcall KdpDeleteBreakpoint(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&KdpBreakpointTable + 2 * v2 + 8) = 0;
  }
  return 1;
}
