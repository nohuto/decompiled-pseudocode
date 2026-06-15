/*
 * XREFs of ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800D80F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1800D6AA8 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x1800D8084 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  struct Windows::Internal::ComTaskPool::TaskData *v4; // rbx

  if ( Context[97] )
  {
    v4 = 0LL;
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( Context[97] )
    {
      Windows::Internal::ComTaskPool::s_fCanReuseThreads = 0;
      v4 = Windows::Internal::ComTaskPool::TaskList::PopFront((Windows::Internal::ComTaskPool::TaskList *)(Context + 24));
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( v4 )
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v4);
  }
}
