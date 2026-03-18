/*
 * XREFs of KdpSuspendAllBreakpoints @ 0x14078CD0C
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x14016832C (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KdpLowWriteContent @ 0x14078CA10 (KdpLowWriteContent.c)
 */

char KdpSuspendAllBreakpoints()
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  char result; // al

  for ( i = 1; i <= 0x20; ++i )
  {
    v1 = i - 1;
    result = *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8) & 5;
    if ( result == 1 )
    {
      *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8) |= 4u;
      result = KdpLowWriteContent(v1);
    }
  }
  return result;
}
