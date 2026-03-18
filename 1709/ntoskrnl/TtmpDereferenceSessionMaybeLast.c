/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x14070FD64
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x14070E5D8 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x14070F158 (TtmCleanupCurrentSession.c)
 *     TtmiRemoveQueueFromSession @ 0x14070F970 (TtmiRemoveQueueFromSession.c)
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
