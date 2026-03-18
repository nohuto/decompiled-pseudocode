/*
 * XREFs of _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C0195C74
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C0090830 (UmfdQueryFontData.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0116348 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(
        __int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int32 *v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(volatile signed __int32 **)a1;
  if ( (unsigned int)_InterlockedIncrement(*(volatile signed __int32 **)a1) > 8 )
  {
    _InterlockedDecrement(v2);
    CEventPool::CEventPoolEntry::Destroy((struct CEventPool::CEventPoolEntry *const)v1);
  }
  else
  {
    KeResetEvent(**(PRKEVENT **)(v1 + 8));
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v2 + 1, (PSLIST_ENTRY)v1);
  }
}
