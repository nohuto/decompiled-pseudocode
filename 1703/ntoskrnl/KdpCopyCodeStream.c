/*
 * XREFs of KdpCopyCodeStream @ 0x14078C374
 * Callers:
 *     KdpAddBreakpoint @ 0x14078C6A0 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x14078C910 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x14078C974 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x14078CA10 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x14078CACC (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x14078CB8C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x14078C474 (KdpCopyMemoryChunks.c)
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
