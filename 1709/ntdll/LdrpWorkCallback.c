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

void __fastcall LdrpWorkCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v3 = (__int64 *)LdrpWorkQueue;
    v4 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v4 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v4 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v3 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v3 )
      LdrpProcessWork(v3 - 8, 0LL);
  }
}
