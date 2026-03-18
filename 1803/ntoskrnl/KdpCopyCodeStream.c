/*
 * XREFs of KdpCopyCodeStream @ 0x140806678
 * Callers:
 *     KdpAddBreakpoint @ 0x1408069B4 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140806C2C (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140806C90 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140806D44 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x140806E14 (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140806ED4 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140806778 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(PVOID BaseAddress, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(BaseAddress, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(BaseAddress, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
