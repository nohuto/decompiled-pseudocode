/*
 * XREFs of _local_unwind @ 0x180091A40
 * Callers:
 *     EvtIntReportEventWorker @ 0x180016898 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18008C4E0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
