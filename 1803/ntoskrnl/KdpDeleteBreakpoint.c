/*
 * XREFs of KdpDeleteBreakpoint @ 0x140806B40
 * Callers:
 *     KdpRestoreBreakPointEx @ 0x1408049C4 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140805B18 (KdpWriteBreakPointEx.c)
 *     KdpDeleteBreakpointRange @ 0x140806BA8 (KdpDeleteBreakpointRange.c)
 * Callees:
 *     KdpLowWriteContent @ 0x140806D44 (KdpLowWriteContent.c)
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
  v3 = *((_DWORD *)&unk_1403B5960 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&unk_1403B5960 + 10 * v1) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&unk_1403B5960 + 2 * v2) = 0;
  }
  return 1;
}
