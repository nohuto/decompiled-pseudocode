/*
 * XREFs of KdSetOwedBreakpoints @ 0x14023F4E0
 * Callers:
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140806ED4 (KdpSetOwedBreakpoints.c)
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
