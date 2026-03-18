/*
 * XREFs of KiResetProcessorTraceBuffer @ 0x140241230
 * Callers:
 *     SwapContext @ 0x1401B1E80 (SwapContext.c)
 * Callees:
 *     <none>
 */

__int64 KiResetProcessorTraceBuffer()
{
  unsigned __int8 CurrentIrql; // r9
  unsigned __int64 v1; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v1 = __readmsr(0x570u);
  if ( (v1 & 1) != 0 )
  {
    __writemsr(0x570u, v1 & 0xFFFFFFFFFFFFFFFEuLL);
    __writemsr(0x561u, 0LL);
    __writemsr(0x571u, 0LL);
    __writemsr(0x570u, v1);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
