/*
 * XREFs of PfTGenerateTrace @ 0x14053B120
 * Callers:
 *     PfTLoggingWorker @ 0x14062C1C0 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x140510250 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x14053B170 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_1403CD4B0;
    qword_1403CD240 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
