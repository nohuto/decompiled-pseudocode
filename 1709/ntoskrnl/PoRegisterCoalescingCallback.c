/*
 * XREFs of PoRegisterCoalescingCallback @ 0x1405CC440
 * Callers:
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140848F38 (PopCoalescingInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExCompareExchangeCallBack @ 0x14014990C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(
        unsigned __int64 a1,
        char a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned __int64 a4)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rbx
  __int64 v9; // rdi

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x62436F50u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2].Count = (unsigned __int64)PoolWithTag;
  PoolWithTag[1].Count = (unsigned __int64)PopCoalescingCallback;
  PoolWithTag[5].Count = a4;
  PoolWithTag[3].Count = a1;
  LOBYTE(PoolWithTag[4].Count) = a2 != 0;
  ExInitializePushLock(&PoolWithTag->Count);
  v9 = 0LL;
  while ( !ExCompareExchangeCallBack(&PopCoalescingCallbackRoutine[v9], PoolWithTag, 0LL) )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0x20 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225485LL;
    }
  }
  _InterlockedIncrement(&PopCoalescingCallbackRoutineCount);
  *a3 = PoolWithTag;
  return 0LL;
}
