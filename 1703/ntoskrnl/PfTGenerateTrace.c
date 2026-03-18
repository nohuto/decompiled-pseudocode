/*
 * XREFs of PfTGenerateTrace @ 0x140420A44
 * Callers:
 *     PfTLoggingWorker @ 0x1405D7720 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x140420A90 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x140498398 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_14036DC30;
    qword_14036D9C0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
