/*
 * XREFs of LdrpDrainWorkQueue @ 0x18004AAA4
 * Callers:
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18002E270 (LdrpFastpthReloadedDll.c)
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     LdrpFindLoadedDll @ 0x180035548 (LdrpFindLoadedDll.c)
 *     RtlQueryInformationActivationContext @ 0x180037100 (RtlQueryInformationActivationContext.c)
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180082C20 (LdrEnumerateLoadedModules.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2880 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpUpdateStatistics @ 0x180010768 (LdrpUpdateStatistics.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  char v4; // bp
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _TEB *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v4 = LdrpDetourExist;
      if ( !LdrpDetourExist || a1 == 1 )
      {
        v5 = (__int64 *)LdrpWorkQueue;
        if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
          || (v6 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
        *(_QWORD *)(v6 + 8) = &LdrpWorkQueue;
        if ( &LdrpWorkQueue == v5 )
        {
          if ( LdrpWorkInProgress == a1 )
          {
            LdrpWorkInProgress = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
      }
      else
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
        v5 = &LdrpWorkQueue;
      }
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( v2 )
        break;
      if ( &LdrpWorkQueue == v5 )
      {
        NtWaitForSingleObject(v1, 0, 0LL);
      }
      else
      {
        LOBYTE(v7) = v4;
        LdrpProcessWork(v5 - 8, v7);
      }
    }
    if ( !a1 || (__int64 *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v9 = LdrpRetryQueue;
    *(_QWORD *)(LdrpRetryQueue + 8) = &LdrpWorkQueue;
    LdrpWorkQueue = v9;
    v10 = qword_18015F258;
    *(_QWORD *)qword_18015F258 = &LdrpWorkQueue;
    qword_18015F2B8 = v10;
    qword_18015F258 = (__int64)&LdrpRetryQueue;
    LdrpRetryQueue = (__int64)&LdrpRetryQueue;
    LdrpRetryingModuleIndex = 0LL;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
