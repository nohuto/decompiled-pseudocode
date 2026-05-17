/*
 * XREFs of LdrpWorkCallback @ 0x1800106E0
 * Callers:
 *     TppWorkpExecuteCallback @ 0x18000EE70 (TppWorkpExecuteCallback.c)
 * Callees:
 *     LdrpUpdateStatistics @ 0x180010768 (LdrpUpdateStatistics.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 */

void LdrpWorkCallback()
{
  __int64 *v0; // rbx
  __int64 v1; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v0 = (__int64 *)LdrpWorkQueue;
    v1 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v1 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v1 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v0 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v0 )
      LdrpProcessWork(v0 - 8, 0LL);
  }
}
