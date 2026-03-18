/*
 * XREFs of ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C0195AEC
 * Callers:
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02B99A0 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0116348 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

bool __fastcall CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
        CMultipleConsumerWorkQueue *this,
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem *const a2,
        const unsigned int *a3,
        bool *a4)
{
  void *v7; // r11
  __int64 v8; // rbx
  bool v9; // si
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp+10h] BYREF

  v7 = **(void ***)(*((_QWORD *)a2 + 5) + 8LL);
  if ( !a3 )
  {
    KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
LABEL_3:
    if ( a4 )
      *a4 = 0;
    v8 = *((_QWORD *)this + 1);
    v9 = *((_DWORD *)a2 + 2) == 3;
    ListEntry = (PSLIST_ENTRY)*((_QWORD *)a2 + 5);
    EngFreeMem(a2);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8) > 8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8);
      CEventPool::CEventPoolEntry::Destroy((struct CEventPool::CEventPoolEntry *const)ListEntry);
    }
    else
    {
      KeResetEvent(**((PRKEVENT **)&ListEntry->Next + 1));
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v8 + 16), ListEntry);
    }
    return v9;
  }
  Timeout.QuadPart = -10000LL * *a3;
  if ( KeWaitForSingleObject(v7, Executive, 0, 0, &Timeout) != 258 )
    goto LABEL_3;
  if ( a4 )
    *a4 = 1;
  return 0;
}
