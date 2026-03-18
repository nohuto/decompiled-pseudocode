/*
 * XREFs of PfTGenerateTrace @ 0x14045692C
 * Callers:
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x140456970 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x140457178 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140387BB0;
    qword_140387940 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
