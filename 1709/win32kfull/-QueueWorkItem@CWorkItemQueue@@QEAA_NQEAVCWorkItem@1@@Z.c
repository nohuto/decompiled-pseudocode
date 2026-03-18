/*
 * XREFs of ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C01A0D60
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0037290 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWorkItemQueue::QueueWorkItem(CWorkItemQueue *this, struct CWorkItemQueue::CWorkItem *const a2)
{
  if ( *(_BYTE *)this )
    return 0;
  *((_DWORD *)a2 + 2) = 1;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 1, (PSLIST_ENTRY)a2);
  KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
  return 1;
}
