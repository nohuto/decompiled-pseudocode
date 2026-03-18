/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1407735D8
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140771D94 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x14077292C (TtmCleanupCurrentSession.c)
 *     TtmiRemoveQueueFromSession @ 0x1407731E0 (TtmiRemoveQueueFromSession.c)
 *     TtmpSessionWorker @ 0x1407736B0 (TtmpSessionWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
