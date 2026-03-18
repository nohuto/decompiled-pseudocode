/*
 * XREFs of KdpAllowDisable @ 0x14078C0A4
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x14016832C (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 */

__int64 KdpAllowDisable()
{
  ULONG ActiveProcessorCount; // eax
  int v1; // r9d
  __int64 *i; // r8

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v1 = 0;
  if ( !ActiveProcessorCount )
    return 0LL;
  for ( i = KiProcessorBlock; !*(_BYTE *)(*i + 328); ++i )
  {
    if ( ++v1 >= ActiveProcessorCount )
      return 0LL;
  }
  return 3221225506LL;
}
