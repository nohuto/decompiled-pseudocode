/*
 * XREFs of PfSnTraceBufferAllocate @ 0x14012CFC8
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x1400B31C4 (PfSnTraceGetLogEntry.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
