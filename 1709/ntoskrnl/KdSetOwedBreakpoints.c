/*
 * XREFs of KdSetOwedBreakpoints @ 0x140202380
 * Callers:
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140799DAC (KdpSetOwedBreakpoints.c)
 */

__int64 KdSetOwedBreakpoints()
{
  __int64 result; // rax

  if ( !KdPitchDebugger )
  {
    if ( KdpOweBreakpoint )
      return KdpSetOwedBreakpoints();
  }
  return result;
}
