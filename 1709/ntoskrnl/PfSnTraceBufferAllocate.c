/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1400106D0
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x140012EB8 (PfSnTraceGetLogEntry.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
