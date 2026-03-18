/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1406D9958
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1406D8250 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1406D8DC4 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x1406DADE0 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
