/*
 * XREFs of KdSetOwedBreakpoints @ 0x1401FC660
 * Callers:
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x14078CB8C (KdpSetOwedBreakpoints.c)
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
