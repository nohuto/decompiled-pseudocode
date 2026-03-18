/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1400065D4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x14008E554 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11000uLL, 0x42506343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    v1[4] = 0;
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
